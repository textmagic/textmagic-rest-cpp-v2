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



#include "GetSurveyNodesResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

GetSurveyNodesResponse::GetSurveyNodesResponse()
{
}

GetSurveyNodesResponse::~GetSurveyNodesResponse()
{
}

void GetSurveyNodesResponse::validate()
{
    // TODO: implement validation
}

web::json::value GetSurveyNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(m_Nodes);
    val[utility::conversions::to_string_t("rows")] = ModelBase::toJson(m_Rows);

    return val;
}

void GetSurveyNodesResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("nodes")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("nodes")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setNodes( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("rows")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setRows( newItem );
        }
    }
}

void GetSurveyNodesResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    m_Nodes->toMultipart(multipart, utility::conversions::to_string_t("nodes."));
    m_Rows->toMultipart(multipart, utility::conversions::to_string_t("rows."));
}

void GetSurveyNodesResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    std::shared_ptr<Object> newNodes(nullptr);
    newNodes->fromMultiPart(multipart, utility::conversions::to_string_t("nodes."));
    setNodes( newNodes );
    std::shared_ptr<Object> newRows(nullptr);
    newRows->fromMultiPart(multipart, utility::conversions::to_string_t("rows."));
    setRows( newRows );
}

std::shared_ptr<Object> GetSurveyNodesResponse::getNodes() const
{
    return m_Nodes;
}


void GetSurveyNodesResponse::setNodes(std::shared_ptr<Object> value)
{
    m_Nodes = value;
    
}
std::shared_ptr<Object> GetSurveyNodesResponse::getRows() const
{
    return m_Rows;
}


void GetSurveyNodesResponse::setRows(std::shared_ptr<Object> value)
{
    m_Rows = value;
    
}
}
}
}
}

