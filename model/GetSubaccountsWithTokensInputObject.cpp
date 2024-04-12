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



#include "GetSubaccountsWithTokensInputObject.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetSubaccountsWithTokensInputObject::GetSubaccountsWithTokensInputObject()
{
    m_AppName = utility::conversions::to_string_t("");
    m_AppNameIsSet = false;
    m_Password = utility::conversions::to_string_t("");
    m_PasswordIsSet = false;
}

GetSubaccountsWithTokensInputObject::~GetSubaccountsWithTokensInputObject()
{
}

void GetSubaccountsWithTokensInputObject::validate()
{
    // TODO: implement validation
}

web::json::value GetSubaccountsWithTokensInputObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AppNameIsSet)
    {
        val[utility::conversions::to_string_t("appName")] = ModelBase::toJson(m_AppName);
    }
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(m_Password);
    }

    return val;
}

void GetSubaccountsWithTokensInputObject::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("appName")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("appName")];
        if(!fieldValue.is_null())
        {
            setAppName(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("password")];
        if(!fieldValue.is_null())
        {
            setPassword(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void GetSubaccountsWithTokensInputObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_AppNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("appName"), m_AppName));
        
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("password"), m_Password));
        
    }
}

void GetSubaccountsWithTokensInputObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("appName")))
    {
        setAppName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("appName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("password")))
    {
        setPassword(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("password"))));
    }
}

utility::string_t GetSubaccountsWithTokensInputObject::getAppName() const
{
    return m_AppName;
}


void GetSubaccountsWithTokensInputObject::setAppName(utility::string_t value)
{
    m_AppName = value;
    m_AppNameIsSet = true;
}
bool GetSubaccountsWithTokensInputObject::appNameIsSet() const
{
    return m_AppNameIsSet;
}

void GetSubaccountsWithTokensInputObject::unsetAppName()
{
    m_AppNameIsSet = false;
}

utility::string_t GetSubaccountsWithTokensInputObject::getPassword() const
{
    return m_Password;
}


void GetSubaccountsWithTokensInputObject::setPassword(utility::string_t value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}
bool GetSubaccountsWithTokensInputObject::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void GetSubaccountsWithTokensInputObject::unsetPassword()
{
    m_PasswordIsSet = false;
}

}
}
}
}

