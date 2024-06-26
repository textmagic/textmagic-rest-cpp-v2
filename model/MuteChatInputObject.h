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
 * MuteChatInputObject.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_MuteChatInputObject_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_MuteChatInputObject_H_


#include "../ModelBase.h"


namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  MuteChatInputObject
    : public ModelBase
{
public:
    MuteChatInputObject();
    virtual ~MuteChatInputObject();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// MuteChatInputObject members

    /// <summary>
    /// Chat ID.
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// Mute notifications sound.
    /// </summary>
    bool isMute() const;
    bool muteIsSet() const;
    void unsetMute();
    void setMute(bool value);
    /// <summary>
    /// Mute for N hours.
    /// </summary>
    int32_t getFor() const;
    bool forIsSet() const;
    void unset_for();
    void setFor(int32_t value);

protected:
    int32_t m_Id;
    bool m_IdIsSet;
    bool m_Mute;
    bool m_MuteIsSet;
    int32_t m__for;
    bool m__forIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_MuteChatInputObject_H_ */
