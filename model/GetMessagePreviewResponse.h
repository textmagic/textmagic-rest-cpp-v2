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
 * GetMessagePreviewResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetMessagePreviewResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetMessagePreviewResponse_H_


#include "../ModelBase.h"

#include "MessageOut.h"
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetMessagePreviewResponse
    : public ModelBase
{
public:
    GetMessagePreviewResponse();
    virtual ~GetMessagePreviewResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetMessagePreviewResponse members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<MessageOut>>& getMessages();
    bool messagesIsSet() const;
    void unsetMessages();
    void setMessages(std::vector<std::shared_ptr<MessageOut>> value);

protected:
    std::vector<std::shared_ptr<MessageOut>> m_Messages;
    bool m_MessagesIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetMessagePreviewResponse_H_ */
