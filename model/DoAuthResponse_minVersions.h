/**
 * TextMagic API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 2
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * DoAuthResponse_minVersions.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_DoAuthResponse_minVersions_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_DoAuthResponse_minVersions_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DoAuthResponse_minVersions
    : public ModelBase
{
public:
    DoAuthResponse_minVersions();
    virtual ~DoAuthResponse_minVersions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DoAuthResponse_minVersions members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIos() const;
        void setIos(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAndroid() const;
        void setAndroid(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDesktop() const;
        void setDesktop(utility::string_t value);

protected:
    utility::string_t m_Ios;
        utility::string_t m_Android;
        utility::string_t m_Desktop;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_DoAuthResponse_minVersions_H_ */
