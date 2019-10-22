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
 * DeleteChatMessagesBulkInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_DeleteChatMessagesBulkInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_DeleteChatMessagesBulkInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  DeleteChatMessagesBulkInputObject
    : public ModelBase
{
public:
    DeleteChatMessagesBulkInputObject();
    virtual ~DeleteChatMessagesBulkInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// DeleteChatMessagesBulkInputObject members

    /// <summary>
    /// Inbound messages ID(s) to delete. Require when \&quot;all\&quot; equal to 0 (false).
    /// </summary>
    utility::string_t getInboundIds() const;
    bool inboundIdsIsSet() const;
    void unsetInbound_ids();
    void setInboundIds(utility::string_t value);
    /// <summary>
    /// Sent messages ID(s) to delete. Require when \&quot;all\&quot; equal to 0 (false).
    /// </summary>
    utility::string_t getSentIds() const;
    bool sentIdsIsSet() const;
    void unsetSent_ids();
    void setSentIds(utility::string_t value);
    /// <summary>
    /// Calls ID(s) to delete. Require when \&quot;all\&quot; equal to 0 (false).
    /// </summary>
    utility::string_t getCallsIds() const;
    bool callsIdsIsSet() const;
    void unsetCalls_ids();
    void setCallsIds(utility::string_t value);
    /// <summary>
    /// Default is 0 (false). If set to 1 all the entities will be removed.
    /// </summary>
    bool isAll() const;
    bool allIsSet() const;
    void unsetAll();
    void setAll(bool value);

protected:
    utility::string_t m_Inbound_ids;
    bool m_Inbound_idsIsSet;
    utility::string_t m_Sent_ids;
    bool m_Sent_idsIsSet;
    utility::string_t m_Calls_ids;
    bool m_Calls_idsIsSet;
    bool m_All;
    bool m_AllIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_DeleteChatMessagesBulkInputObject_H_ */
