/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "PipelineActivity.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PipelineActivity::PipelineActivity()
{
    m__class = "";
    m__classIsSet = false;
    m_ArtifactsIsSet = false;
    m_DurationInMillis = 0;
    m_DurationInMillisIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_EnQueueTime = "";
    m_EnQueueTimeIsSet = false;
    m_EndTime = "";
    m_EndTimeIsSet = false;
    m_Id = "";
    m_IdIsSet = false;
    m_Organization = "";
    m_OrganizationIsSet = false;
    m_Pipeline = "";
    m_PipelineIsSet = false;
    m_Result = "";
    m_ResultIsSet = false;
    m_RunSummary = "";
    m_RunSummaryIsSet = false;
    m_StartTime = "";
    m_StartTimeIsSet = false;
    m_State = "";
    m_StateIsSet = false;
    m_Type = "";
    m_TypeIsSet = false;
    m_CommitId = "";
    m_CommitIdIsSet = false;
    
}

PipelineActivity::~PipelineActivity()
{
}

void PipelineActivity::validate()
{
    // TODO: implement validation
}

nlohmann::json PipelineActivity::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Artifacts )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["artifacts"] = jsonArray;
        }
    }
    if(m_DurationInMillisIsSet)
    {
        val["durationInMillis"] = m_DurationInMillis;
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val["estimatedDurationInMillis"] = m_EstimatedDurationInMillis;
    }
    if(m_EnQueueTimeIsSet)
    {
        val["enQueueTime"] = ModelBase::toJson(m_EnQueueTime);
    }
    if(m_EndTimeIsSet)
    {
        val["endTime"] = ModelBase::toJson(m_EndTime);
    }
    if(m_IdIsSet)
    {
        val["id"] = ModelBase::toJson(m_Id);
    }
    if(m_OrganizationIsSet)
    {
        val["organization"] = ModelBase::toJson(m_Organization);
    }
    if(m_PipelineIsSet)
    {
        val["pipeline"] = ModelBase::toJson(m_Pipeline);
    }
    if(m_ResultIsSet)
    {
        val["result"] = ModelBase::toJson(m_Result);
    }
    if(m_RunSummaryIsSet)
    {
        val["runSummary"] = ModelBase::toJson(m_RunSummary);
    }
    if(m_StartTimeIsSet)
    {
        val["startTime"] = ModelBase::toJson(m_StartTime);
    }
    if(m_StateIsSet)
    {
        val["state"] = ModelBase::toJson(m_State);
    }
    if(m_TypeIsSet)
    {
        val["type"] = ModelBase::toJson(m_Type);
    }
    if(m_CommitIdIsSet)
    {
        val["commitId"] = ModelBase::toJson(m_CommitId);
    }
    

    return val;
}

void PipelineActivity::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    {
        m_Artifacts.clear();
        nlohmann::json jsonArray;
        if(val.find("artifacts") != val.end())
        {
        for( auto& item : val["artifacts"] )
        {
            
            if(item.is_null())
            {
                m_Artifacts.push_back( PipelineActivityartifacts() );
            }
            else
            {
                PipelineActivityartifacts newItem;
                newItem.fromJson(item);
                m_Artifacts.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("durationInMillis") != val.end())
    {
        setDurationInMillis(val.at("durationInMillis"));
    }
    if(val.find("estimatedDurationInMillis") != val.end())
    {
        setEstimatedDurationInMillis(val.at("estimatedDurationInMillis"));
    }
    if(val.find("enQueueTime") != val.end())
    {
        setEnQueueTime(val.at("enQueueTime"));
    }
    if(val.find("endTime") != val.end())
    {
        setEndTime(val.at("endTime"));
    }
    if(val.find("id") != val.end())
    {
        setId(val.at("id"));
    }
    if(val.find("organization") != val.end())
    {
        setOrganization(val.at("organization"));
    }
    if(val.find("pipeline") != val.end())
    {
        setPipeline(val.at("pipeline"));
    }
    if(val.find("result") != val.end())
    {
        setResult(val.at("result"));
    }
    if(val.find("runSummary") != val.end())
    {
        setRunSummary(val.at("runSummary"));
    }
    if(val.find("startTime") != val.end())
    {
        setStartTime(val.at("startTime"));
    }
    if(val.find("state") != val.end())
    {
        setState(val.at("state"));
    }
    if(val.find("type") != val.end())
    {
        setType(val.at("type"));
    }
    if(val.find("commitId") != val.end())
    {
        setCommitId(val.at("commitId"));
    }
    
}


std::string PipelineActivity::getClass() const
{
    return m__class;
}
void PipelineActivity::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineActivity::classIsSet() const
{
    return m__classIsSet;
}
void PipelineActivity::unset_class()
{
    m__classIsSet = false;
}
std::vector<PipelineActivityartifacts>& PipelineActivity::getArtifacts()
{
    return m_Artifacts;
}
bool PipelineActivity::artifactsIsSet() const
{
    return m_ArtifactsIsSet;
}
void PipelineActivity::unsetArtifacts()
{
    m_ArtifactsIsSet = false;
}
int32_t PipelineActivity::getDurationInMillis() const
{
    return m_DurationInMillis;
}
void PipelineActivity::setDurationInMillis(int32_t const value)
{
    m_DurationInMillis = value;
    m_DurationInMillisIsSet = true;
}
bool PipelineActivity::durationInMillisIsSet() const
{
    return m_DurationInMillisIsSet;
}
void PipelineActivity::unsetDurationInMillis()
{
    m_DurationInMillisIsSet = false;
}
int32_t PipelineActivity::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void PipelineActivity::setEstimatedDurationInMillis(int32_t const value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool PipelineActivity::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}
void PipelineActivity::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}
std::string PipelineActivity::getEnQueueTime() const
{
    return m_EnQueueTime;
}
void PipelineActivity::setEnQueueTime(std::string const& value)
{
    m_EnQueueTime = value;
    m_EnQueueTimeIsSet = true;
}
bool PipelineActivity::enQueueTimeIsSet() const
{
    return m_EnQueueTimeIsSet;
}
void PipelineActivity::unsetEnQueueTime()
{
    m_EnQueueTimeIsSet = false;
}
std::string PipelineActivity::getEndTime() const
{
    return m_EndTime;
}
void PipelineActivity::setEndTime(std::string const& value)
{
    m_EndTime = value;
    m_EndTimeIsSet = true;
}
bool PipelineActivity::endTimeIsSet() const
{
    return m_EndTimeIsSet;
}
void PipelineActivity::unsetEndTime()
{
    m_EndTimeIsSet = false;
}
std::string PipelineActivity::getId() const
{
    return m_Id;
}
void PipelineActivity::setId(std::string const& value)
{
    m_Id = value;
    m_IdIsSet = true;
}
bool PipelineActivity::idIsSet() const
{
    return m_IdIsSet;
}
void PipelineActivity::unsetId()
{
    m_IdIsSet = false;
}
std::string PipelineActivity::getOrganization() const
{
    return m_Organization;
}
void PipelineActivity::setOrganization(std::string const& value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool PipelineActivity::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void PipelineActivity::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
std::string PipelineActivity::getPipeline() const
{
    return m_Pipeline;
}
void PipelineActivity::setPipeline(std::string const& value)
{
    m_Pipeline = value;
    m_PipelineIsSet = true;
}
bool PipelineActivity::pipelineIsSet() const
{
    return m_PipelineIsSet;
}
void PipelineActivity::unsetPipeline()
{
    m_PipelineIsSet = false;
}
std::string PipelineActivity::getResult() const
{
    return m_Result;
}
void PipelineActivity::setResult(std::string const& value)
{
    m_Result = value;
    m_ResultIsSet = true;
}
bool PipelineActivity::resultIsSet() const
{
    return m_ResultIsSet;
}
void PipelineActivity::unsetResult()
{
    m_ResultIsSet = false;
}
std::string PipelineActivity::getRunSummary() const
{
    return m_RunSummary;
}
void PipelineActivity::setRunSummary(std::string const& value)
{
    m_RunSummary = value;
    m_RunSummaryIsSet = true;
}
bool PipelineActivity::runSummaryIsSet() const
{
    return m_RunSummaryIsSet;
}
void PipelineActivity::unsetRunSummary()
{
    m_RunSummaryIsSet = false;
}
std::string PipelineActivity::getStartTime() const
{
    return m_StartTime;
}
void PipelineActivity::setStartTime(std::string const& value)
{
    m_StartTime = value;
    m_StartTimeIsSet = true;
}
bool PipelineActivity::startTimeIsSet() const
{
    return m_StartTimeIsSet;
}
void PipelineActivity::unsetStartTime()
{
    m_StartTimeIsSet = false;
}
std::string PipelineActivity::getState() const
{
    return m_State;
}
void PipelineActivity::setState(std::string const& value)
{
    m_State = value;
    m_StateIsSet = true;
}
bool PipelineActivity::stateIsSet() const
{
    return m_StateIsSet;
}
void PipelineActivity::unsetState()
{
    m_StateIsSet = false;
}
std::string PipelineActivity::getType() const
{
    return m_Type;
}
void PipelineActivity::setType(std::string const& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}
bool PipelineActivity::typeIsSet() const
{
    return m_TypeIsSet;
}
void PipelineActivity::unsetType()
{
    m_TypeIsSet = false;
}
std::string PipelineActivity::getCommitId() const
{
    return m_CommitId;
}
void PipelineActivity::setCommitId(std::string const& value)
{
    m_CommitId = value;
    m_CommitIdIsSet = true;
}
bool PipelineActivity::commitIdIsSet() const
{
    return m_CommitIdIsSet;
}
void PipelineActivity::unsetCommitId()
{
    m_CommitIdIsSet = false;
}

}
}
}
}

