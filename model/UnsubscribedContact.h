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
 * UnsubscribedContact.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_UnsubscribedContact_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_UnsubscribedContact_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UnsubscribedContact
    : public ModelBase
{
public:
    UnsubscribedContact();
    virtual ~UnsubscribedContact();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UnsubscribedContact members

    /// <summary>
    /// Unsubscribed contact ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// Phone number in [E.164 format](https://en.wikipedia.org/wiki/E.164).
    /// </summary>
    utility::string_t getPhone() const;
        void setPhone(utility::string_t value);
    /// <summary>
    /// Time when contact was opted-out.
    /// </summary>
    utility::datetime getUnsubscribeTime() const;
        void setUnsubscribeTime(utility::datetime value);
    /// <summary>
    /// Unsubscribed contact first name.
    /// </summary>
    utility::string_t getFirstName() const;
        void setFirstName(utility::string_t value);
    /// <summary>
    /// Unsubscribed contact last name.
    /// </summary>
    utility::string_t getLastName() const;
        void setLastName(utility::string_t value);

protected:
    int32_t m_Id;
        utility::string_t m_Phone;
        utility::datetime m_UnsubscribeTime;
        utility::string_t m_FirstName;
        utility::string_t m_LastName;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_UnsubscribedContact_H_ */
