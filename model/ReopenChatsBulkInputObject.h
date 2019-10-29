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
 * ReopenChatsBulkInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_ReopenChatsBulkInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_ReopenChatsBulkInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ReopenChatsBulkInputObject
    : public ModelBase
{
public:
    ReopenChatsBulkInputObject();
    virtual ~ReopenChatsBulkInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ReopenChatsBulkInputObject members

    /// <summary>
    /// Entity ID(s), separated by comma.
    /// </summary>
    utility::string_t getIds() const;
    bool idsIsSet() const;
    void unsetIds();
    void setIds(utility::string_t value);
    /// <summary>
    /// Entity ID(s), separated by comma.
    /// </summary>
    bool isAll() const;
    bool allIsSet() const;
    void unsetAll();
    void setAll(bool value);

protected:
    utility::string_t m_Ids;
    bool m_IdsIsSet;
    bool m_All;
    bool m_AllIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_ReopenChatsBulkInputObject_H_ */
