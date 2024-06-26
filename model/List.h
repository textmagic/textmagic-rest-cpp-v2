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
 * List.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_List_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_List_H_


#include "../ModelBase.h"

#include "ListImage.h"
#include <cpprest/details/basic_types.h>
#include "User.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  List
    : public ModelBase
{
public:
    List();
    virtual ~List();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// List members

    /// <summary>
    /// List ID.
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// List name.
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Description of the list.
    /// </summary>
    utility::string_t getDescription() const;
        void setDescription(utility::string_t value);
    /// <summary>
    /// Is the List favorited? See [Favorites list](https://docs.textmagic.com/#operation/getFavourites).
    /// </summary>
    bool isFavorited() const;
        void setFavorited(bool value);
    /// <summary>
    /// List members count.
    /// </summary>
    int32_t getMembersCount() const;
        void setMembersCount(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<User> getUser() const;
        void setUser(std::shared_ptr<User> value);
    /// <summary>
    /// Internal service field.
    /// </summary>
    bool isService() const;
        void setService(bool value);
    /// <summary>
    /// Is the list **shared** among all sub-accounts?
    /// </summary>
    bool isShared() const;
        void setShared(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ListImage> getAvatar() const;
        void setAvatar(std::shared_ptr<ListImage> value);
    /// <summary>
    /// Indicates that List is used as a default. All new contacts added via the Web-app will be added in this List by default.
    /// </summary>
    bool isIsDefault() const;
        void setIsDefault(bool value);

protected:
    int32_t m_Id;
        utility::string_t m_Name;
        utility::string_t m_Description;
        bool m_Favorited;
        int32_t m_MembersCount;
        std::shared_ptr<User> m_User;
        bool m_Service;
        bool m_Shared;
        std::shared_ptr<ListImage> m_Avatar;
        bool m_IsDefault;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_List_H_ */
