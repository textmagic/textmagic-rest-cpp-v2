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



#include "ContactNote.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

ContactNote::ContactNote()
{
    m_Id = 0;
    m_CreatedAt = utility::datetime();
    m_Note = utility::conversions::to_string_t("");
}

ContactNote::~ContactNote()
{
}

void ContactNote::validate()
{
    // TODO: implement validation
}

web::json::value ContactNote::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("createdAt")] = ModelBase::toJson(m_CreatedAt);
    val[utility::conversions::to_string_t("note")] = ModelBase::toJson(m_Note);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);

    return val;
}

void ContactNote::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createdAt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("createdAt")];
        if(!fieldValue.is_null())
        {
            setCreatedAt(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("note")];
        if(!fieldValue.is_null())
        {
            setNote(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("user")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<User> newItem(new User());
            newItem->fromJson(fieldValue);
            setUser( newItem );
        }
    }
}

void ContactNote::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("createdAt"), m_CreatedAt));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("note"), m_Note));
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
}

void ContactNote::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setCreatedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("createdAt"))));
    setNote(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("note"))));
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
}

int32_t ContactNote::getId() const
{
    return m_Id;
}


void ContactNote::setId(int32_t value)
{
    m_Id = value;
    
}
utility::datetime ContactNote::getCreatedAt() const
{
    return m_CreatedAt;
}


void ContactNote::setCreatedAt(utility::datetime value)
{
    m_CreatedAt = value;
    
}
utility::string_t ContactNote::getNote() const
{
    return m_Note;
}


void ContactNote::setNote(utility::string_t value)
{
    m_Note = value;
    
}
std::shared_ptr<User> ContactNote::getUser() const
{
    return m_User;
}


void ContactNote::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
}
}
}
}

