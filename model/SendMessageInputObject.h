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

/*
 * SendMessageInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_SendMessageInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_SendMessageInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SendMessageInputObject
    : public ModelBase
{
public:
    SendMessageInputObject();
    virtual ~SendMessageInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SendMessageInputObject members

    /// <summary>
    /// Message text. Required if **template_id** is not set.
    /// </summary>
    utility::string_t getText() const;
        void setText(utility::string_t value);
    /// <summary>
    /// Template used instead of message text. Required if **text** is not set.
    /// </summary>
    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsetTemplateId();
    void setTemplateId(int32_t value);
    /// <summary>
    /// DEPRECATED, consider using sendingDateTime and sendingTimezone parameters instead: Optional (required with rrule set). Message sending time in unix timestamp format. Default is now.
    /// </summary>
    int32_t getSendingTime() const;
    bool sendingTimeIsSet() const;
    void unsetSendingTime();
    void setSendingTime(int32_t value);
    /// <summary>
    /// Sending time in Y-m-d H:i:s format (e.g. 2016-05-27 13:02:33). This time is relative to **sendingTimezone**.
    /// </summary>
    utility::string_t getSendingDateTime() const;
    bool sendingDateTimeIsSet() const;
    void unsetSendingDateTime();
    void setSendingDateTime(utility::string_t value);
    /// <summary>
    /// ID or ISO-name of timezone used for sending when sendingDateTime parameter is set. E.g. if you specify sendingDateTime &#x3D; \\\&quot;2016-05-27 13:02:33\\\&quot; and sendingTimezone &#x3D; \\\&quot;America/Buenos_Aires\\\&quot;, your message will be sent at May 27, 2016 13:02:33 Buenos Aires time, or 16:02:33 UTC. Default is account timezone.
    /// </summary>
    utility::string_t getSendingTimezone() const;
    bool sendingTimezoneIsSet() const;
    void unsetSendingTimezone();
    void setSendingTimezone(utility::string_t value);
    /// <summary>
    /// Comma separated array of contact resources id message will be sent to.
    /// </summary>
    utility::string_t getContacts() const;
    bool contactsIsSet() const;
    void unsetContacts();
    void setContacts(utility::string_t value);
    /// <summary>
    /// Comma separated array of list resources id message will be sent to.
    /// </summary>
    utility::string_t getLists() const;
    bool listsIsSet() const;
    void unsetLists();
    void setLists(utility::string_t value);
    /// <summary>
    /// Comma separated array of E.164 phone numbers message will be sent to.
    /// </summary>
    utility::string_t getPhones() const;
        void setPhones(utility::string_t value);
    /// <summary>
    /// Should sending method cut extra characters which not fit supplied partsCount or return 400 Bad request response instead.
    /// </summary>
    bool isCutExtra() const;
    bool cutExtraIsSet() const;
    void unsetCutExtra();
    void setCutExtra(bool value);
    /// <summary>
    /// Maximum message parts count (TextMagic allows sending 1 to 6 message parts).
    /// </summary>
    int32_t getPartsCount() const;
    bool partsCountIsSet() const;
    void unsetPartsCount();
    void setPartsCount(int32_t value);
    /// <summary>
    /// Custom message reference id which can be used in your application infrastructure.
    /// </summary>
    int32_t getReferenceId() const;
    bool referenceIdIsSet() const;
    void unsetReferenceId();
    void setReferenceId(int32_t value);
    /// <summary>
    /// One of allowed Sender ID (phone number or alphanumeric sender ID). If specified Sender ID is not allowed for some destinations, a fallback default Sender ID will be used to ensure delivery. See [Get timezones](http://docs.textmagictesting.com/#tag/Sender-IDs).
    /// </summary>
    utility::string_t getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();
    void setFrom(utility::string_t value);
    /// <summary>
    /// iCal RRULE parameter to create recurrent scheduled messages. When used, sendingTime is mandatory as start point of sending. See https://www.textmagic.com/free-tools/rrule-generator for format details.
    /// </summary>
    utility::string_t getRrule() const;
    bool rruleIsSet() const;
    void unsetRrule();
    void setRrule(utility::string_t value);
    /// <summary>
    /// Should sending method try to create new Chat (if not exist) with specified recipients?
    /// </summary>
    bool isCreateChat() const;
    bool createChatIsSet() const;
    void unsetCreateChat();
    void setCreateChat(bool value);
    /// <summary>
    /// Send a Text to Speech message.
    /// </summary>
    bool isTts() const;
    bool ttsIsSet() const;
    void unsetTts();
    void setTts(bool value);
    /// <summary>
    /// Treat phone numbers passed in the \\&#39;phones\\&#39; field as local.
    /// </summary>
    bool isLocal() const;
    bool localIsSet() const;
    void unsetLocal();
    void setLocal(bool value);
    /// <summary>
    /// The 2-letter ISO country code for local phone numbers, used when \\&#39;local\\&#39; is set to true. Default is the account country.
    /// </summary>
    utility::string_t getLocalCountry() const;
    bool localCountryIsSet() const;
    void unsetLocalCountry();
    void setLocalCountry(utility::string_t value);

protected:
    utility::string_t m_Text;
        int32_t m_TemplateId;
    bool m_TemplateIdIsSet;
    int32_t m_SendingTime;
    bool m_SendingTimeIsSet;
    utility::string_t m_SendingDateTime;
    bool m_SendingDateTimeIsSet;
    utility::string_t m_SendingTimezone;
    bool m_SendingTimezoneIsSet;
    utility::string_t m_Contacts;
    bool m_ContactsIsSet;
    utility::string_t m_Lists;
    bool m_ListsIsSet;
    utility::string_t m_Phones;
        bool m_CutExtra;
    bool m_CutExtraIsSet;
    int32_t m_PartsCount;
    bool m_PartsCountIsSet;
    int32_t m_ReferenceId;
    bool m_ReferenceIdIsSet;
    utility::string_t m_From;
    bool m_FromIsSet;
    utility::string_t m_Rrule;
    bool m_RruleIsSet;
    bool m_CreateChat;
    bool m_CreateChatIsSet;
    bool m_Tts;
    bool m_TtsIsSet;
    bool m_Local;
    bool m_LocalIsSet;
    utility::string_t m_LocalCountry;
    bool m_LocalCountryIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_SendMessageInputObject_H_ */
