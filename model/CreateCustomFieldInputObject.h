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
 * CreateCustomFieldInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_CreateCustomFieldInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_CreateCustomFieldInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CreateCustomFieldInputObject
    : public ModelBase
{
public:
    CreateCustomFieldInputObject();
    virtual ~CreateCustomFieldInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CreateCustomFieldInputObject members

    /// <summary>
    /// Custom field name.
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();
    void setName(utility::string_t value);

protected:
    utility::string_t m_Name;
    bool m_NameIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_CreateCustomFieldInputObject_H_ */
