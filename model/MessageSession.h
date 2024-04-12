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
 * MessageSession.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessageSession_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessageSession_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessageSession
    : public ModelBase
{
public:
    MessageSession();
    virtual ~MessageSession();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessageSession members

    /// <summary>
    /// Session ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// Session creation time.
    /// </summary>
    utility::string_t getStartTime() const;
        void setStartTime(utility::string_t value);
    /// <summary>
    /// Session text. If a template was used for the session text (see [Messages: Send](https://docs.textmagic.com/#tag/Outbound-Messages) for details), it may contain template tags. 
    /// </summary>
    utility::string_t getText() const;
        void setText(utility::string_t value);
    /// <summary>
    /// *   **O** – for Textmagic Online; *   **A** – for API; *   **M** – for Textmagic Messenger; *   **E** – for [Email to SMS](https://docs.textmagic.com/#tag/Send-Email-to-SMS); *   **X** – for [Distribution Lists](https://docs.textmagic.com/#tag/Distribution-Lists). 
    /// </summary>
    utility::string_t getSource() const;
        void setSource(utility::string_t value);
    /// <summary>
    /// Custom reference ID (see [Messages: Send](https://docs.textmagic.com/#tag/Send-Email-to-SMS) for details). 
    /// </summary>
    utility::string_t getReferenceId() const;
        void setReferenceId(utility::string_t value);
    /// <summary>
    /// Session cost (in account currency).
    /// </summary>
    double getPrice() const;
        void setPrice(double value);
    /// <summary>
    /// Session recipient count.
    /// </summary>
    int32_t getNumbersCount() const;
        void setNumbersCount(int32_t value);
    /// <summary>
    /// Destination type of a Message Session: * **t** – text SMS; * **s** – text-to-speech; * **v** – voice broadcast. 
    /// </summary>
    utility::string_t getDestination() const;
        void setDestination(utility::string_t value);

protected:
    int32_t m_Id;
        utility::string_t m_StartTime;
        utility::string_t m_Text;
        utility::string_t m_Source;
        utility::string_t m_ReferenceId;
        double m_Price;
        int32_t m_NumbersCount;
        utility::string_t m_Destination;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessageSession_H_ */
