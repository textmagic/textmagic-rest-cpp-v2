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



#include "DeleteScheduledMessagesBulkInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

DeleteScheduledMessagesBulkInputObject::DeleteScheduledMessagesBulkInputObject()
{
    m_Ids = utility::conversions::to_string_t("");
    m_IdsIsSet = false;
    m_All = 0;
    m_AllIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
}

DeleteScheduledMessagesBulkInputObject::~DeleteScheduledMessagesBulkInputObject()
{
}

void DeleteScheduledMessagesBulkInputObject::validate()
{
    // TODO: implement validation
}

web::json::value DeleteScheduledMessagesBulkInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_IdsIsSet)
    {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(m_Ids);
    }
    if(m_AllIsSet)
    {
        val[utility::conversions::to_string_t("all")] = ModelBase::toJson(m_All);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }

    return val;
}

void DeleteScheduledMessagesBulkInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("ids")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ids")];
        if(!fieldValue.is_null())
        {
            setIds(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("all")];
        if(!fieldValue.is_null())
        {
            setAll(ModelBase::int32_tFromJson(fieldValue));
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

void DeleteScheduledMessagesBulkInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_IdsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ids"), m_Ids));
        
    }
    if(m_AllIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("all"), m_All));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
        
    }
}

void DeleteScheduledMessagesBulkInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ids")))
    {
        setIds(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ids"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("all")))
    {
        setAll(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("all"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("status"))));
    }
}

utility::string_t DeleteScheduledMessagesBulkInputObject::getIds() const
{
    return m_Ids;
}


void DeleteScheduledMessagesBulkInputObject::setIds(utility::string_t value)
{
    m_Ids = value;
    m_IdsIsSet = true;
}
bool DeleteScheduledMessagesBulkInputObject::idsIsSet() const
{
    return m_IdsIsSet;
}

void DeleteScheduledMessagesBulkInputObject::unsetIds()
{
    m_IdsIsSet = false;
}

int32_t DeleteScheduledMessagesBulkInputObject::getAll() const
{
    return m_All;
}


void DeleteScheduledMessagesBulkInputObject::setAll(int32_t value)
{
    m_All = value;
    m_AllIsSet = true;
}
bool DeleteScheduledMessagesBulkInputObject::allIsSet() const
{
    return m_AllIsSet;
}

void DeleteScheduledMessagesBulkInputObject::unsetAll()
{
    m_AllIsSet = false;
}

utility::string_t DeleteScheduledMessagesBulkInputObject::getStatus() const
{
    return m_Status;
}


void DeleteScheduledMessagesBulkInputObject::setStatus(utility::string_t value)
{
    m_Status = value;
    m_StatusIsSet = true;
}
bool DeleteScheduledMessagesBulkInputObject::statusIsSet() const
{
    return m_StatusIsSet;
}

void DeleteScheduledMessagesBulkInputObject::unsetStatus()
{
    m_StatusIsSet = false;
}

}
}
}
}

