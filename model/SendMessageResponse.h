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
 * SendMessageResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_SendMessageResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_SendMessageResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SendMessageResponse
    : public ModelBase
{
public:
    SendMessageResponse();
    virtual ~SendMessageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendMessageResponse members

    /// <summary>
    /// Message ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// URI of the message session.
    /// </summary>
    utility::string_t getHref() const;
        void setHref(utility::string_t value);
    /// <summary>
    /// Message response type: * **message** – when the message is sent to a single recipient. * **session** – when the message is sent is to multiple recipients. * **schedule** - when the message is scheduled for sending. * **bulk** - when the message is sent to multiple recipients and the number of recipients requires asynchronous processing See [Sending more than 1,000 messages in one session](https://docs.textmagic.com/#section/Tutorials/Sending-more-than-1000-messages-in-one-session). 
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);
    /// <summary>
    /// Message session ID.
    /// </summary>
    int32_t getSessionId() const;
        void setSessionId(int32_t value);
    /// <summary>
    /// Bulk Session ID. See [Sending more than 1,000 messages in one session](https://docs.textmagic.com/#section/Tutorials/Sending-more-than-1000-messages-in-one-session).
    /// </summary>
    int32_t getBulkId() const;
        void setBulkId(int32_t value);
    /// <summary>
    /// Message ID.
    /// </summary>
    int32_t getMessageId() const;
        void setMessageId(int32_t value);
    /// <summary>
    /// Message Schedule ID.
    /// </summary>
    int32_t getScheduleId() const;
        void setScheduleId(int32_t value);
    /// <summary>
    /// Message Chat ID.
    /// </summary>
    int32_t getChatId() const;
        void setChatId(int32_t value);

protected:
    int32_t m_Id;
        utility::string_t m_Href;
        utility::string_t m_Type;
        int32_t m_SessionId;
        int32_t m_BulkId;
        int32_t m_MessageId;
        int32_t m_ScheduleId;
        int32_t m_ChatId;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_SendMessageResponse_H_ */
