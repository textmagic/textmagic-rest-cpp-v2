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



#include "UnsubscribeContactInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

UnsubscribeContactInputObject::UnsubscribeContactInputObject()
{
    m_Phone = utility::conversions::to_string_t("");
    m_PhoneIsSet = false;
    m_BlockIncoming = 0;
    m_BlockIncomingIsSet = false;
}

UnsubscribeContactInputObject::~UnsubscribeContactInputObject()
{
}

void UnsubscribeContactInputObject::validate()
{
    // TODO: implement validation
}

web::json::value UnsubscribeContactInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PhoneIsSet)
    {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_BlockIncomingIsSet)
    {
        val[utility::conversions::to_string_t("blockIncoming")] = ModelBase::toJson(m_BlockIncoming);
    }

    return val;
}

void UnsubscribeContactInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("phone")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("phone")];
        if(!fieldValue.is_null())
        {
            setPhone(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blockIncoming")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("blockIncoming")];
        if(!fieldValue.is_null())
        {
            setBlockIncoming(ModelBase::int32_tFromJson(fieldValue));
        }
    }
}

void UnsubscribeContactInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_BlockIncomingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blockIncoming"), m_BlockIncoming));
    }
}

void UnsubscribeContactInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("blockIncoming")))
    {
        setBlockIncoming(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("blockIncoming"))));
    }
}

utility::string_t UnsubscribeContactInputObject::getPhone() const
{
    return m_Phone;
}


void UnsubscribeContactInputObject::setPhone(utility::string_t value)
{
    m_Phone = value;
    m_PhoneIsSet = true;
}
bool UnsubscribeContactInputObject::phoneIsSet() const
{
    return m_PhoneIsSet;
}

void UnsubscribeContactInputObject::unsetPhone()
{
    m_PhoneIsSet = false;
}

int32_t UnsubscribeContactInputObject::getBlockIncoming() const
{
    return m_BlockIncoming;
}


void UnsubscribeContactInputObject::setBlockIncoming(int32_t value)
{
    m_BlockIncoming = value;
    m_BlockIncomingIsSet = true;
}
bool UnsubscribeContactInputObject::blockIncomingIsSet() const
{
    return m_BlockIncomingIsSet;
}

void UnsubscribeContactInputObject::unsetBlockIncoming()
{
    m_BlockIncomingIsSet = false;
}

}
}
}
}

