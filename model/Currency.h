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
 * Currency.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_Currency_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_Currency_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Currency
    : public ModelBase
{
public:
    Currency();
    virtual ~Currency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Currency members

    /// <summary>
    /// Three-letter ISO currency ID.
    /// </summary>
    utility::string_t getId() const;
        void setId(utility::string_t value);
    /// <summary>
    /// Unicode-compatible currency symbol.
    /// </summary>
    utility::string_t getUnicodeSymbol() const;
        void setUnicodeSymbol(utility::string_t value);
    /// <summary>
    /// HTML-compatible currency symbol.
    /// </summary>
    utility::string_t getHtmlSymbol() const;
        void setHtmlSymbol(utility::string_t value);

protected:
    utility::string_t m_Id;
        utility::string_t m_UnicodeSymbol;
        utility::string_t m_HtmlSymbol;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_Currency_H_ */
