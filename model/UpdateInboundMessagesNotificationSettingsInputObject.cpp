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



#include "UpdateInboundMessagesNotificationSettingsInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UpdateInboundMessagesNotificationSettingsInputObject::UpdateInboundMessagesNotificationSettingsInputObject()
{
    m_InboundMessageNotification = false;
    m_InboundMessageNotificationIsSet = false;
    m_IncludeSmsHistory = false;
    m_IncludeSmsHistoryIsSet = false;
    m_SendInHtmlFormat = false;
    m_SendInHtmlFormatIsSet = false;
    m_AlertEmail1 = utility::conversions::to_string_t("");
    m_AlertEmail1IsSet = false;
    m_AlertEmail2 = utility::conversions::to_string_t("");
    m_AlertEmail2IsSet = false;
    m_AlertEmail3 = utility::conversions::to_string_t("");
    m_AlertEmail3IsSet = false;
}

UpdateInboundMessagesNotificationSettingsInputObject::~UpdateInboundMessagesNotificationSettingsInputObject()
{
}

void UpdateInboundMessagesNotificationSettingsInputObject::validate()
{
    // TODO: implement validation
}

web::json::value UpdateInboundMessagesNotificationSettingsInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_InboundMessageNotificationIsSet)
    {
        val[utility::conversions::to_string_t("inboundMessageNotification")] = ModelBase::toJson(m_InboundMessageNotification);
    }
    if(m_IncludeSmsHistoryIsSet)
    {
        val[utility::conversions::to_string_t("includeSmsHistory")] = ModelBase::toJson(m_IncludeSmsHistory);
    }
    if(m_SendInHtmlFormatIsSet)
    {
        val[utility::conversions::to_string_t("sendInHtmlFormat")] = ModelBase::toJson(m_SendInHtmlFormat);
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

void UpdateInboundMessagesNotificationSettingsInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("inboundMessageNotification")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("inboundMessageNotification")];
        if(!fieldValue.is_null())
        {
            setInboundMessageNotification(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeSmsHistory")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("includeSmsHistory")];
        if(!fieldValue.is_null())
        {
            setIncludeSmsHistory(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendInHtmlFormat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sendInHtmlFormat")];
        if(!fieldValue.is_null())
        {
            setSendInHtmlFormat(ModelBase::boolFromJson(fieldValue));
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

void UpdateInboundMessagesNotificationSettingsInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_InboundMessageNotificationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inboundMessageNotification"), m_InboundMessageNotification));
    }
    if(m_IncludeSmsHistoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("includeSmsHistory"), m_IncludeSmsHistory));
    }
    if(m_SendInHtmlFormatIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sendInHtmlFormat"), m_SendInHtmlFormat));
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

void UpdateInboundMessagesNotificationSettingsInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("inboundMessageNotification")))
    {
        setInboundMessageNotification(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("inboundMessageNotification"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("includeSmsHistory")))
    {
        setIncludeSmsHistory(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("includeSmsHistory"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sendInHtmlFormat")))
    {
        setSendInHtmlFormat(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sendInHtmlFormat"))));
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

bool UpdateInboundMessagesNotificationSettingsInputObject::isInboundMessageNotification() const
{
    return m_InboundMessageNotification;
}


void UpdateInboundMessagesNotificationSettingsInputObject::setInboundMessageNotification(bool value)
{
    m_InboundMessageNotification = value;
    m_InboundMessageNotificationIsSet = true;
}
bool UpdateInboundMessagesNotificationSettingsInputObject::inboundMessageNotificationIsSet() const
{
    return m_InboundMessageNotificationIsSet;
}

void UpdateInboundMessagesNotificationSettingsInputObject::unsetInboundMessageNotification()
{
    m_InboundMessageNotificationIsSet = false;
}

bool UpdateInboundMessagesNotificationSettingsInputObject::isIncludeSmsHistory() const
{
    return m_IncludeSmsHistory;
}


void UpdateInboundMessagesNotificationSettingsInputObject::setIncludeSmsHistory(bool value)
{
    m_IncludeSmsHistory = value;
    m_IncludeSmsHistoryIsSet = true;
}
bool UpdateInboundMessagesNotificationSettingsInputObject::includeSmsHistoryIsSet() const
{
    return m_IncludeSmsHistoryIsSet;
}

void UpdateInboundMessagesNotificationSettingsInputObject::unsetIncludeSmsHistory()
{
    m_IncludeSmsHistoryIsSet = false;
}

bool UpdateInboundMessagesNotificationSettingsInputObject::isSendInHtmlFormat() const
{
    return m_SendInHtmlFormat;
}


void UpdateInboundMessagesNotificationSettingsInputObject::setSendInHtmlFormat(bool value)
{
    m_SendInHtmlFormat = value;
    m_SendInHtmlFormatIsSet = true;
}
bool UpdateInboundMessagesNotificationSettingsInputObject::sendInHtmlFormatIsSet() const
{
    return m_SendInHtmlFormatIsSet;
}

void UpdateInboundMessagesNotificationSettingsInputObject::unsetSendInHtmlFormat()
{
    m_SendInHtmlFormatIsSet = false;
}

utility::string_t UpdateInboundMessagesNotificationSettingsInputObject::getAlertEmail1() const
{
    return m_AlertEmail1;
}


void UpdateInboundMessagesNotificationSettingsInputObject::setAlertEmail1(utility::string_t value)
{
    m_AlertEmail1 = value;
    m_AlertEmail1IsSet = true;
}
bool UpdateInboundMessagesNotificationSettingsInputObject::alertEmail1IsSet() const
{
    return m_AlertEmail1IsSet;
}

void UpdateInboundMessagesNotificationSettingsInputObject::unsetAlertEmail1()
{
    m_AlertEmail1IsSet = false;
}

utility::string_t UpdateInboundMessagesNotificationSettingsInputObject::getAlertEmail2() const
{
    return m_AlertEmail2;
}


void UpdateInboundMessagesNotificationSettingsInputObject::setAlertEmail2(utility::string_t value)
{
    m_AlertEmail2 = value;
    m_AlertEmail2IsSet = true;
}
bool UpdateInboundMessagesNotificationSettingsInputObject::alertEmail2IsSet() const
{
    return m_AlertEmail2IsSet;
}

void UpdateInboundMessagesNotificationSettingsInputObject::unsetAlertEmail2()
{
    m_AlertEmail2IsSet = false;
}

utility::string_t UpdateInboundMessagesNotificationSettingsInputObject::getAlertEmail3() const
{
    return m_AlertEmail3;
}


void UpdateInboundMessagesNotificationSettingsInputObject::setAlertEmail3(utility::string_t value)
{
    m_AlertEmail3 = value;
    m_AlertEmail3IsSet = true;
}
bool UpdateInboundMessagesNotificationSettingsInputObject::alertEmail3IsSet() const
{
    return m_AlertEmail3IsSet;
}

void UpdateInboundMessagesNotificationSettingsInputObject::unsetAlertEmail3()
{
    m_AlertEmail3IsSet = false;
}

}
}
}
}

