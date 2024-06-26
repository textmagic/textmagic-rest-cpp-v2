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



#include "UpdateSenderSettingInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UpdateSenderSettingInputObject::UpdateSenderSettingInputObject()
{
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
    m_Country = utility::conversions::to_string_t("");
    m_CountryIsSet = false;
    m_ChatId = 0;
    m_ChatIdIsSet = false;
}

UpdateSenderSettingInputObject::~UpdateSenderSettingInputObject()
{
}

void UpdateSenderSettingInputObject::validate()
{
    // TODO: implement validation
}

web::json::value UpdateSenderSettingInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    }
    if(m_ChatIdIsSet)
    {
        val[utility::conversions::to_string_t("chatId")] = ModelBase::toJson(m_ChatId);
    }

    return val;
}

void UpdateSenderSettingInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("value")];
        if(!fieldValue.is_null())
        {
            setValue(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("chatId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("chatId")];
        if(!fieldValue.is_null())
        {
            setChatId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void UpdateSenderSettingInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
        
    }
    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("country"), m_Country));
        
    }
    if(m_ChatIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("chatId"), m_ChatId));
    }
}

void UpdateSenderSettingInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("country")))
    {
        setCountry(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("country"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("chatId")))
    {
        setChatId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("chatId"))));
    }
}

utility::string_t UpdateSenderSettingInputObject::getValue() const
{
    return m_Value;
}


void UpdateSenderSettingInputObject::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool UpdateSenderSettingInputObject::valueIsSet() const
{
    return m_ValueIsSet;
}

void UpdateSenderSettingInputObject::unsetValue()
{
    m_ValueIsSet = false;
}

utility::string_t UpdateSenderSettingInputObject::getCountry() const
{
    return m_Country;
}


void UpdateSenderSettingInputObject::setCountry(utility::string_t value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool UpdateSenderSettingInputObject::countryIsSet() const
{
    return m_CountryIsSet;
}

void UpdateSenderSettingInputObject::unsetCountry()
{
    m_CountryIsSet = false;
}

int32_t UpdateSenderSettingInputObject::getChatId() const
{
    return m_ChatId;
}


void UpdateSenderSettingInputObject::setChatId(int32_t value)
{
    m_ChatId = value;
    m_ChatIdIsSet = true;
}
bool UpdateSenderSettingInputObject::chatIdIsSet() const
{
    return m_ChatIdIsSet;
}

void UpdateSenderSettingInputObject::unsetChatId()
{
    m_ChatIdIsSet = false;
}

}
}
}
}

