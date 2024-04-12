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
 * GetAvailableDedicatedNumbersResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetAvailableDedicatedNumbersResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetAvailableDedicatedNumbersResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetAvailableDedicatedNumbersResponse
    : public ModelBase
{
public:
    GetAvailableDedicatedNumbersResponse();
    virtual ~GetAvailableDedicatedNumbersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetAvailableDedicatedNumbersResponse members

    /// <summary>
    /// Array of phone numbers.
    /// </summary>
    std::vector<utility::string_t>& getNumbers();
        void setNumbers(std::vector<utility::string_t> value);
    /// <summary>
    /// Dedicated number monthly fee for this country. Returned in the current [account](https://docs.textmagic.com/#tag/User) currency.
    /// </summary>
    float getPrice() const;
        void setPrice(float value);

protected:
    std::vector<utility::string_t> m_Numbers;
        float m_Price;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetAvailableDedicatedNumbersResponse_H_ */
