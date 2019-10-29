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
 * DeleteInboundMessagesBulkInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_DeleteInboundMessagesBulkInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_DeleteInboundMessagesBulkInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DeleteInboundMessagesBulkInputObject
    : public ModelBase
{
public:
    DeleteInboundMessagesBulkInputObject();
    virtual ~DeleteInboundMessagesBulkInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeleteInboundMessagesBulkInputObject members

    /// <summary>
    /// Entity ID(s), separated by comma
    /// </summary>
    utility::string_t getIds() const;
    bool idsIsSet() const;
    void unsetIds();
    void setIds(utility::string_t value);
    /// <summary>
    /// Default is 0 (false). If set to 1, all the entities will be removed.
    /// </summary>
    int32_t getAll() const;
    bool allIsSet() const;
    void unsetAll();
    void setAll(int32_t value);

protected:
    utility::string_t m_Ids;
    bool m_IdsIsSet;
    int32_t m_All;
    bool m_AllIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_DeleteInboundMessagesBulkInputObject_H_ */
