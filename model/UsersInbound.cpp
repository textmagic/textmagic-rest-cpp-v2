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



#include "UsersInbound.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UsersInbound::UsersInbound()
{
    m_Id = 0;
    m_DisplayTimeFormat = utility::conversions::to_string_t("");
    m_DisplayTimeFormatIsSet = false;
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_PurchasedAt = utility::datetime();
    m_ExpireAt = utility::datetime();
    m_Status = utility::conversions::to_string_t("");
}

UsersInbound::~UsersInbound()
{
}

void UsersInbound::validate()
{
    // TODO: implement validation
}

web::json::value UsersInbound::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    if(m_DisplayTimeFormatIsSet)
    {
        val[utility::conversions::to_string_t("displayTimeFormat")] = ModelBase::toJson(m_DisplayTimeFormat);
    }
    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("purchasedAt")] = ModelBase::toJson(m_PurchasedAt);
    val[utility::conversions::to_string_t("expireAt")] = ModelBase::toJson(m_ExpireAt);
    val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);

    return val;
}

void UsersInbound::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayTimeFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("displayTimeFormat")];
        if(!fieldValue.is_null())
        {
            setDisplayTimeFormat(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phone")];
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("purchasedAt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("purchasedAt")];
        if(!fieldValue.is_null())
        {
            setPurchasedAt(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireAt")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("expireAt")];
        if(!fieldValue.is_null())
        {
            setExpireAt(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("status")];
        if(!fieldValue.is_null())
        {
            setStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("country")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Country> newItem(new Country());
            newItem->fromJson(fieldValue);
            setCountry( newItem );
        }
    }
}

void UsersInbound::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    if(m_DisplayTimeFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayTimeFormat"), m_DisplayTimeFormat));
        
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
        
    }
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("purchasedAt"), m_PurchasedAt));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expireAt"), m_ExpireAt));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    m_Country->toMultipart(multipart, utility::conversions::to_string_t("country."));
}

void UsersInbound::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    if(multipart->hasContent(utility::conversions::to_string_t("displayTimeFormat")))
    {
        setDisplayTimeFormat(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayTimeFormat"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
    setPurchasedAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("purchasedAt"))));
    setExpireAt(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expireAt"))));
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    std::shared_ptr<Country> newCountry(new Country());
    newCountry->fromMultiPart(multipart, utility::conversions::to_string_t("country."));
    setCountry( newCountry );
}

int32_t UsersInbound::getId() const
{
    return m_Id;
}


void UsersInbound::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t UsersInbound::getDisplayTimeFormat() const
{
    return m_DisplayTimeFormat;
}


void UsersInbound::setDisplayTimeFormat(utility::string_t value)
{
    m_DisplayTimeFormat = value;
    m_DisplayTimeFormatIsSet = true;
}
bool UsersInbound::displayTimeFormatIsSet() const
{
    return m_DisplayTimeFormatIsSet;
}

void UsersInbound::unsetDisplayTimeFormat()
{
    m_DisplayTimeFormatIsSet = false;
}

utility::string_t UsersInbound::getPhone() const
{
    return m_Phone;
}


void UsersInbound::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool UsersInbound::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void UsersInbound::unsetPhone()
{
    m_PhoneIsSet = false;
}

std::shared_ptr<User> UsersInbound::getUser() const
{
    return m_User;
}


void UsersInbound::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
utility::datetime UsersInbound::getPurchasedAt() const
{
    return m_PurchasedAt;
}


void UsersInbound::setPurchasedAt(utility::datetime value)
{
    m_PurchasedAt = value;
    
}
utility::datetime UsersInbound::getExpireAt() const
{
    return m_ExpireAt;
}


void UsersInbound::setExpireAt(utility::datetime value)
{
    m_ExpireAt = value;
    
}
utility::string_t UsersInbound::getStatus() const
{
    return m_Status;
}


void UsersInbound::setStatus(utility::string_t value)
{
    m_Status = value;
    
}
std::shared_ptr<Country> UsersInbound::getCountry() const
{
    return m_Country;
}


void UsersInbound::setCountry(std::shared_ptr<Country> value)
{
    m_Country = value;
    
}
}
}
}
}

