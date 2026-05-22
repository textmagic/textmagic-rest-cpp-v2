[comment]: <> (HEAD)
# TextMagic C++ SDK

[![GitHub release](https://img.shields.io/github/v/release/textmagic/textmagic-rest-cpp-v2)](https://github.com/textmagic/textmagic-rest-cpp-v2/releases)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![C++ Standard](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://isocpp.org/)
[![CMake](https://img.shields.io/badge/CMake-3.15%2B-blue.svg)](https://cmake.org/)

This library provides you with an easy way to send SMS and receive replies by integrating the TextMagic SMS Gateway into your C++ application.

## What Is TextMagic?

TextMagic's application programming interface (API) provides the communication link between your application and TextMagic's SMS Gateway, allowing you to send and receive text messages and to check the delivery status of text messages you've already sent.

For detailed documentation, please visit [https://docs.textmagic.com/](https://docs.textmagic.com/).

[comment]: <> (/HEAD)
## Requirements

* CMake 3.15 or later (https://cmake.org/)
* Modern C++ compiler with C++17 support
* cpprestsdk (https://github.com/microsoft/cpprestsdk)

**Platform-specific installation:**

```bash
# Ubuntu/Debian
apt-get install build-essential cmake libcpprest-dev libboost-all-dev

# macOS
brew install cmake cpprestsdk boost

# Windows (vcpkg)
vcpkg install cpprestsdk cpprestsdk:x64-windows boost
```

## Quick Start

```cpp
#include "TextMagic/ApiClient.h"
#include "TextMagic/ApiConfiguration.h"
#include "TextMagic/api/TextMagicApi.h"

using namespace com::textmagic::client::api;

int main() {
    // Configure API client
    std::shared_ptr<ApiClient> apiClient(new ApiClient);
    std::shared_ptr<ApiConfiguration> apiConfig(new ApiConfiguration);

    // Set credentials from https://app.textmagic.com/settings/api
    apiConfig->setBaseUrl("https://rest.textmagic.com");
    apiConfig->getHttpConfig().set_credentials(
        web::credentials("YOUR_USERNAME", "YOUR_API_KEY")
    );
    apiClient->setConfiguration(apiConfig);

    // Create API instance
    TextMagicApi api(apiClient);

    // Test connection
    pplx::task<std::shared_ptr<PingResponse>> pingResponse = api.ping();
    pingResponse.wait();

    try {
        std::cout << "✅ Connected! Server time: "
                  << pingResponse.get()->getPing() << std::endl;
    } catch(const std::exception& e) {
        std::cout << "❌ Error: " << e.what() << std::endl;
    }

    return 0;
}
```

## Installation

Download and extract the library archive:
```shell
wget https://github.com/textmagic/textmagic-rest-cpp-v2/archive/v3.0.50038.tar.gz && \
tar zxf v3.0.50038.tar.gz && \
rm -f v3.0.50038.tar.gz && \
cd textmagic-rest-cpp-v2-3.0.50038
```
Build using CMake:
```shell
cmake . && cmake --build .
```
The output library file will be placed in the `textmagic-rest-cpp-v2-3.0.50038/lib` directory.

## Usage Example
In the example below, we assume that you moved the library sources `textmagic-rest-cpp-v2-3.0.50038` directory to your test project root directory.

Configure your `CMakeLists.txt` as shown here:
```cmake
cmake_minimum_required(VERSION 3.15)
project(test)

# Set C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(cpprestsdk REQUIRED)
find_package(Boost REQUIRED)

# Create executable
add_executable(app main.cpp)

# Import TextMagic library
add_library(TextMagic SHARED IMPORTED)
set_property(TARGET TextMagic
    PROPERTY IMPORTED_LOCATION
    "${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2-3.0.50038/lib/libTextMagic.so"
)

# Set include directories
target_include_directories(app PRIVATE
    ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2-3.0.50038/include
)

# Link libraries
target_link_libraries(app
    Boost::headers
    cpprestsdk::cpprest
    TextMagic
)
```

`main.cpp` file example:
```cpp
#include <iostream>
#include <fstream>
#include "textmagic-rest-cpp-v2-3.0.50038/include/TextMagic/ApiClient.h"
#include "textmagic-rest-cpp-v2-3.0.50038/include/TextMagic/ApiConfiguration.h"
#include "textmagic-rest-cpp-v2-3.0.50038/include/TextMagic/api/TextMagicApi.h"

using namespace com::textmagic::client::api;

int main() {
    std::shared_ptr<ApiClient> apiClient(new ApiClient);
    std::shared_ptr<ApiConfiguration> apiConfig(new ApiConfiguration);

    // Put your Username and API Key from https://app.textmagic.com/settings/api page.
    apiConfig->setBaseUrl("https://rest.textmagic.com");
    apiConfig->getHttpConfig().set_credentials(web::credentials("YOUR_NAME", "YOUR_API_KEY"));
    apiClient->setConfiguration(apiConfig);

    TextMagicApi api(apiClient);

    // Simple ping request example
    pplx::task<std::shared_ptr<PingResponse>> pingResponse = api.ping();
    pingResponse.wait();

    try {
        std::cout << pingResponse.get()->getPing() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getPing() exception: " << e.what() << '\n';
    }

    // Send a new message request example
    std::shared_ptr<SendMessageInputObject> sendMessageInputObject(new SendMessageInputObject);
    sendMessageInputObject->setPhones("+19998887766");
    sendMessageInputObject->setText("I love TextMagic!");

    pplx::task<std::shared_ptr<SendMessageResponse>> sendMessageResponse = api.sendMessage(sendMessageInputObject);
    sendMessageResponse.wait();

    try {
        std::cout << sendMessageResponse.get()->getId() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getId() exception: " << e.what() << '\n';
    }

    // Get all outgoing messages request example
    pplx::task<std::shared_ptr<GetAllOutboundMessagesPaginatedResponse>> getAllOutboundMessagesResponse = api.getAllOutboundMessages(boost::none, boost::none, boost::none);
    getAllOutboundMessagesResponse.wait();

    try {
        std::cout << getAllOutboundMessagesResponse.get()->getResources()[0]->getId() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getId() exception: " << e.what() << '\n';
    }

    // Upload list avatar request example
    std::filebuf fb;
    fb.open ("test.jpg", std::ios::in);
    std::shared_ptr<std::istream> is(new std::istream(&fb));

    std::shared_ptr<HttpContent> image(new HttpContent);
    image->setName("test");
    image->setContentDisposition("attachment");
    image->setFileName("test.jpg");

    image->setContentType("image/jpeg");
    image->setData(is);

    // List ID in current example is 3223
    pplx::task<std::shared_ptr<ResourceLinkResponse>> resourceLinkResponse = api.uploadListAvatar(image, 3223);
    resourceLinkResponse.wait();

    try {
        std::cout << resourceLinkResponse.get()->getId() << '\n';
    } catch(const std::exception& e) {
        std::cout << "getId() exception: " << e.what() << '\n';
    }

    return 0;
}
```
Build your test project:
```shell
cmake . && cmake --build .
```
Run:
```shell
./app
```

## API Documentation

For detailed API documentation, including all available methods and parameters, please visit:

- **REST API Documentation:** [https://docs.textmagic.com/](https://docs.textmagic.com/)
- **API Key Management:** [https://app.textmagic.com/settings/api](https://app.textmagic.com/settings/api)

### Available Methods

The SDK provides access to all TextMagic API endpoints, including:

- **Messages:** Send, receive, and manage SMS messages
- **Contacts:** Manage your contact lists
- **Templates:** Create and use message templates
- **Chats:** Manage conversations
- **Bulk Messaging:** Send messages to multiple recipients
- **Sender IDs:** Manage sender names
- **Account:** Check balance and account information
- **Statistics:** Get messaging statistics and reports

## Migration Guide

### Migrating from v2.x to v3.x

Version 3.0 is a **major update** that migrates from Swagger Codegen to OpenAPI Generator with modern C++17 features. This version is **not backward compatible** with v2.x.

#### Breaking Changes

##### 1. **Build System Requirements**

| Component | v2.x | v3.x |
|-----------|------|------|
| **CMake** | 2.8+ | **3.15+** ⚠️ |
| **C++ Standard** | C++11 | **C++17** ⚠️ |
| **Compiler** | Any C++11 | Modern C++17 compiler required |

##### 2. **Include Paths Changed**

```cpp
// v2.x - Files in root directory
#include "ApiClient.h"
#include "ApiConfiguration.h"
#include "api/TextMagicApi.h"
#include "model/SendMessageInputObject.h"

// v3.x - Organized in namespace folders
#include "TextMagic/ApiClient.h"
#include "TextMagic/ApiConfiguration.h"
#include "TextMagic/api/TextMagicApi.h"
#include "TextMagic/model/SendMessageInputObject.h"
```

##### 3. **Library Structure**

```bash
# v2.x - Flat structure
textmagic-rest-cpp-v2/
├── ApiClient.h
├── ApiConfiguration.h
├── api/
└── model/

# v3.x - Modern structure
textmagic-rest-cpp-v2/
├── include/
│   └── TextMagic/
│       ├── ApiClient.h
│       ├── ApiConfiguration.h
│       ├── api/
│       └── model/
└── src/
```

##### 4. **CMakeLists.txt Changes**

```cmake
# v2.x
cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
target_link_libraries(app boost_system cpprest crypto textmagic_client)

# v3.x
cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(cpprestsdk REQUIRED)
find_package(Boost REQUIRED)
target_link_libraries(app Boost::headers cpprestsdk::cpprest textmagic_client)
```

##### 5. **Installation Method**

```bash
# v2.x - Manual library path
target_include_directories(app PRIVATE
    ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2
    ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2/model
    ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2/api
)

# v3.x - CMake package config
find_package(TextMagic REQUIRED)
target_link_libraries(app TextMagic::TextMagic)
```

#### What Stays the Same

- ✅ **Namespace:** `com::textmagic::client::api` (unchanged)
- ✅ **API class name:** `TextMagicApi` (unchanged)
- ✅ **Configuration:** `ApiClient` and `ApiConfiguration` (unchanged)
- ✅ **Authentication:** HTTP Basic Auth with username/API key
- ✅ **API method names** and signatures
- ✅ **Response objects** structure
- ✅ **Error handling** with exceptions

#### Upgrade Steps

##### Step 1: Update Build Environment

```bash
# Check CMake version
cmake --version  # Must be 3.15+

# Check C++ compiler version
g++ --version    # GCC 7+ for C++17
clang++ --version  # Clang 5+ for C++17

# Update if needed (Ubuntu example)
sudo apt-get update
sudo apt-get install cmake g++-9
```

##### Step 2: Update Dependencies

```bash
# Ubuntu/Debian
sudo apt-get install build-essential cmake libcpprest-dev libboost-all-dev

# macOS
brew install cmake cpprestsdk boost

# Windows (vcpkg)
vcpkg install cpprestsdk cpprestsdk:x64-windows boost
```

##### Step 3: Update Your CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.15)
project(your_project)

# Set C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find dependencies
find_package(cpprestsdk REQUIRED)
find_package(Boost REQUIRED)

# Your executable
add_executable(your_app main.cpp)

# Link TextMagic SDK (if installed)
find_package(TextMagic REQUIRED)
target_link_libraries(your_app TextMagic::TextMagic)

# OR link manually
add_library(textmagic_client SHARED IMPORTED)
set_property(TARGET textmagic_client
    PROPERTY IMPORTED_LOCATION
    "${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2-3.0.0/lib/libTextMagic.so"
)
target_include_directories(your_app PRIVATE
    ${PROJECT_SOURCE_DIR}/textmagic-rest-cpp-v2-3.0.0/include
)
target_link_libraries(your_app
    Boost::headers
    cpprestsdk::cpprest
    textmagic_client
)
```

##### Step 4: Update Include Statements

```cpp
// Update all includes to use new paths
#include "TextMagic/ApiClient.h"
#include "TextMagic/ApiConfiguration.h"
#include "TextMagic/api/TextMagicApi.h"
#include "TextMagic/model/SendMessageInputObject.h"
#include "TextMagic/model/PingResponse.h"
// etc.
```

##### Step 5: Rebuild Your Project

```bash
# Clean old build
rm -rf build/
mkdir build && cd build

# Configure with CMake 3.15+
cmake ..

# Build
cmake --build .

# Run
./your_app
```

#### Code Migration Example

**Before (v2.x):**
```cpp
#include "ApiClient.h"
#include "ApiConfiguration.h"
#include "api/TextMagicApi.h"

int main() {
    std::shared_ptr<ApiClient> apiClient(new ApiClient);
    std::shared_ptr<ApiConfiguration> apiConfig(new ApiConfiguration);

    apiConfig->setBaseUrl("https://rest.textmagic.com");
    apiConfig->getHttpConfig().set_credentials(
        web::credentials("username", "api_key")
    );
    apiClient->setConfiguration(apiConfig);

    TextMagicApi api(apiClient);
    auto response = api.ping();
    response.wait();

    std::cout << response.get()->getPing() << std::endl;
    return 0;
}
```

**After (v3.x):**
```cpp
#include "TextMagic/ApiClient.h"
#include "TextMagic/ApiConfiguration.h"
#include "TextMagic/api/TextMagicApi.h"

using namespace com::textmagic::client::api;

int main() {
    std::shared_ptr<ApiClient> apiClient(new ApiClient);
    std::shared_ptr<ApiConfiguration> apiConfig(new ApiConfiguration);

    apiConfig->setBaseUrl("https://rest.textmagic.com");
    apiConfig->getHttpConfig().set_credentials(
        web::credentials("username", "api_key")
    );
    apiClient->setConfiguration(apiConfig);

    TextMagicApi api(apiClient);
    auto response = api.ping();
    response.wait();

    std::cout << response.get()->getPing() << std::endl;
    return 0;
}
```

**Key difference:** Only the include paths changed! The actual API usage remains identical.

#### Troubleshooting

**Problem:** `fatal error: ApiClient.h: No such file or directory`

**Solution:** Update include paths to use `TextMagic/` prefix:
```cpp
#include "TextMagic/ApiClient.h"
```

**Problem:** `CMake Error: CMake 2.8 or higher is required`

**Solution:** Update CMake to 3.15+:
```bash
# Ubuntu
sudo apt-get install cmake

# Or download from https://cmake.org/download/
```

**Problem:** `error: 'std::optional' has not been declared`

**Solution:** Ensure C++17 is enabled:
```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```

**Problem:** Linker errors with `cpprestsdk`

**Solution:** Use proper CMake targets:
```cmake
find_package(cpprestsdk REQUIRED)
target_link_libraries(your_app cpprestsdk::cpprest)
```

#### Benefits of v3.x

- ✅ **Modern C++17** - Better performance, cleaner code
- ✅ **Improved type safety** - Using `std::optional`, `std::variant`
- ✅ **Better CMake integration** - Package config support
- ✅ **Organized structure** - Clear include hierarchy
- ✅ **Active maintenance** - Based on OpenAPI Generator (actively maintained)
- ✅ **Future-proof** - Ready for OpenAPI 3.1+ features

#### Need Help?

If you encounter issues during migration:

1. Check the [GitHub Issues](https://github.com/textmagic/textmagic-rest-cpp-v2/issues)
2. Review the [API Documentation](https://docs.textmagic.com/)
3. Contact [TextMagic Support](https://www.textmagic.com/support/)

[comment]: <> (FOOTER)
## License

The library is available as open source under the terms of the [MIT License](http://opensource.org/licenses/MIT).

[comment]: <> (/FOOTER)
