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
 * MessageTemplate.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MessageTemplate_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MessageTemplate_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MessageTemplate
    : public ModelBase
{
public:
    MessageTemplate();
    virtual ~MessageTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MessageTemplate members

    /// <summary>
    /// Template ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// Template name.
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Template text. May contain tags inside braces. See the [Custom fields list](https://docs.textmagic.com/#section/Custom-fields-list-(Merge-tags)).
    /// </summary>
    utility::string_t getContent() const;
        void setContent(utility::string_t value);
    /// <summary>
    /// Time when the template was last modified.
    /// </summary>
    utility::datetime getLastModified() const;
        void setLastModified(utility::datetime value);

protected:
    int32_t m_Id;
        utility::string_t m_Name;
        utility::string_t m_Content;
        utility::datetime m_LastModified;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MessageTemplate_H_ */
