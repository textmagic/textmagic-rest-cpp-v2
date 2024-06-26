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



#include "DoCarrierLookupResponse.h"

namespace com {
namespace textmagic {
namespace client {
namespace model {

DoCarrierLookupResponse::DoCarrierLookupResponse()
{
    m_Cost = 0.0;
    m_CountryIsSet = false;
    m_Local = utility::conversions::to_string_t("");
    m_Type = utility::conversions::to_string_t("");
    m_Carrier = utility::conversions::to_string_t("");
    m_Number164 = utility::conversions::to_string_t("");
    m_Valid = false;
}

DoCarrierLookupResponse::~DoCarrierLookupResponse()
{
}

void DoCarrierLookupResponse::validate()
{
    // TODO: implement validation
}

web::json::value DoCarrierLookupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("cost")] = ModelBase::toJson(m_Cost);
    if(m_CountryIsSet)
    {
        val[utility::conversions::to_string_t("country")] = ModelBase::toJson(m_Country);
    }
    val[utility::conversions::to_string_t("local")] = ModelBase::toJson(m_Local);
    val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    val[utility::conversions::to_string_t("carrier")] = ModelBase::toJson(m_Carrier);
    val[utility::conversions::to_string_t("number164")] = ModelBase::toJson(m_Number164);
    val[utility::conversions::to_string_t("valid")] = ModelBase::toJson(m_Valid);

    return val;
}

void DoCarrierLookupResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("cost")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("cost")];
        if(!fieldValue.is_null())
        {
            setCost(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("country")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Country> newItem(new Country());
            newItem->fromJson(fieldValue);
            setCountry( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("local")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("local")];
        if(!fieldValue.is_null())
        {
            setLocal(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("type")];
        if(!fieldValue.is_null())
        {
            setType(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("carrier")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("carrier")];
        if(!fieldValue.is_null())
        {
            setCarrier(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number164")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("number164")];
        if(!fieldValue.is_null())
        {
            setNumber164(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("valid")];
        if(!fieldValue.is_null())
        {
            setValid(ModelBase::boolFromJson(fieldValue));
        }
    }
}

void DoCarrierLookupResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cost"), m_Cost));
    if(m_CountryIsSet)
    {
        if (m_Country.get())
        {
            m_Country->toMultipart(multipart, utility::conversions::to_string_t("country."));
        }
        
    }
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("local"), m_Local));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("carrier"), m_Carrier));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("number164"), m_Number164));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valid"), m_Valid));
}

void DoCarrierLookupResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setCost(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("cost"))));
    if(multipart->hasContent(utility::conversions::to_string_t("country")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("country")))
        {
            std::shared_ptr<Country> newItem(new Country());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("country."));
            setCountry( newItem );
        }
    }
    setLocal(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("local"))));
    setType(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("type"))));
    setCarrier(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("carrier"))));
    setNumber164(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("number164"))));
    setValid(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("valid"))));
}

double DoCarrierLookupResponse::getCost() const
{
    return m_Cost;
}


void DoCarrierLookupResponse::setCost(double value)
{
    m_Cost = value;
    
}
std::shared_ptr<Country> DoCarrierLookupResponse::getCountry() const
{
    return m_Country;
}


void DoCarrierLookupResponse::setCountry(std::shared_ptr<Country> value)
{
    m_Country = value;
    m_CountryIsSet = true;
}
bool DoCarrierLookupResponse::countryIsSet() const
{
    return m_CountryIsSet;
}

void DoCarrierLookupResponse::unsetCountry()
{
    m_CountryIsSet = false;
}

utility::string_t DoCarrierLookupResponse::getLocal() const
{
    return m_Local;
}


void DoCarrierLookupResponse::setLocal(utility::string_t value)
{
    m_Local = value;
    
}
utility::string_t DoCarrierLookupResponse::getType() const
{
    return m_Type;
}


void DoCarrierLookupResponse::setType(utility::string_t value)
{
    m_Type = value;
    
}
utility::string_t DoCarrierLookupResponse::getCarrier() const
{
    return m_Carrier;
}


void DoCarrierLookupResponse::setCarrier(utility::string_t value)
{
    m_Carrier = value;
    
}
utility::string_t DoCarrierLookupResponse::getNumber164() const
{
    return m_Number164;
}


void DoCarrierLookupResponse::setNumber164(utility::string_t value)
{
    m_Number164 = value;
    
}
bool DoCarrierLookupResponse::isValid() const
{
    return m_Valid;
}


void DoCarrierLookupResponse::setValid(bool value)
{
    m_Valid = value;
    
}
}
}
}
}

