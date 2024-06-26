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
 * UpdateBalanceNotificationSettingsInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_UpdateBalanceNotificationSettingsInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_UpdateBalanceNotificationSettingsInputObject_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UpdateBalanceNotificationSettingsInputObject
    : public ModelBase
{
public:
    UpdateBalanceNotificationSettingsInputObject();
    virtual ~UpdateBalanceNotificationSettingsInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UpdateBalanceNotificationSettingsInputObject members

    /// <summary>
    /// Should user receive low balance notification.
    /// </summary>
    bool isLowBalanceNotification() const;
    bool lowBalanceNotificationIsSet() const;
    void unsetLowBalanceNotification();
    void setLowBalanceNotification(bool value);
    /// <summary>
    /// If balance is below this value, user receive low balance notification.
    /// </summary>
    utility::string_t getAlertBalance() const;
    bool alertBalanceIsSet() const;
    void unsetAlertBalance();
    void setAlertBalance(utility::string_t value);
    /// <summary>
    /// Low balance notification phone number.
    /// </summary>
    utility::string_t getAlertPhone() const;
    bool alertPhoneIsSet() const;
    void unsetAlertPhone();
    void setAlertPhone(utility::string_t value);
    /// <summary>
    /// Low balance notification email 1.
    /// </summary>
    utility::string_t getAlertEmail1() const;
    bool alertEmail1IsSet() const;
    void unsetAlertEmail1();
    void setAlertEmail1(utility::string_t value);
    /// <summary>
    /// Low balance notification email 2.
    /// </summary>
    utility::string_t getAlertEmail2() const;
    bool alertEmail2IsSet() const;
    void unsetAlertEmail2();
    void setAlertEmail2(utility::string_t value);
    /// <summary>
    /// Low balance notification email 3.
    /// </summary>
    utility::string_t getAlertEmail3() const;
    bool alertEmail3IsSet() const;
    void unsetAlertEmail3();
    void setAlertEmail3(utility::string_t value);

protected:
    bool m_LowBalanceNotification;
    bool m_LowBalanceNotificationIsSet;
    utility::string_t m_AlertBalance;
    bool m_AlertBalanceIsSet;
    utility::string_t m_AlertPhone;
    bool m_AlertPhoneIsSet;
    utility::string_t m_AlertEmail1;
    bool m_AlertEmail1IsSet;
    utility::string_t m_AlertEmail2;
    bool m_AlertEmail2IsSet;
    utility::string_t m_AlertEmail3;
    bool m_AlertEmail3IsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_UpdateBalanceNotificationSettingsInputObject_H_ */
