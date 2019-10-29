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
 * CallPriceResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_CallPriceResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_CallPriceResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CallPriceResponse
    : public ModelBase
{
public:
    CallPriceResponse();
    virtual ~CallPriceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CallPriceResponse members

    /// <summary>
    /// Price for outbound message.
    /// </summary>
    double getOutbound() const;
        void setOutbound(double value);
    /// <summary>
    /// Price for inbound message.
    /// </summary>
    double getInbound() const;
        void setInbound(double value);
    /// <summary>
    /// Price for forward.
    /// </summary>
    double getForward() const;
        void setForward(double value);
    /// <summary>
    /// The 2-letter ISO country code for local phone numbers, used when local is  set to true. Default is account country.
    /// </summary>
    utility::string_t getCountry() const;
        void setCountry(utility::string_t value);

protected:
    double m_Outbound;
        double m_Inbound;
        double m_Forward;
        utility::string_t m_Country;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_CallPriceResponse_H_ */
