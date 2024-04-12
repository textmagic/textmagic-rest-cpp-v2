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



#include "SendMessageResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SendMessageResponse::SendMessageResponse()
{
    m_Id = 0;
    m_Href = utility::conversions::to_string_t("");
    m_Type = utility::conversions::to_string_t("");
    m_SessionId = 0;
    m_BulkId = 0;
    m_MessageId = 0;
    m_ScheduleId = 0;
    m_ChatId = 0;
}

SendMessageResponse::~SendMessageResponse()
{
}

void SendMessageResponse::validate()
{
    // TODO: implement validation
}

web::json::value SendMessageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("href")] = ModelBase::toJson(m_Href);
    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("sessionId")] = ModelBase::toJson(m_SessionId);
    val[utility::conversions::to_string_t("bulkId")] = ModelBase::toJson(m_BulkId);
    val[utility::conversions::to_string_t("messageId")] = ModelBase::toJson(m_MessageId);
    val[utility::conversions::to_string_t("scheduleId")] = ModelBase::toJson(m_ScheduleId);
    val[utility::conversions::to_string_t("chatId")] = ModelBase::toJson(m_ChatId);

    return val;
}

void SendMessageResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("href")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("href")];
        if(!fieldValue.is_null())
        {
            setHref(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("type")];
        if(!fieldValue.is_null())
        {
            setType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessionId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("sessionId")];
        if(!fieldValue.is_null())
        {
            setSessionId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bulkId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bulkId")];
        if(!fieldValue.is_null())
        {
            setBulkId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("messageId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("messageId")];
        if(!fieldValue.is_null())
        {
            setMessageId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduleId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("scheduleId")];
        if(!fieldValue.is_null())
        {
            setScheduleId(ModelBase::int32_tFromJson(fieldValue));
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

void SendMessageResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("href"), m_Href));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sessionId"), m_SessionId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bulkId"), m_BulkId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("messageId"), m_MessageId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("scheduleId"), m_ScheduleId));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("chatId"), m_ChatId));
}

void SendMessageResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setHref(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("href"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setSessionId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("sessionId"))));
    setBulkId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bulkId"))));
    setMessageId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("messageId"))));
    setScheduleId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("scheduleId"))));
    setChatId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("chatId"))));
}

int32_t SendMessageResponse::getId() const
{
    return m_Id;
}


void SendMessageResponse::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t SendMessageResponse::getHref() const
{
    return m_Href;
}


void SendMessageResponse::setHref(utility::string_t value)
{
    m_Href = value;
    
}
utility::string_t SendMessageResponse::getType() const
{
    return m_Type;
}


void SendMessageResponse::setType(utility::string_t value)
{
    m_Type = value;
    
}
int32_t SendMessageResponse::getSessionId() const
{
    return m_SessionId;
}


void SendMessageResponse::setSessionId(int32_t value)
{
    m_SessionId = value;
    
}
int32_t SendMessageResponse::getBulkId() const
{
    return m_BulkId;
}


void SendMessageResponse::setBulkId(int32_t value)
{
    m_BulkId = value;
    
}
int32_t SendMessageResponse::getMessageId() const
{
    return m_MessageId;
}


void SendMessageResponse::setMessageId(int32_t value)
{
    m_MessageId = value;
    
}
int32_t SendMessageResponse::getScheduleId() const
{
    return m_ScheduleId;
}


void SendMessageResponse::setScheduleId(int32_t value)
{
    m_ScheduleId = value;
    
}
int32_t SendMessageResponse::getChatId() const
{
    return m_ChatId;
}


void SendMessageResponse::setChatId(int32_t value)
{
    m_ChatId = value;
    
}
}
}
}
}

