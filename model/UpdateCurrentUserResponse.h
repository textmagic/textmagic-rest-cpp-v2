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
 * UpdateCurrentUserResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_UpdateCurrentUserResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_UpdateCurrentUserResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UpdateCurrentUserResponse
    : public ModelBase
{
public:
    UpdateCurrentUserResponse();
    virtual ~UpdateCurrentUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateCurrentUserResponse members

    /// <summary>
    /// Username.
    /// </summary>
    utility::string_t getUsername() const;
    bool usernameIsSet() const;
    void unsetUsername();
    void setUsername(utility::string_t value);
    /// <summary>
    /// Account first name.
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// Account last name.
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();
    void setLastName(utility::string_t value);
    /// <summary>
    /// User email address.
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();
    void setEmail(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();
    void setPhone(utility::string_t value);
    /// <summary>
    /// Account company name.
    /// </summary>
    utility::string_t getCompany() const;
    bool companyIsSet() const;
    void unsetCompany();
    void setCompany(utility::string_t value);
    /// <summary>
    /// Internal timezone ID. See [Get timezones](https://docs.textmagic.com/#operation/getTimezones).
    /// </summary>
    int32_t getTimezone() const;
    bool timezoneIsSet() const;
    void unsetTimezone();
    void setTimezone(int32_t value);

protected:
    utility::string_t m_Username;
    bool m_UsernameIsSet;
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_Phone;
    bool m_PhoneIsSet;
    utility::string_t m_Company;
    bool m_CompanyIsSet;
    int32_t m_Timezone;
    bool m_TimezoneIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_UpdateCurrentUserResponse_H_ */
