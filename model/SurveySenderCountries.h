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
 * SurveySenderCountries.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_SurveySenderCountries_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_SurveySenderCountries_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SurveySenderCountries
    : public ModelBase
{
public:
    SurveySenderCountries();
    virtual ~SurveySenderCountries();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SurveySenderCountries members

    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCountryName() const;
        void setCountryName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFromNumber() const;
        void setFromNumber(utility::string_t value);
    /// <summary>
    /// Is allowed to use a dedicated number?
    /// </summary>
    bool isAllowDedicated() const;
        void setAllowDedicated(bool value);

protected:
    int32_t m_Id;
        utility::string_t m_CountryName;
        utility::string_t m_FromNumber;
        bool m_AllowDedicated;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_SurveySenderCountries_H_ */
