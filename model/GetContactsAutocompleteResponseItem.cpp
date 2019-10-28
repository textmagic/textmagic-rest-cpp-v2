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



#include "GetContactsAutocompleteResponseItem.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetContactsAutocompleteResponseItem::GetContactsAutocompleteResponseItem()
{
    m_EntityId = 0;
    m_EntityType = utility::conversions::to_string_t("");
    m_Value = utility::conversions::to_string_t("");
    m_Label = utility::conversions::to_string_t("");
    m_SharedBy = utility::conversions::to_string_t("");
    m_IsShared = false;
    m_Avatar = utility::conversions::to_string_t("");
    m_Favorited = false;
    m_UserId = 0;
    m_CountryName = utility::conversions::to_string_t("");
    m_Qposition = 0;
    m_Rposition = 0;
}

GetContactsAutocompleteResponseItem::~GetContactsAutocompleteResponseItem()
{
}

void GetContactsAutocompleteResponseItem::validate()
{
    // TODO: implement validation
}

web::json::value GetContactsAutocompleteResponseItem::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("entityId")] = ModelBase::toJson(m_EntityId);
    val[utility::conversions::to_string_t("entityType")] = ModelBase::toJson(m_EntityType);
    val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    val[utility::conversions::to_string_t("label")] = ModelBase::toJson(m_Label);
    val[utility::conversions::to_string_t("sharedBy")] = ModelBase::toJson(m_SharedBy);
    val[utility::conversions::to_string_t("isShared")] = ModelBase::toJson(m_IsShared);
    val[utility::conversions::to_string_t("avatar")] = ModelBase::toJson(m_Avatar);
    val[utility::conversions::to_string_t("favorited")] = ModelBase::toJson(m_Favorited);
    val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    val[utility::conversions::to_string_t("countryName")] = ModelBase::toJson(m_CountryName);
    val[utility::conversions::to_string_t("qposition")] = ModelBase::toJson(m_Qposition);
    val[utility::conversions::to_string_t("rposition")] = ModelBase::toJson(m_Rposition);

    return val;
}

void GetContactsAutocompleteResponseItem::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("entityId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("entityId")];
        if(!fieldValue.is_null())
        {
            setEntityId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entityType")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("entityType")];
        if(!fieldValue.is_null())
        {
            setEntityType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("value")];
        if(!fieldValue.is_null())
        {
            setValue(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("label")];
        if(!fieldValue.is_null())
        {
            setLabel(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sharedBy")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sharedBy")];
        if(!fieldValue.is_null())
        {
            setSharedBy(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isShared")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("isShared")];
        if(!fieldValue.is_null())
        {
            setIsShared(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avatar")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("avatar")];
        if(!fieldValue.is_null())
        {
            setAvatar(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("userId")];
        if(!fieldValue.is_null())
        {
            setUserId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("countryName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("countryName")];
        if(!fieldValue.is_null())
        {
            setCountryName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qposition")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("qposition")];
        if(!fieldValue.is_null())
        {
            setQposition(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rposition")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("rposition")];
        if(!fieldValue.is_null())
        {
            setRposition(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void GetContactsAutocompleteResponseItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entityId"), m_EntityId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("entityType"), m_EntityType));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("label"), m_Label));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sharedBy"), m_SharedBy));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isShared"), m_IsShared));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("avatar"), m_Avatar));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("favorited"), m_Favorited));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("countryName"), m_CountryName));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("qposition"), m_Qposition));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rposition"), m_Rposition));
}

void GetContactsAutocompleteResponseItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setEntityId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("entityId"))));
    setEntityType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("entityType"))));
    setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    setLabel(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("label"))));
    setSharedBy(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sharedBy"))));
    setIsShared(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("isShared"))));
    setAvatar(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("avatar"))));
    setFavorited(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("favorited"))));
    setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId"))));
    setCountryName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("countryName"))));
    setQposition(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("qposition"))));
    setRposition(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("rposition"))));
}

int32_t GetContactsAutocompleteResponseItem::getEntityId() const
{
    return m_EntityId;
}


void GetContactsAutocompleteResponseItem::setEntityId(int32_t value)
{
    m_EntityId = value;
    
}
utility::string_t GetContactsAutocompleteResponseItem::getEntityType() const
{
    return m_EntityType;
}


void GetContactsAutocompleteResponseItem::setEntityType(utility::string_t value)
{
    m_EntityType = value;
    
}
utility::string_t GetContactsAutocompleteResponseItem::getValue() const
{
    return m_Value;
}


void GetContactsAutocompleteResponseItem::setValue(utility::string_t value)
{
    m_Value = value;
    
}
utility::string_t GetContactsAutocompleteResponseItem::getLabel() const
{
    return m_Label;
}


void GetContactsAutocompleteResponseItem::setLabel(utility::string_t value)
{
    m_Label = value;
    
}
utility::string_t GetContactsAutocompleteResponseItem::getSharedBy() const
{
    return m_SharedBy;
}


void GetContactsAutocompleteResponseItem::setSharedBy(utility::string_t value)
{
    m_SharedBy = value;
    
}
bool GetContactsAutocompleteResponseItem::isIsShared() const
{
    return m_IsShared;
}


void GetContactsAutocompleteResponseItem::setIsShared(bool value)
{
    m_IsShared = value;
    
}
utility::string_t GetContactsAutocompleteResponseItem::getAvatar() const
{
    return m_Avatar;
}


void GetContactsAutocompleteResponseItem::setAvatar(utility::string_t value)
{
    m_Avatar = value;
    
}
bool GetContactsAutocompleteResponseItem::isFavorited() const
{
    return m_Favorited;
}


void GetContactsAutocompleteResponseItem::setFavorited(bool value)
{
    m_Favorited = value;
    
}
int32_t GetContactsAutocompleteResponseItem::getUserId() const
{
    return m_UserId;
}


void GetContactsAutocompleteResponseItem::setUserId(int32_t value)
{
    m_UserId = value;
    
}
utility::string_t GetContactsAutocompleteResponseItem::getCountryName() const
{
    return m_CountryName;
}


void GetContactsAutocompleteResponseItem::setCountryName(utility::string_t value)
{
    m_CountryName = value;
    
}
int32_t GetContactsAutocompleteResponseItem::getQposition() const
{
    return m_Qposition;
}


void GetContactsAutocompleteResponseItem::setQposition(int32_t value)
{
    m_Qposition = value;
    
}
int32_t GetContactsAutocompleteResponseItem::getRposition() const
{
    return m_Rposition;
}


void GetContactsAutocompleteResponseItem::setRposition(int32_t value)
{
    m_Rposition = value;
    
}
}
}
}
}

