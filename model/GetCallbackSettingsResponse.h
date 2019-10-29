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
 * GetCallbackSettingsResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetCallbackSettingsResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetCallbackSettingsResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetCallbackSettingsResponse
    : public ModelBase
{
public:
    GetCallbackSettingsResponse();
    virtual ~GetCallbackSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetCallbackSettingsResponse members

    /// <summary>
    /// This URL is used to push message delivery status updates to your application.
    /// </summary>
    utility::string_t getOutUrl() const;
        void setOutUrl(utility::string_t value);
    /// <summary>
    /// This URL is used to push incoming SMS to your application.
    /// </summary>
    utility::string_t getInUrl() const;
        void setInUrl(utility::string_t value);
    /// <summary>
    /// Desired callback data format. m - multipart/form-data, u - application/x-www-form-urlencoded, j - application/json.
    /// </summary>
    utility::string_t getFormat() const;
        void setFormat(utility::string_t value);

protected:
    utility::string_t m_OutUrl;
        utility::string_t m_InUrl;
        utility::string_t m_Format;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetCallbackSettingsResponse_H_ */
