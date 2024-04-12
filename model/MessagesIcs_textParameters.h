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
 * MessagesIcs_textParameters.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessagesIcs_textParameters_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessagesIcs_textParameters_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessagesIcs_textParameters
    : public ModelBase
{
public:
    MessagesIcs_textParameters();
    virtual ~MessagesIcs_textParameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessagesIcs_textParameters members

    /// <summary>
    /// Cost to check that one number is constant – 0.04 in your account currency.
    /// </summary>
    double getCost() const;
        void setCost(double value);
    /// <summary>
    /// Message parts (multiples of 160 characters) count.
    /// </summary>
    int32_t getParts() const;
        void setParts(int32_t value);
    /// <summary>
    /// Characters count.
    /// </summary>
    int32_t getChars() const;
        void setChars(int32_t value);
    /// <summary>
    /// Message charset. Could be: * **ISO-8859-1** – for plaintext SMS; * **UTF-16BE** – for Unicode SMS. 
    /// </summary>
    utility::string_t getEncoding() const;
        void setEncoding(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getCountries();
        void setCountries(std::vector<utility::string_t> value);
    /// <summary>
    /// Human-readable message charset label. Could be: *   **ISO-8859-1** for plaintext SMS; *   **UTF-16BE** for Unicode SMS; *   **Voice** for voice services (Text-to-Speech or Voice Broadcast) messages. 
    /// </summary>
    utility::string_t getCharsetLabel() const;
        void setCharsetLabel(utility::string_t value);

protected:
    double m_Cost;
        int32_t m_Parts;
        int32_t m_Chars;
        utility::string_t m_Encoding;
        std::vector<utility::string_t> m_Countries;
        utility::string_t m_CharsetLabel;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessagesIcs_textParameters_H_ */
