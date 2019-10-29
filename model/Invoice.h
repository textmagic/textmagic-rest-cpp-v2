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
 * Invoice.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_Invoice_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_Invoice_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Invoice
    : public ModelBase
{
public:
    Invoice();
    virtual ~Invoice();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Invoice members

    /// <summary>
    /// The invoice ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// Top-up amount.
    /// </summary>
    int32_t getBundle() const;
        void setBundle(int32_t value);
    /// <summary>
    /// Top-up currency.
    /// </summary>
    utility::string_t getCurrency() const;
        void setCurrency(utility::string_t value);
    /// <summary>
    /// VAT charged (if any).
    /// </summary>
    float getVat() const;
        void setVat(float value);
    /// <summary>
    /// Payment method description.
    /// </summary>
    utility::string_t getPaymentMethod() const;
        void setPaymentMethod(utility::string_t value);

protected:
    int32_t m_Id;
        int32_t m_Bundle;
        utility::string_t m_Currency;
        float m_Vat;
        utility::string_t m_PaymentMethod;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_Invoice_H_ */
