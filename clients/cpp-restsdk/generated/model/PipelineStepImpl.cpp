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



#include "PipelineStepImpl.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineStepImpl::PipelineStepImpl()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m__linksIsSet = false;
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_InputIsSet = false;
    m_Result = utility::conversions::to_string_t("");
    m_ResultIsSet = false;
    m_StartTime = utility::conversions::to_string_t("");
    m_StartTimeIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
}

PipelineStepImpl::~PipelineStepImpl()
{
}

void PipelineStepImpl::validate()
{
    // TODO: implement validation
}

web::json::value PipelineStepImpl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }
    if(m_DisplayNameIsSet)
    {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DurationInMillisIsSet)
    {
        val[utility::conversions::to_string_t("durationInMillis")] = ModelBase::toJson(m_DurationInMillis);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_InputIsSet)
    {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(m_Input);
    }
    if(m_ResultIsSet)
    {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(m_Result);
    }
    if(m_StartTimeIsSet)
    {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(m_StartTime);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }

    return val;
}

void PipelineStepImpl::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        if(!val[utility::conversions::to_string_t("_links")].is_null())
        {
            std::shared_ptr<PipelineStepImpllinks> newItem(new PipelineStepImpllinks());
            newItem->fromJson(val[utility::conversions::to_string_t("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("displayName")]));
    }
    if(val.has_field(utility::conversions::to_string_t("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("durationInMillis")]));
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
    }
    if(val.has_field(utility::conversions::to_string_t("input")))
    {
        if(!val[utility::conversions::to_string_t("input")].is_null())
        {
            std::shared_ptr<InputStepImpl> newItem(new InputStepImpl());
            newItem->fromJson(val[utility::conversions::to_string_t("input")]);
            setInput( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result")))
    {
        setResult(ModelBase::stringFromJson(val[utility::conversions::to_string_t("result")]));
    }
    if(val.has_field(utility::conversions::to_string_t("startTime")))
    {
        setStartTime(ModelBase::stringFromJson(val[utility::conversions::to_string_t("startTime")]));
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromJson(val[utility::conversions::to_string_t("state")]));
    }
}

void PipelineStepImpl::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
    }
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayName"), m_DisplayName));
    }
    if(m_DurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("durationInMillis"), m_DurationInMillis));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_InputIsSet)
    {
        if (m_Input.get())
        {
            m_Input->toMultipart(multipart, utility::conversions::to_string_t("input."));
        }
    }
    if(m_ResultIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("result"), m_Result));
    }
    if(m_StartTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startTime"), m_StartTime));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
}

void PipelineStepImpl::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<PipelineStepImpllinks> newItem(new PipelineStepImpllinks());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("durationInMillis"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("input")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("input")))
        {
            std::shared_ptr<InputStepImpl> newItem(new InputStepImpl());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("input."));
            setInput( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("result")))
    {
        setResult(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("result"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startTime")))
    {
        setStartTime(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("startTime"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        setState(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("state"))));
    }
}

utility::string_t PipelineStepImpl::getClass() const
{
    return m__class;
}


void PipelineStepImpl::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineStepImpl::_classIsSet() const
{
    return m__classIsSet;
}

void PipelineStepImpl::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<PipelineStepImpllinks> PipelineStepImpl::getLinks() const
{
    return m__links;
}


void PipelineStepImpl::setLinks(std::shared_ptr<PipelineStepImpllinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool PipelineStepImpl::linksIsSet() const
{
    return m__linksIsSet;
}

void PipelineStepImpl::unset_links()
{
    m__linksIsSet = false;
}

utility::string_t PipelineStepImpl::getDisplayName() const
{
    return m_DisplayName;
}


void PipelineStepImpl::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool PipelineStepImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void PipelineStepImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

int32_t PipelineStepImpl::getDurationInMillis() const
{
    return m_DurationInMillis;
}


void PipelineStepImpl::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool PipelineStepImpl::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}

void PipelineStepImpl::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}

utility::string_t PipelineStepImpl::getId() const
{
    return m_Id;
}


void PipelineStepImpl::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelineStepImpl::idIsSet() const
{
    return m_IdIsSet;
}

void PipelineStepImpl::unsetId()
{
    m_IdIsSet = false;
}

std::shared_ptr<InputStepImpl> PipelineStepImpl::getInput() const
{
    return m_Input;
}


void PipelineStepImpl::setInput(std::shared_ptr<InputStepImpl> value)
{
    m_Input = value;
    m_InputIsSet = true;
}
bool PipelineStepImpl::inputIsSet() const
{
    return m_InputIsSet;
}

void PipelineStepImpl::unsetInput()
{
    m_InputIsSet = false;
}

utility::string_t PipelineStepImpl::getResult() const
{
    return m_Result;
}


void PipelineStepImpl::setResult(utility::string_t value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool PipelineStepImpl::resultIsSet() const
{
    return m_ResultIsSet;
}

void PipelineStepImpl::unsetResult()
{
    m_ResultIsSet = false;
}

utility::string_t PipelineStepImpl::getStartTime() const
{
    return m_StartTime;
}


void PipelineStepImpl::setStartTime(utility::string_t value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool PipelineStepImpl::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}

void PipelineStepImpl::unsetStartTime()
{
    m_StartTimeIsSet = false;
}

utility::string_t PipelineStepImpl::getState() const
{
    return m_State;
}


void PipelineStepImpl::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool PipelineStepImpl::stateIsSet() const
{
    return m_StateIsSet;
}

void PipelineStepImpl::unsetState()
{
    m_StateIsSet = false;
}

}
}
}
}

