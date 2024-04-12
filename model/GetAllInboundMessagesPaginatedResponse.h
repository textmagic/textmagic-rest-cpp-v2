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

/*
 * GetAllInboundMessagesPaginatedResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetAllInboundMessagesPaginatedResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetAllInboundMessagesPaginatedResponse_H_


#include "../ModelBase.h"

#include "MessageIn.h"
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetAllInboundMessagesPaginatedResponse
    : public ModelBase
{
public:
    GetAllInboundMessagesPaginatedResponse();
    virtual ~GetAllInboundMessagesPaginatedResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetAllInboundMessagesPaginatedResponse members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPage() const;
        void setPage(int32_t value);
    /// <summary>
    /// The total number of pages.
    /// </summary>
    int32_t getPageCount() const;
        void setPageCount(int32_t value);
    /// <summary>
    /// The number of results per page.
    /// </summary>
    int32_t getLimit() const;
        void setLimit(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<MessageIn>>& getResources();
        void setResources(std::vector<std::shared_ptr<MessageIn>> value);

protected:
    int32_t m_Page;
        int32_t m_PageCount;
        int32_t m_Limit;
        std::vector<std::shared_ptr<MessageIn>> m_Resources;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetAllInboundMessagesPaginatedResponse_H_ */
