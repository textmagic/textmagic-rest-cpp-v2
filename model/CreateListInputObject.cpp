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



#include "CreateListInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

CreateListInputObject::CreateListInputObject()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Shared = false;
    m_SharedIsSet = false;
    m_Favorited = false;
    m_FavoritedIsSet = false;
    m_IsDefault = false;
    m_IsDefaultIsSet = false;
}

CreateListInputObject::~CreateListInputObject()
{
}

void CreateListInputObject::validate()
{
    // TODO: implement validation
}

web::json::value CreateListInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_SharedIsSet)
    {
        val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(m_Shared);
    }
    if(m_FavoritedIsSet)
    {
        val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    }
    if(m_IsDefaultIsSet)
    {
        val[utility::conversions::to_string_t("isDefault")] = ModelBase::toJson(m_IsDefault);
    }

    return val;
}

void CreateListInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("favorited")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("favorited")];
        if(!fieldValue.is_null())
        {
            setFavorited(ModelBase::boolFromJson(fieldValue));
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

void CreateListInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
        
    }
    if(m_SharedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shared"), m_Shared));
    }
    if(m_FavoritedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    }
    if(m_IsDefaultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isDefault"), m_IsDefault));
    }
}

void CreateListInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shared")))
    {
        setShared(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("shared"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("favorited")))
    {
        setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isDefault")))
    {
        setIsDefault(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isDefault"))));
    }
}

utility::string_t CreateListInputObject::getName() const
{
    return m_Name;
}


void CreateListInputObject::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CreateListInputObject::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateListInputObject::unsetName()
{
    m_NameIsSet = false;
}

bool CreateListInputObject::isShared() const
{
    return m_Shared;
}


void CreateListInputObject::setShared(bool value)
{
    m_Shared = value;
    m_SharedIsSet = true;
}
bool CreateListInputObject::sharedIsSet() const
{
    return m_SharedIsSet;
}

void CreateListInputObject::unsetShared()
{
    m_SharedIsSet = false;
}

bool CreateListInputObject::isFavorited() const
{
    return m_Favorited;
}


void CreateListInputObject::setFavorited(bool value)
{
    m_Favorited = value;
    m_FavoritedIsSet = true;
}
bool CreateListInputObject::favoritedIsSet() const
{
    return m_FavoritedIsSet;
}

void CreateListInputObject::unsetFavorited()
{
    m_FavoritedIsSet = false;
}

bool CreateListInputObject::isIsDefault() const
{
    return m_IsDefault;
}


void CreateListInputObject::setIsDefault(bool value)
{
    m_IsDefault = value;
    m_IsDefaultIsSet = true;
}
bool CreateListInputObject::isDefaultIsSet() const
{
    return m_IsDefaultIsSet;
}

void CreateListInputObject::unsetIsDefault()
{
    m_IsDefaultIsSet = false;
}

}
}
}
}

