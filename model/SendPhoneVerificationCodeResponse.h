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
 * SendPhoneVerificationCodeResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_SendPhoneVerificationCodeResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_SendPhoneVerificationCodeResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SendPhoneVerificationCodeResponse
    : public ModelBase
{
public:
    SendPhoneVerificationCodeResponse();
    virtual ~SendPhoneVerificationCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendPhoneVerificationCodeResponse members

    /// <summary>
    /// The ID of a verification request. This is required to finish the verification request in the next step.
    /// </summary>
    utility::string_t getVerifyId() const;
        void setVerifyId(utility::string_t value);
    /// <summary>
    /// An amount of credit which will be deducted from your account balance when this verification is successfully completed.
    /// </summary>
    double getPrice() const;
        void setPrice(double value);

protected:
    utility::string_t m_VerifyId;
        double m_Price;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_SendPhoneVerificationCodeResponse_H_ */
