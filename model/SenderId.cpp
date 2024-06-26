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



#include "SenderId.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

SenderId::SenderId()
{
    m_Id = 0;
    m_DisplayTimeFormat = utility::conversions::to_string_t("");
    m_DisplayTimeFormatIsSet = false;
    m_SenderId = utility::conversions::to_string_t("");
    m_Status = utility::conversions::to_string_t("");
}

SenderId::~SenderId()
{
}

void SenderId::validate()
{
    // TODO: implement validation
}

web::json::value SenderId::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    if(m_DisplayTimeFormatIsSet)
    {
        val[utility::conversions::to_string_t("displayTimeFormat")] = ModelBase::toJson(m_DisplayTimeFormat);
    }
    val[utility::conversions::to_string_t("senderId")] = ModelBase::toJson(m_SenderId);
    val[utility::conversions::to_string_t("user")] = ModelBase::toJson(m_User);
    val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);

    return val;
}

void SenderId::fromJson(web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("senderId")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("senderId")];
        if(!fieldValue.is_null())
        {
            setSenderId(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("status")];
        if(!fieldValue.is_null())
        {
            setStatus(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void SenderId::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("senderId"), m_SenderId));
    m_User->toMultipart(multipart, utility::conversions::to_string_t("user."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
}

void SenderId::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    setSenderId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("senderId"))));
    std::shared_ptr<User> newUser(new User());
    newUser->fromMultiPart(multipart, utility::conversions::to_string_t("user."));
    setUser( newUser );
    setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
}

int32_t SenderId::getId() const
{
    return m_Id;
}


void SenderId::setId(int32_t value)
{
    m_Id = value;
    
}
utility::string_t SenderId::getDisplayTimeFormat() const
{
    return m_DisplayTimeFormat;
}


void SenderId::setDisplayTimeFormat(utility::string_t value)
{
    m_DisplayTimeFormat = value;
    m_DisplayTimeFormatIsSet = true;
}
bool SenderId::displayTimeFormatIsSet() const
{
    return m_DisplayTimeFormatIsSet;
}

void SenderId::unsetDisplayTimeFormat()
{
    m_DisplayTimeFormatIsSet = false;
}

utility::string_t SenderId::getSenderId() const
{
    return m_SenderId;
}


void SenderId::setSenderId(utility::string_t value)
{
    m_SenderId = value;
    
}
std::shared_ptr<User> SenderId::getUser() const
{
    return m_User;
}


void SenderId::setUser(std::shared_ptr<User> value)
{
    m_User = value;
    
}
utility::string_t SenderId::getStatus() const
{
    return m_Status;
}


void SenderId::setStatus(utility::string_t value)
{
    m_Status = value;
    
}
}
}
}
}

