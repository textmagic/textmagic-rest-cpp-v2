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
 * Survey.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_Survey_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_Survey_H_


#include "../ModelBase.h"

#include "SurveyRecipient.h"
#include <cpprest/details/basic_types.h>
#include "SurveySenderCountries.h"
#include <vector>

namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Survey
    : public ModelBase
{
public:
    Survey();
    virtual ~Survey();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Survey members

    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
        void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
        void setStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getCreatedAt() const;
        void setCreatedAt(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getUpdatedAt() const;
        void setUpdatedAt(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SurveyRecipient>>& getReceipents();
    bool receipentsIsSet() const;
    void unsetReceipents();
    void setReceipents(std::vector<std::shared_ptr<SurveyRecipient>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<SurveySenderCountries>>& getCountries();
    bool countriesIsSet() const;
    void unsetCountries();
    void setCountries(std::vector<std::shared_ptr<SurveySenderCountries>> value);

protected:
    int32_t m_Id;
        utility::string_t m_Name;
        utility::string_t m_Status;
        utility::datetime m_CreatedAt;
        utility::datetime m_UpdatedAt;
        std::vector<std::shared_ptr<SurveyRecipient>> m_Receipents;
    bool m_ReceipentsIsSet;
    std::vector<std::shared_ptr<SurveySenderCountries>> m_Countries;
    bool m_CountriesIsSet;
};

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_Survey_H_ */
