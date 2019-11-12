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
 * CreateContactInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_CreateContactInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_CreateContactInputObject_H_


#include "../ModelBase.h"

#include "CustomFieldListItem.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateContactInputObject
    : public ModelBase
{
public:
    CreateContactInputObject();
    virtual ~CreateContactInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateContactInputObject members

    /// <summary>
    /// Contact first name.
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();
    void setFirstName(utility::string_t value);
    /// <summary>
    /// Contact last name.
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();
    void setLastName(utility::string_t value);
    /// <summary>
    /// Phone number in [E.164 format](https://en.wikipedia.org/wiki/E.164).
    /// </summary>
    utility::string_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();
    void setPhone(utility::string_t value);
    /// <summary>
    /// Contact email address.
    /// </summary>
    utility::string_t getEmail() const;
    bool emailIsSet() const;
    void unsetEmail();
    void setEmail(utility::string_t value);
    /// <summary>
    /// Company name.
    /// </summary>
    utility::string_t getCompanyName() const;
    bool companyNameIsSet() const;
    void unsetCompanyName();
    void setCompanyName(utility::string_t value);
    /// <summary>
    /// Contact [list](https://docs.textmagic.com/#tag/Lists) ID. Each contact must be assigned to at least one list.
    /// </summary>
    utility::string_t getLists() const;
    bool listsIsSet() const;
    void unsetLists();
    void setLists(utility::string_t value);
    /// <summary>
    /// Is the contact marked as favorite?
    /// </summary>
    bool isFavorited() const;
    bool favoritedIsSet() const;
    void unsetFavorited();
    void setFavorited(bool value);
    /// <summary>
    /// Is the contact blocked for outgoing and incoming messaging?
    /// </summary>
    bool isBlocked() const;
    bool blockedIsSet() const;
    void unsetBlocked();
    void setBlocked(bool value);
    /// <summary>
    /// Force type of phone. Possible values: 0 is landline; 1 is mobile; default is -1 (auto-detection).
    /// </summary>
    int32_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CustomFieldListItem>>& getCustomFieldValues();
    bool customFieldValuesIsSet() const;
    void unsetCustomFieldValues();
    void setCustomFieldValues(std::vector<std::shared_ptr<CustomFieldListItem>> value);
    /// <summary>
    /// Treat phone numbers passed in the request body as local.
    /// </summary>
    int32_t getLocal() const;
    bool localIsSet() const;
    void unsetLocal();
    void setLocal(int32_t value);
    /// <summary>
    /// The 2-letter ISO country code for local phone numbers, used when local is  set to true. Default is the account country.
    /// </summary>
    utility::string_t getCountry() const;
    bool countryIsSet() const;
    void unsetCountry();
    void setCountry(utility::string_t value);

protected:
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
    utility::string_t m_Phone;
    bool m_PhoneIsSet;
    utility::string_t m_Email;
    bool m_EmailIsSet;
    utility::string_t m_CompanyName;
    bool m_CompanyNameIsSet;
    utility::string_t m_Lists;
    bool m_ListsIsSet;
    bool m_Favorited;
    bool m_FavoritedIsSet;
    bool m_Blocked;
    bool m_BlockedIsSet;
    int32_t m_Type;
    bool m_TypeIsSet;
    std::vector<std::shared_ptr<CustomFieldListItem>> m_CustomFieldValues;
    bool m_CustomFieldValuesIsSet;
    int32_t m_Local;
    bool m_LocalIsSet;
    utility::string_t m_Country;
    bool m_CountryIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_CreateContactInputObject_H_ */
