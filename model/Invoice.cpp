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



#include "Invoice.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

Invoice::Invoice()
{
    m_Id = 0;
    m_Bundle = 0;
    m_Currency = utility::conversions::to_string_t("");
    m_Vat = 0.0f;
    m_PaymentMethod = utility::conversions::to_string_t("");
}

Invoice::~Invoice()
{
}

void Invoice::validate()
{
    // TODO: implement validation
}

web::json::value Invoice::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("bundle")] = ModelBase::toJson(m_Bundle);
    val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    val[utility::conversions::to_string_t("vat")] = ModelBase::toJson(m_Vat);
    val[utility::conversions::to_string_t("paymentMethod")] = ModelBase::toJson(m_PaymentMethod);

    return val;
}

void Invoice::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("id")];
        if(!fieldValue.is_null())
        {
            setId(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bundle")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bundle")];
        if(!fieldValue.is_null())
        {
            setBundle(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            setCurrency(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vat")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("vat")];
        if(!fieldValue.is_null())
        {
            setVat(ModelBase::floatFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("paymentMethod")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("paymentMethod")];
        if(!fieldValue.is_null())
        {
            setPaymentMethod(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void Invoice::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bundle"), m_Bundle));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currency"), m_Currency));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("vat"), m_Vat));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("paymentMethod"), m_PaymentMethod));
}

void Invoice::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setBundle(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bundle"))));
    setCurrency(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("currency"))));
    setVat(ModelBase::floatFromHttpContent(multipart->getContent(utility::conversions::to_string_t("vat"))));
    setPaymentMethod(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("paymentMethod"))));
}

int32_t Invoice::getId() const
{
    return m_Id;
}


void Invoice::setId(int32_t value)
{
    m_Id = value;
    
}
int32_t Invoice::getBundle() const
{
    return m_Bundle;
}


void Invoice::setBundle(int32_t value)
{
    m_Bundle = value;
    
}
utility::string_t Invoice::getCurrency() const
{
    return m_Currency;
}


void Invoice::setCurrency(utility::string_t value)
{
    m_Currency = value;
    
}
float Invoice::getVat() const
{
    return m_Vat;
}


void Invoice::setVat(float value)
{
    m_Vat = value;
    
}
utility::string_t Invoice::getPaymentMethod() const
{
    return m_PaymentMethod;
}


void Invoice::setPaymentMethod(utility::string_t value)
{
    m_PaymentMethod = value;
    
}
}
}
}
}

