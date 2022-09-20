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
 * GetBalanceNotificationSettingsResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetBalanceNotificationSettingsResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetBalanceNotificationSettingsResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetBalanceNotificationSettingsResponse
    : public ModelBase
{
public:
    GetBalanceNotificationSettingsResponse();
    virtual ~GetBalanceNotificationSettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetBalanceNotificationSettingsResponse members

    /// <summary>
    /// Should user receive low balance notification.
    /// </summary>
    bool isLowBalanceNotification() const;
        void setLowBalanceNotification(bool value);
    /// <summary>
    /// If balance is below this value, user receive low balance notification.
    /// </summary>
    double getAlertBalance() const;
        void setAlertBalance(double value);
    /// <summary>
    /// Low balance notification phone number.
    /// </summary>
    utility::string_t getAlertPhone() const;
        void setAlertPhone(utility::string_t value);
    /// <summary>
    /// Low balance notification email 1.
    /// </summary>
    utility::string_t getAlertEmail1() const;
        void setAlertEmail1(utility::string_t value);
    /// <summary>
    /// Low balance notification email 2.
    /// </summary>
    utility::string_t getAlertEmail2() const;
        void setAlertEmail2(utility::string_t value);
    /// <summary>
    /// Low balance notification email 3.
    /// </summary>
    utility::string_t getAlertEmail3() const;
        void setAlertEmail3(utility::string_t value);

protected:
    bool m_LowBalanceNotification;
        double m_AlertBalance;
        utility::string_t m_AlertPhone;
        utility::string_t m_AlertEmail1;
        utility::string_t m_AlertEmail2;
        utility::string_t m_AlertEmail3;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetBalanceNotificationSettingsResponse_H_ */
