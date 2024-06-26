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



#include "List.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

List::List()
{
    m_Id = 0;
    m_Name = utility::conversions::to_string_t("");
    m_Description = utility::conversions::to_string_t("");
    m_Favorited = false;
    m_MembersCount = 0;
    m_Service = false;
    m_Shared = false;
    m_IsDefault = false;
}

List::~List()
{
}

void List::validate()
{
    // TODO: implement validation
}

web::json::value List::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    val[utility::conversions::to_string_t("membersCount")] = ModelBase::toJson(m_MembersCount);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("service")] = ModelBase::toJson(m_Service);
    val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(m_Shared);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    val[utility::conversions::to_string_t("isDefault")] = ModelBase::toJson(m_IsDefault);

    return val;
}

void List::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("description")];
        if(!fieldValue.is_null())
        {
            setDescription(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("favorited")];
        if(!fieldValue.is_null())
        {
            setFavorited(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("membersCount")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("membersCount")];
        if(!fieldValue.is_null())
        {
            setMembersCount(ModelBase::int32_tFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("service")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("service")];
        if(!fieldValue.is_null())
        {
            setService(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("shared")];
        if(!fieldValue.is_null())
        {
            setShared(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ListImage> newItem(new ListImage());
            newItem->fromJson(fieldValue);
            setAvatar( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDefault")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("isDefault")];
        if(!fieldValue.is_null())
        {
            setIsDefault(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void List::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("membersCount"), m_MembersCount));
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("service"), m_Service));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shared"), m_Shared));
    m_Avatar->toMultipart(multipart, utility::conversions::to_string_t("avatar."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isDefault"), m_IsDefault));
}

void List::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    setMembersCount(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("membersCount"))));
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
    setService(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("service"))));
    setShared(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("shared"))));
    std::shared_ptr<ListImage> newAvatar(new ListImage());
    newAvatar->fromMultiPart(multipart, utility::conversions::to_string_t("avatar."));
    setAvatar( newAvatar );
    setIsDefault(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isDefault"))));
}

int32_t List::getId() const
{
    return m_Id;
}


void List::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t List::getName() const
{
    return m_Name;
}


void List::setName(utility::string_t value)
{
    m_Name = value;
    
}
utility::string_t List::getDescription() const
{
    return m_Description;
}


void List::setDescription(utility::string_t value)
{
    m_Description = value;
    
}
bool List::isFavorited() const
{
    return m_Favorited;
}


void List::setFavorited(bool value)
{
    m_Favorited = value;
    
}
int32_t List::getMembersCount() const
{
    return m_MembersCount;
}


void List::setMembersCount(int32_t value)
{
    m_MembersCount = value;
    
}
std::shared_ptr<User> List::getUser() const
{
    return m_User;
}


void List::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
bool List::isService() const
{
    return m_Service;
}


void List::setService(bool value)
{
    m_Service = value;
    
}
bool List::isShared() const
{
    return m_Shared;
}


void List::setShared(bool value)
{
    m_Shared = value;
    
}
std::shared_ptr<ListImage> List::getAvatar() const
{
    return m_Avatar;
}


void List::setAvatar(std::shared_ptr<ListImage> value)
{
    m_Avatar = value;
    
}
bool List::isIsDefault() const
{
    return m_IsDefault;
}


void List::setIsDefault(bool value)
{
    m_IsDefault = value;
    
}
}
}
}
}

