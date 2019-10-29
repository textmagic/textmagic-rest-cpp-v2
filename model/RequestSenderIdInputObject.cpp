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



#include "RequestSenderIdInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

RequestSenderIdInputObject::RequestSenderIdInputObject()
{
    m_SenderId = utility::conversions::to_string_t("");
    m_SenderIdIsSet = false;
    m_Explanation = utility::conversions::to_string_t("");
    m_ExplanationIsSet = false;
}

RequestSenderIdInputObject::~RequestSenderIdInputObject()
{
}

void RequestSenderIdInputObject::validate()
{
    // TODO: implement validation
}

web::json::value RequestSenderIdInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SenderIdIsSet)
    {
        val[utility::conversions::to_string_t("senderId")] = ModelBase::toJson(m_SenderId);
    }
    if(m_ExplanationIsSet)
    {
        val[utility::conversions::to_string_t("explanation")] = ModelBase::toJson(m_Explanation);
    }

    return val;
}

void RequestSenderIdInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("senderId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("senderId")];
        if(!fieldValue.is_null())
        {
            setSenderId(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("explanation")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("explanation")];
        if(!fieldValue.is_null())
        {
            setExplanation(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void RequestSenderIdInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SenderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("senderId"), m_SenderId));
        
    }
    if(m_ExplanationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("explanation"), m_Explanation));
        
    }
}

void RequestSenderIdInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("senderId")))
    {
        setSenderId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("senderId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("explanation")))
    {
        setExplanation(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("explanation"))));
    }
}

utility::string_t RequestSenderIdInputObject::getSenderId() const
{
    return m_SenderId;
}


void RequestSenderIdInputObject::setSenderId(utility::string_t value)
{
    m_SenderId = value;
    m_SenderIdIsSet = true;
}
bool RequestSenderIdInputObject::senderIdIsSet() const
{
    return m_SenderIdIsSet;
}

void RequestSenderIdInputObject::unsetSenderId()
{
    m_SenderIdIsSet = false;
}

utility::string_t RequestSenderIdInputObject::getExplanation() const
{
    return m_Explanation;
}


void RequestSenderIdInputObject::setExplanation(utility::string_t value)
{
    m_Explanation = value;
    m_ExplanationIsSet = true;
}
bool RequestSenderIdInputObject::explanationIsSet() const
{
    return m_ExplanationIsSet;
}

void RequestSenderIdInputObject::unsetExplanation()
{
    m_ExplanationIsSet = false;
}

}
}
}
}

