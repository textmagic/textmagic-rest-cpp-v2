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



#include "UpdateBalanceNotificationSettingsInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UpdateBalanceNotificationSettingsInputObject::UpdateBalanceNotificationSettingsInputObject()
{
    m_LowBalanceNotification = false;
    m_LowBalanceNotificationIsSet = false;
    m_AlertBalance = utility::conversions::to_string_t("");
    m_AlertBalanceIsSet = false;
    m_AlertPhone = utility::conversions::to_string_t("");
    m_AlertPhoneIsSet = false;
    m_AlertEmail1 = utility::conversions::to_string_t("");
    m_AlertEmail1IsSet = false;
    m_AlertEmail2 = utility::conversions::to_string_t("");
    m_AlertEmail2IsSet = false;
    m_AlertEmail3 = utility::conversions::to_string_t("");
    m_AlertEmail3IsSet = false;
}

UpdateBalanceNotificationSettingsInputObject::~UpdateBalanceNotificationSettingsInputObject()
{
}

void UpdateBalanceNotificationSettingsInputObject::validate()
{
    // TODO: implement validation
}

web::json::value UpdateBalanceNotificationSettingsInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_LowBalanceNotificationIsSet)
    {
        val[utility::conversions::to_string_t("lowBalanceNotification")] = ModelBase::toJson(m_LowBalanceNotification);
    }
    if(m_AlertBalanceIsSet)
    {
        val[utility::conversions::to_string_t("alertBalance")] = ModelBase::toJson(m_AlertBalance);
    }
    if(m_AlertPhoneIsSet)
    {
        val[utility::conversions::to_string_t("alertPhone")] = ModelBase::toJson(m_AlertPhone);
    }
    if(m_AlertEmail1IsSet)
    {
        val[utility::conversions::to_string_t("alertEmail1")] = ModelBase::toJson(m_AlertEmail1);
    }
    if(m_AlertEmail2IsSet)
    {
        val[utility::conversions::to_string_t("alertEmail2")] = ModelBase::toJson(m_AlertEmail2);
    }
    if(m_AlertEmail3IsSet)
    {
        val[utility::conversions::to_string_t("alertEmail3")] = ModelBase::toJson(m_AlertEmail3);
    }

    return val;
}

void UpdateBalanceNotificationSettingsInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("lowBalanceNotification")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("lowBalanceNotification")];
        if(!fieldValue.is_null())
        {
            setLowBalanceNotification(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertBalance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("alertBalance")];
        if(!fieldValue.is_null())
        {
            setAlertBalance(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertPhone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("alertPhone")];
        if(!fieldValue.is_null())
        {
            setAlertPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertEmail1")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("alertEmail1")];
        if(!fieldValue.is_null())
        {
            setAlertEmail1(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertEmail2")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("alertEmail2")];
        if(!fieldValue.is_null())
        {
            setAlertEmail2(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertEmail3")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("alertEmail3")];
        if(!fieldValue.is_null())
        {
            setAlertEmail3(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void UpdateBalanceNotificationSettingsInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_LowBalanceNotificationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lowBalanceNotification"), m_LowBalanceNotification));
    }
    if(m_AlertBalanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alertBalance"), m_AlertBalance));
        
    }
    if(m_AlertPhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alertPhone"), m_AlertPhone));
        
    }
    if(m_AlertEmail1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alertEmail1"), m_AlertEmail1));
        
    }
    if(m_AlertEmail2IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alertEmail2"), m_AlertEmail2));
        
    }
    if(m_AlertEmail3IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alertEmail3"), m_AlertEmail3));
        
    }
}

void UpdateBalanceNotificationSettingsInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("lowBalanceNotification")))
    {
        setLowBalanceNotification(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("lowBalanceNotification"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("alertBalance")))
    {
        setAlertBalance(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("alertBalance"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("alertPhone")))
    {
        setAlertPhone(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("alertPhone"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("alertEmail1")))
    {
        setAlertEmail1(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("alertEmail1"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("alertEmail2")))
    {
        setAlertEmail2(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("alertEmail2"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("alertEmail3")))
    {
        setAlertEmail3(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("alertEmail3"))));
    }
}

bool UpdateBalanceNotificationSettingsInputObject::isLowBalanceNotification() const
{
    return m_LowBalanceNotification;
}


void UpdateBalanceNotificationSettingsInputObject::setLowBalanceNotification(bool value)
{
    m_LowBalanceNotification = value;
    m_LowBalanceNotificationIsSet = true;
}
bool UpdateBalanceNotificationSettingsInputObject::lowBalanceNotificationIsSet() const
{
    return m_LowBalanceNotificationIsSet;
}

void UpdateBalanceNotificationSettingsInputObject::unsetLowBalanceNotification()
{
    m_LowBalanceNotificationIsSet = false;
}

utility::string_t UpdateBalanceNotificationSettingsInputObject::getAlertBalance() const
{
    return m_AlertBalance;
}


void UpdateBalanceNotificationSettingsInputObject::setAlertBalance(utility::string_t value)
{
    m_AlertBalance = value;
    m_AlertBalanceIsSet = true;
}
bool UpdateBalanceNotificationSettingsInputObject::alertBalanceIsSet() const
{
    return m_AlertBalanceIsSet;
}

void UpdateBalanceNotificationSettingsInputObject::unsetAlertBalance()
{
    m_AlertBalanceIsSet = false;
}

utility::string_t UpdateBalanceNotificationSettingsInputObject::getAlertPhone() const
{
    return m_AlertPhone;
}


void UpdateBalanceNotificationSettingsInputObject::setAlertPhone(utility::string_t value)
{
    m_AlertPhone = value;
    m_AlertPhoneIsSet = true;
}
bool UpdateBalanceNotificationSettingsInputObject::alertPhoneIsSet() const
{
    return m_AlertPhoneIsSet;
}

void UpdateBalanceNotificationSettingsInputObject::unsetAlertPhone()
{
    m_AlertPhoneIsSet = false;
}

utility::string_t UpdateBalanceNotificationSettingsInputObject::getAlertEmail1() const
{
    return m_AlertEmail1;
}


void UpdateBalanceNotificationSettingsInputObject::setAlertEmail1(utility::string_t value)
{
    m_AlertEmail1 = value;
    m_AlertEmail1IsSet = true;
}
bool UpdateBalanceNotificationSettingsInputObject::alertEmail1IsSet() const
{
    return m_AlertEmail1IsSet;
}

void UpdateBalanceNotificationSettingsInputObject::unsetAlertEmail1()
{
    m_AlertEmail1IsSet = false;
}

utility::string_t UpdateBalanceNotificationSettingsInputObject::getAlertEmail2() const
{
    return m_AlertEmail2;
}


void UpdateBalanceNotificationSettingsInputObject::setAlertEmail2(utility::string_t value)
{
    m_AlertEmail2 = value;
    m_AlertEmail2IsSet = true;
}
bool UpdateBalanceNotificationSettingsInputObject::alertEmail2IsSet() const
{
    return m_AlertEmail2IsSet;
}

void UpdateBalanceNotificationSettingsInputObject::unsetAlertEmail2()
{
    m_AlertEmail2IsSet = false;
}

utility::string_t UpdateBalanceNotificationSettingsInputObject::getAlertEmail3() const
{
    return m_AlertEmail3;
}


void UpdateBalanceNotificationSettingsInputObject::setAlertEmail3(utility::string_t value)
{
    m_AlertEmail3 = value;
    m_AlertEmail3IsSet = true;
}
bool UpdateBalanceNotificationSettingsInputObject::alertEmail3IsSet() const
{
    return m_AlertEmail3IsSet;
}

void UpdateBalanceNotificationSettingsInputObject::unsetAlertEmail3()
{
    m_AlertEmail3IsSet = false;
}

}
}
}
}

