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
 * User.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_User_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_User_H_


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
class  User
    : public ModelBase
{
public:
    User();
    virtual ~User();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// User members

    /// <summary>
    /// User ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// User&#39;s preferred format of time display: * *12h* - AM/PM format; * *24h* - 24-hour clock format. 
    /// </summary>
    utility::string_t getDisplayTimeFormat() const;
    bool displayTimeFormatIsSet() const;
    void unsetDisplayTimeFormat();
    void setDisplayTimeFormat(utility::string_t value);
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
    /// User email address.
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// Current account status: * **A** for Active; * **T** for Trial. 
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// Account balance (in account currency).
    /// </summary>
    double getBalance() const;
        void setBalance(double value);
    /// <summary>
    /// User&#39;s phone number.
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
    /// Type of account: * **P** for Parent User; * **A** for Administrator Sub-Account; * **U** for Regular User. 
    /// </summary>
    utility::string_t getSubaccountType() const;
        void setSubaccountType(utility::string_t value);
    /// <summary>
    /// Does the account have a confirmed email?
    /// </summary>
    bool isEmailAccepted() const;
        void setEmailAccepted(bool value);
    /// <summary>
    /// Does the account have a confirmed phone number?
    /// </summary>
    bool isPhoneAccepted() const;
        void setPhoneAccepted(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<UserImage> getAvatar() const;
        void setAvatar(std::shared_ptr<UserImage> value);

protected:
    int32_t m_Id;
        utility::string_t m_DisplayTimeFormat;
    bool m_DisplayTimeFormatIsSet;
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
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_User_H_ */
