/**
 * Textmagic API
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
 * DoCarrierLookupResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_DoCarrierLookupResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_DoCarrierLookupResponse_H_


#include "../ModelBase.h"

#include "Country.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DoCarrierLookupResponse
    : public ModelBase
{
public:
    DoCarrierLookupResponse();
    virtual ~DoCarrierLookupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DoCarrierLookupResponse members

    /// <summary>
    /// The cost to check that one number is constant – 0.04 in your account currency.
    /// </summary>
    double getCost() const;
        void setCost(double value);
    /// <summary>
    /// Phone number country.
    /// </summary>
    std::shared_ptr<Country> getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();
    void setCountry(std::shared_ptr<Country> value);
    /// <summary>
    /// Phone number in [National format](https://en.wikipedia.org/wiki/National_conventions_for_writing_telephone_numbers).
    /// </summary>
    utility::string_t getLocal() const;
        void setLocal(utility::string_t value);
    /// <summary>
    /// Phone number type.
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);
    /// <summary>
    /// Carrier name.
    /// </summary>
    utility::string_t getCarrier() const;
        void setCarrier(utility::string_t value);
    /// <summary>
    /// Phone number in [E.164 format](https://en.wikipedia.org/wiki/E.164).
    /// </summary>
    utility::string_t getNumber164() const;
        void setNumber164(utility::string_t value);
    /// <summary>
    /// This field shows whether the entered phone number is valid or not.
    /// </summary>
    bool isValid() const;
        void setValid(bool value);

protected:
    double m_Cost;
        std::shared_ptr<Country> m_Country;
    bool m_CountryIsSet;
    utility::string_t m_Local;
        utility::string_t m_Type;
        utility::string_t m_Carrier;
        utility::string_t m_Number164;
        bool m_Valid;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_DoCarrierLookupResponse_H_ */
