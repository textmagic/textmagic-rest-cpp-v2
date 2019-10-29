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
 * SubaccountWithToken.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_SubaccountWithToken_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_SubaccountWithToken_H_


#include "../ModelBase.h"

#include "Country.h"
#include "Timezone.h"
#include <cpprest/details/basic_types.h>
#include "UserImage.h"
#include "Currency.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SubaccountWithToken
    : public ModelBase
{
public:
    SubaccountWithToken();
    virtual ~SubaccountWithToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SubaccountWithToken members

    /// <summary>
    /// Sub-account ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// Username.
    /// </summary>
    utility::string_t getUsername() const;
        void setUsername(utility::string_t value);
    /// <summary>
    /// Account first name.
    /// </summary>
    utility::string_t getFirstName() const;
        void setFirstName(utility::string_t value);
    /// <summary>
    /// Account last name.
    /// </summary>
    utility::string_t getLastName() const;
        void setLastName(utility::string_t value);
    /// <summary>
    /// Account Email address.
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// Current account status: * **A** for Active * **T** for Trial. 
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// Account balance (in account currency).
    /// </summary>
    double getBalance() const;
        void setBalance(double value);
    /// <summary>
    /// Contact phone number.
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// Account company name.
    /// </summary>
    utility::string_t getCompany() const;
        void setCompany(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Currency> getCurrency() const;
        void setCurrency(std::shared_ptr<Currency> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Country> getCountry() const;
        void setCountry(std::shared_ptr<Country> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Timezone> getTimezone() const;
        void setTimezone(std::shared_ptr<Timezone> value);
    /// <summary>
    /// Type of account: *   **A** for Administrator sub-account *   **U** for Regular User 
    /// </summary>
    utility::string_t getSubaccountType() const;
        void setSubaccountType(utility::string_t value);
    /// <summary>
    /// Does the account have a confirmed Email?.
    /// </summary>
    bool isEmailAccepted() const;
        void setEmailAccepted(bool value);
    /// <summary>
    /// Does the account have a confirmed Phone Number?.
    /// </summary>
    bool isPhoneAccepted() const;
        void setPhoneAccepted(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserImage> getAvatar() const;
        void setAvatar(std::shared_ptr<UserImage> value);
    /// <summary>
    /// Access token of account.
    /// </summary>
    utility::string_t getToken() const;
        void setToken(utility::string_t value);

protected:
    int32_t m_Id;
        utility::string_t m_Username;
        utility::string_t m_FirstName;
        utility::string_t m_LastName;
        utility::string_t m_Email;
        utility::string_t m_Status;
        double m_Balance;
        utility::string_t m_Phone;
        utility::string_t m_Company;
        std::shared_ptr<Currency> m_Currency;
        std::shared_ptr<Country> m_Country;
        std::shared_ptr<Timezone> m_Timezone;
        utility::string_t m_SubaccountType;
        bool m_EmailAccepted;
        bool m_PhoneAccepted;
        std::shared_ptr<UserImage> m_Avatar;
        utility::string_t m_Token;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_SubaccountWithToken_H_ */
