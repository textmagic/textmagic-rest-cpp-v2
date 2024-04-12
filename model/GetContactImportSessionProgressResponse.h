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
 * GetContactImportSessionProgressResponse.h
 *
 * 
 */

#ifndef COM_TEXTMAGIC_CLIENT_MODEL_GetContactImportSessionProgressResponse_H_
#define COM_TEXTMAGIC_CLIENT_MODEL_GetContactImportSessionProgressResponse_H_


#include "../ModelBase.h"


namespace com {
namespace textmagic {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GetContactImportSessionProgressResponse
    : public ModelBase
{
public:
    GetContactImportSessionProgressResponse();
    virtual ~GetContactImportSessionProgressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GetContactImportSessionProgressResponse members

    /// <summary>
    /// Session status: * **1** - if session has been initialized but not yet started; * **3** - if session is being processed; * **4** - if session has errors; * **5** - if session completed successfully. 
    /// </summary>
    int32_t getStatus() const;
        void setStatus(int32_t value);
    /// <summary>
    /// How many contacts have been imported?
    /// </summary>
    int32_t getProcessed() const;
        void setProcessed(int32_t value);

protected:
    int32_t m_Status;
        int32_t m_Processed;
    };

}
}
}
}

#endif /* COM_TEXTMAGIC_CLIENT_MODEL_GetContactImportSessionProgressResponse_H_ */
