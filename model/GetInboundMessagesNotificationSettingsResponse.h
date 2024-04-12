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
 * GetInboundMessagesNotificationSettingsResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetInboundMessagesNotificationSettingsResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetInboundMessagesNotificationSettingsResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetInboundMessagesNotificationSettingsResponse
    : public ModelBase
{
public:
    GetInboundMessagesNotificationSettingsResponse();
    virtual ~GetInboundMessagesNotificationSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetInboundMessagesNotificationSettingsResponse members

    /// <summary>
    /// Should user receive notification about new incoming messages.
    /// </summary>
    bool isInboundMessageNotification() const;
        void setInboundMessageNotification(bool value);
    /// <summary>
    /// Should user receive notification about new forwarded calls.
    /// </summary>
    bool isForwardedCallNotification() const;
        void setForwardedCallNotification(bool value);
    /// <summary>
    /// Include SMS history into notification Email.
    /// </summary>
    bool isIncludeSmsHistory() const;
        void setIncludeSmsHistory(bool value);
    /// <summary>
    /// Send Email notification in HTML format.
    /// </summary>
    bool isSendInHtmlFormat() const;
        void setSendInHtmlFormat(bool value);
    /// <summary>
    /// New message notification email 1.
    /// </summary>
    utility::string_t getAlertEmail1() const;
        void setAlertEmail1(utility::string_t value);
    /// <summary>
    /// New message notification email 2.
    /// </summary>
    utility::string_t getAlertEmail2() const;
        void setAlertEmail2(utility::string_t value);
    /// <summary>
    /// New message notification email 3.
    /// </summary>
    utility::string_t getAlertEmail3() const;
        void setAlertEmail3(utility::string_t value);

protected:
    bool m_InboundMessageNotification;
        bool m_ForwardedCallNotification;
        bool m_IncludeSmsHistory;
        bool m_SendInHtmlFormat;
        utility::string_t m_AlertEmail1;
        utility::string_t m_AlertEmail2;
        utility::string_t m_AlertEmail3;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetInboundMessagesNotificationSettingsResponse_H_ */
