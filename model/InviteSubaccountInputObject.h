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
 * InviteSubaccountInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_InviteSubaccountInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_InviteSubaccountInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  InviteSubaccountInputObject
    : public ModelBase
{
public:
    InviteSubaccountInputObject();
    virtual ~InviteSubaccountInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InviteSubaccountInputObject members

    /// <summary>
    /// The invitation email will be sent to this email address.
    /// </summary>
    utility::string_t getEmail() const;
        void setEmail(utility::string_t value);
    /// <summary>
    /// Type of account: *   **A** for Administrator sub-account; *   **U** for Regular User. 
    /// </summary>
    utility::string_t getRole() const;
        void setRole(utility::string_t value);

protected:
    utility::string_t m_Email;
        utility::string_t m_Role;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_InviteSubaccountInputObject_H_ */
