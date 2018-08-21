/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "StringParameterValue.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

StringParameterValue::StringParameterValue()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Value = utility::conversions::to_string_t("");
    m_ValueIsSet = false;
}

StringParameterValue::~StringParameterValue()
{
}

void StringParameterValue::validate()
{
    // TODO: implement validation
}

web::json::value StringParameterValue::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }

    return val;
}

void StringParameterValue::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromJson(val[utility::conversions::to_string_t("value")]));
    }
}

void StringParameterValue::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
}

void StringParameterValue::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        setValue(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("value"))));
    }
}

utility::string_t StringParameterValue::getClass() const
{
    return m__class;
}


void StringParameterValue::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool StringParameterValue::_classIsSet() const
{
    return m__classIsSet;
}

void StringParameterValue::unset_class()
{
    m__classIsSet = false;
}

utility::string_t StringParameterValue::getName() const
{
    return m_Name;
}


void StringParameterValue::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool StringParameterValue::nameIsSet() const
{
    return m_NameIsSet;
}

void StringParameterValue::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t StringParameterValue::getValue() const
{
    return m_Value;
}


void StringParameterValue::setValue(utility::string_t value)
{
    m_Value = value;
    m_ValueIsSet = true;
}
bool StringParameterValue::valueIsSet() const
{
    return m_ValueIsSet;
}

void StringParameterValue::unsetValue()
{
    m_ValueIsSet = false;
}

}
}
}
}

