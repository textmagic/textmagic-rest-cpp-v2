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



#include "CreateTemplateInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

CreateTemplateInputObject::CreateTemplateInputObject()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Content = utility::conversions::to_string_t("");
    m_ContentIsSet = false;
}

CreateTemplateInputObject::~CreateTemplateInputObject()
{
}

void CreateTemplateInputObject::validate()
{
    // TODO: implement validation
}

web::json::value CreateTemplateInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_Content);
    }

    return val;
}

void CreateTemplateInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("name")];
        if(!fieldValue.is_null())
        {
            setName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("content")];
        if(!fieldValue.is_null())
        {
            setContent(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void CreateTemplateInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
        
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_Content));
        
    }
}

void CreateTemplateInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        setContent(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("content"))));
    }
}

utility::string_t CreateTemplateInputObject::getName() const
{
    return m_Name;
}


void CreateTemplateInputObject::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool CreateTemplateInputObject::nameIsSet() const
{
    return m_NameIsSet;
}

void CreateTemplateInputObject::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t CreateTemplateInputObject::getContent() const
{
    return m_Content;
}


void CreateTemplateInputObject::setContent(utility::string_t value)
{
    m_Content = value;
    m_ContentIsSet = true;
}
bool CreateTemplateInputObject::contentIsSet() const
{
    return m_ContentIsSet;
}

void CreateTemplateInputObject::unsetContent()
{
    m_ContentIsSet = false;
}

}
}
}
}

