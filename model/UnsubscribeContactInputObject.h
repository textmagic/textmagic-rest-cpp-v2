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
 * UnsubscribeContactInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_UnsubscribeContactInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_UnsubscribeContactInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UnsubscribeContactInputObject
    : public ModelBase
{
public:
    UnsubscribeContactInputObject();
    virtual ~UnsubscribeContactInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UnsubscribeContactInputObject members

    /// <summary>
    /// Contact phone number.
    /// </summary>
    utility::string_t getPhone() const;
    bool phoneIsSet() const;
    void unsetPhone();
    void setPhone(utility::string_t value);
    /// <summary>
    /// If set to 1, incoming messages from this number will be blocked.
    /// </summary>
    int32_t getBlockIncoming() const;
    bool blockIncomingIsSet() const;
    void unsetBlockIncoming();
    void setBlockIncoming(int32_t value);

protected:
    utility::string_t m_Phone;
    bool m_PhoneIsSet;
    int32_t m_BlockIncoming;
    bool m_BlockIncomingIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_UnsubscribeContactInputObject_H_ */
