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



#include "ClearAndAssignContactsToListInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

ClearAndAssignContactsToListInputObject::ClearAndAssignContactsToListInputObject()
{
    m_Contacts = utility::conversions::to_string_t("");
    m_ContactsIsSet = false;
}

ClearAndAssignContactsToListInputObject::~ClearAndAssignContactsToListInputObject()
{
}

void ClearAndAssignContactsToListInputObject::validate()
{
    // TODO: implement validation
}

web::json::value ClearAndAssignContactsToListInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ContactsIsSet)
    {
        val[utility::conversions::to_string_t("contacts")] = ModelBase::toJson(m_Contacts);
    }

    return val;
}

void ClearAndAssignContactsToListInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("contacts")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("contacts")];
        if(!fieldValue.is_null())
        {
            setContacts(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void ClearAndAssignContactsToListInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ContactsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("contacts"), m_Contacts));
        
    }
}

void ClearAndAssignContactsToListInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("contacts")))
    {
        setContacts(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("contacts"))));
    }
}

utility::string_t ClearAndAssignContactsToListInputObject::getContacts() const
{
    return m_Contacts;
}


void ClearAndAssignContactsToListInputObject::setContacts(utility::string_t value)
{
    m_Contacts = value;
    m_ContactsIsSet = true;
}
bool ClearAndAssignContactsToListInputObject::contactsIsSet() const
{
    return m_ContactsIsSet;
}

void ClearAndAssignContactsToListInputObject::unsetContacts()
{
    m_ContactsIsSet = false;
}

}
}
}
}

