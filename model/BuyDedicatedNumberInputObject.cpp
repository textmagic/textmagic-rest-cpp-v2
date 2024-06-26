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



#include "BuyDedicatedNumberInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

BuyDedicatedNumberInputObject::BuyDedicatedNumberInputObject()
{
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_Country = utility::conversions::to_string_t("");
    m_CountryIsSet = false;
    m_UserId = 0;
    m_UserIdIsSet = false;
}

BuyDedicatedNumberInputObject::~BuyDedicatedNumberInputObject()
{
}

void BuyDedicatedNumberInputObject::validate()
{
    // TODO: implement validation
}

web::json::value BuyDedicatedNumberInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }

    return val;
}

void BuyDedicatedNumberInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phone")];
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("country")];
        if(!fieldValue.is_null())
        {
            setCountry(ModelBase::stringFromJson(fieldValue));
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
}

void BuyDedicatedNumberInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("phone"), m_Phone));
        
    }
    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("country"), m_Country));
        
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
}

void BuyDedicatedNumberInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("phone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("country")))
    {
        setCountry(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("country"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        setUserId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId"))));
    }
}

utility::string_t BuyDedicatedNumberInputObject::getPhone() const
{
    return m_Phone;
}


void BuyDedicatedNumberInputObject::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool BuyDedicatedNumberInputObject::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void BuyDedicatedNumberInputObject::unsetPhone()
{
    m_PhoneIsSet = false;
}

utility::string_t BuyDedicatedNumberInputObject::getCountry() const
{
    return m_Country;
}


void BuyDedicatedNumberInputObject::setCountry(utility::string_t value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool BuyDedicatedNumberInputObject::countryIsSet() const
{
    return m_CountryIsSet;
}

void BuyDedicatedNumberInputObject::unsetCountry()
{
    m_CountryIsSet = false;
}

int32_t BuyDedicatedNumberInputObject::getUserId() const
{
    return m_UserId;
}


void BuyDedicatedNumberInputObject::setUserId(int32_t value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}
bool BuyDedicatedNumberInputObject::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void BuyDedicatedNumberInputObject::unsetUserId()
{
    m_UserIdIsSet = false;
}

}
}
}
}

