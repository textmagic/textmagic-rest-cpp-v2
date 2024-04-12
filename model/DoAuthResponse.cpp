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



#include "DoAuthResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

DoAuthResponse::DoAuthResponse()
{
    m_Username = utility::conversions::to_string_t("");
    m_Token = utility::conversions::to_string_t("");
    m_Expires = utility::datetime();
}

DoAuthResponse::~DoAuthResponse()
{
}

void DoAuthResponse::validate()
{
    // TODO: implement validation
}

web::json::value DoAuthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);
    val[utility::conversions::to_string_t("expires")] = ModelBase::toJson(m_Expires);
    val[utility::conversions::to_string_t("minVersions")] = ModelBase::toJson(m_MinVersions);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_DisallowedRules )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("disallowedRules")] = web::json::value::array(jsonArray);
    }

    return val;
}

void DoAuthResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("username")];
        if(!fieldValue.is_null())
        {
            setUsername(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("token")];
        if(!fieldValue.is_null())
        {
            setToken(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("expires")];
        if(!fieldValue.is_null())
        {
            setExpires(ModelBase::dateFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minVersions")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("minVersions")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<DoAuthResponse_minVersions> newItem(new DoAuthResponse_minVersions());
            newItem->fromJson(fieldValue);
            setMinVersions( newItem );
        }
    }
    {
        m_DisallowedRules.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("disallowedRules")))
        {
        for( auto& item : val[utility::conversions::to_string_t("disallowedRules")].as_array() )
        {
            m_DisallowedRules.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
}

void DoAuthResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_Username));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("expires"), m_Expires));
    m_MinVersions->toMultipart(multipart, utility::conversions::to_string_t("minVersions."));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_DisallowedRules )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("disallowedRules"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
}

void DoAuthResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setUsername(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("username"))));
    setToken(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("token"))));
    setExpires(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("expires"))));
    std::shared_ptr<DoAuthResponse_minVersions> newMinVersions(new DoAuthResponse_minVersions());
    newMinVersions->fromMultiPart(multipart, utility::conversions::to_string_t("minVersions."));
    setMinVersions( newMinVersions );
    {
        m_DisallowedRules.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("disallowedRules"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_DisallowedRules.push_back(ModelBase::stringFromJson(item));
        }
    }
}

utility::string_t DoAuthResponse::getUsername() const
{
    return m_Username;
}


void DoAuthResponse::setUsername(utility::string_t value)
{
    m_Username = value;
    
}
utility::string_t DoAuthResponse::getToken() const
{
    return m_Token;
}


void DoAuthResponse::setToken(utility::string_t value)
{
    m_Token = value;
    
}
utility::datetime DoAuthResponse::getExpires() const
{
    return m_Expires;
}


void DoAuthResponse::setExpires(utility::datetime value)
{
    m_Expires = value;
    
}
std::shared_ptr<DoAuthResponse_minVersions> DoAuthResponse::getMinVersions() const
{
    return m_MinVersions;
}


void DoAuthResponse::setMinVersions(std::shared_ptr<DoAuthResponse_minVersions> value)
{
    m_MinVersions = value;
    
}
std::vector<utility::string_t>& DoAuthResponse::getDisallowedRules()
{
    return m_DisallowedRules;
}

void DoAuthResponse::setDisallowedRules(std::vector<utility::string_t> value)
{
    m_DisallowedRules = value;
    
}
}
}
}
}

