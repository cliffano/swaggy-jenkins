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



#include "PipelineRunNode.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

PipelineRunNode::PipelineRunNode()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_EdgesIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Result = utility::conversions::to_string_t("");
    m_ResultIsSet = false;
    m_StartTime = utility::conversions::to_string_t("");
    m_StartTimeIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
}

PipelineRunNode::~PipelineRunNode()
{
}

void PipelineRunNode::validate()
{
    // TODO: implement validation
}

web::json::value PipelineRunNode::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_DurationInMillisIsSet)
    {
        val[utility::conversions::to_string_t("durationInMillis")] = ModelBase::toJson(m_DurationInMillis);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Edges )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("edges")] = web::json::value::array(jsonArray);
        }
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
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

void PipelineRunNode::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("displayName")]));
    }
    if(val.has_field(utility::conversions::to_string_t("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("durationInMillis")]));
    }
    {
        m_Edges.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("edges")))
        {
        for( auto& item : val[utility::conversions::to_string_t("edges")].as_array() )
        {
            if(item.is_null())
            {
                m_Edges.push_back( std::shared_ptr<PipelineRunNodeedges>(nullptr) );
            }
            else
            {
                std::shared_ptr<PipelineRunNodeedges> newItem(new PipelineRunNodeedges());
                newItem->fromJson(item);
                m_Edges.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("id")]));
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

void PipelineRunNode::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayName"), m_DisplayName));
    }
    if(m_DurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("durationInMillis"), m_DurationInMillis));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Edges )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("edges"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
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

void PipelineRunNode::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("durationInMillis")))
    {
        setDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("durationInMillis"))));
    }
    {
        m_Edges.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("edges")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("edges"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Edges.push_back( std::shared_ptr<PipelineRunNodeedges>(nullptr) );
            }
            else
            {
                std::shared_ptr<PipelineRunNodeedges> newItem(new PipelineRunNodeedges());
                newItem->fromJson(item);
                m_Edges.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
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

utility::string_t PipelineRunNode::getClass() const
{
    return m__class;
}


void PipelineRunNode::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineRunNode::_classIsSet() const
{
    return m__classIsSet;
}

void PipelineRunNode::unset_class()
{
    m__classIsSet = false;
}

utility::string_t PipelineRunNode::getDisplayName() const
{
    return m_DisplayName;
}


void PipelineRunNode::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool PipelineRunNode::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void PipelineRunNode::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

int32_t PipelineRunNode::getDurationInMillis() const
{
    return m_DurationInMillis;
}


void PipelineRunNode::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool PipelineRunNode::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}

void PipelineRunNode::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}

std::vector<std::shared_ptr<PipelineRunNodeedges>>& PipelineRunNode::getEdges()
{
    return m_Edges;
}

void PipelineRunNode::setEdges(std::vector<std::shared_ptr<PipelineRunNodeedges>> value)
{
    m_Edges = value;
    m_EdgesIsSet = true;
}
bool PipelineRunNode::edgesIsSet() const
{
    return m_EdgesIsSet;
}

void PipelineRunNode::unsetEdges()
{
    m_EdgesIsSet = false;
}

utility::string_t PipelineRunNode::getId() const
{
    return m_Id;
}


void PipelineRunNode::setId(utility::string_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelineRunNode::idIsSet() const
{
    return m_IdIsSet;
}

void PipelineRunNode::unsetId()
{
    m_IdIsSet = false;
}

utility::string_t PipelineRunNode::getResult() const
{
    return m_Result;
}


void PipelineRunNode::setResult(utility::string_t value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool PipelineRunNode::resultIsSet() const
{
    return m_ResultIsSet;
}

void PipelineRunNode::unsetResult()
{
    m_ResultIsSet = false;
}

utility::string_t PipelineRunNode::getStartTime() const
{
    return m_StartTime;
}


void PipelineRunNode::setStartTime(utility::string_t value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool PipelineRunNode::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}

void PipelineRunNode::unsetStartTime()
{
    m_StartTimeIsSet = false;
}

utility::string_t PipelineRunNode::getState() const
{
    return m_State;
}


void PipelineRunNode::setState(utility::string_t value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool PipelineRunNode::stateIsSet() const
{
    return m_StateIsSet;
}

void PipelineRunNode::unsetState()
{
    m_StateIsSet = false;
}

}
}
}
}

