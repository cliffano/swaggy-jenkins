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



#include "PipelinelatestRun.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

PipelinelatestRun::PipelinelatestRun()
{
    m_DurationInMillis = 0;
    m_EstimatedDurationInMillis = 0;
    m_EnQueueTime = "";
    m_EndTime = "";
    m_Id = "";
    m_Organization = "";
    m_Pipeline = "";
    m_Result = "";
    m_RunSummary = "";
    m_StartTime = "";
    m_State = "";
    m_Type = "";
    m_CommitId = "";
    m__class = "";
    
}

PipelinelatestRun::~PipelinelatestRun()
{
}

std::string PipelinelatestRun::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("DurationInMillis", m_DurationInMillis);
	pt.put("EstimatedDurationInMillis", m_EstimatedDurationInMillis);
	pt.put("EnQueueTime", m_EnQueueTime);
	pt.put("EndTime", m_EndTime);
	pt.put("Id", m_Id);
	pt.put("Organization", m_Organization);
	pt.put("Pipeline", m_Pipeline);
	pt.put("Result", m_Result);
	pt.put("RunSummary", m_RunSummary);
	pt.put("StartTime", m_StartTime);
	pt.put("State", m_State);
	pt.put("Type", m_Type);
	pt.put("CommitId", m_CommitId);
	pt.put("_class", m__class);
	write_json(ss, pt, false);
	return ss.str();
}

void PipelinelatestRun::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_DurationInMillis = pt.get("DurationInMillis", 0);
	m_EstimatedDurationInMillis = pt.get("EstimatedDurationInMillis", 0);
	m_EnQueueTime = pt.get("EnQueueTime", "");
	m_EndTime = pt.get("EndTime", "");
	m_Id = pt.get("Id", "");
	m_Organization = pt.get("Organization", "");
	m_Pipeline = pt.get("Pipeline", "");
	m_Result = pt.get("Result", "");
	m_RunSummary = pt.get("RunSummary", "");
	m_StartTime = pt.get("StartTime", "");
	m_State = pt.get("State", "");
	m_Type = pt.get("Type", "");
	m_CommitId = pt.get("CommitId", "");
	m__class = pt.get("_class", "");
}

std::vector<std::shared_ptr<PipelinelatestRunartifacts>> PipelinelatestRun::getArtifacts() const
{
    return m_Artifacts;
}
void PipelinelatestRun::setArtifacts(std::vector<std::shared_ptr<PipelinelatestRunartifacts>> value)
{
    m_Artifacts = value;
}
int32_t PipelinelatestRun::getDurationInMillis() const
{
    return m_DurationInMillis;
}
void PipelinelatestRun::setDurationInMillis(int32_t value)
{
    m_DurationInMillis = value;
}
int32_t PipelinelatestRun::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}
void PipelinelatestRun::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
}
std::string PipelinelatestRun::getEnQueueTime() const
{
    return m_EnQueueTime;
}
void PipelinelatestRun::setEnQueueTime(std::string value)
{
    m_EnQueueTime = value;
}
std::string PipelinelatestRun::getEndTime() const
{
    return m_EndTime;
}
void PipelinelatestRun::setEndTime(std::string value)
{
    m_EndTime = value;
}
std::string PipelinelatestRun::getId() const
{
    return m_Id;
}
void PipelinelatestRun::setId(std::string value)
{
    m_Id = value;
}
std::string PipelinelatestRun::getOrganization() const
{
    return m_Organization;
}
void PipelinelatestRun::setOrganization(std::string value)
{
    m_Organization = value;
}
std::string PipelinelatestRun::getPipeline() const
{
    return m_Pipeline;
}
void PipelinelatestRun::setPipeline(std::string value)
{
    m_Pipeline = value;
}
std::string PipelinelatestRun::getResult() const
{
    return m_Result;
}
void PipelinelatestRun::setResult(std::string value)
{
    m_Result = value;
}
std::string PipelinelatestRun::getRunSummary() const
{
    return m_RunSummary;
}
void PipelinelatestRun::setRunSummary(std::string value)
{
    m_RunSummary = value;
}
std::string PipelinelatestRun::getStartTime() const
{
    return m_StartTime;
}
void PipelinelatestRun::setStartTime(std::string value)
{
    m_StartTime = value;
}
std::string PipelinelatestRun::getState() const
{
    return m_State;
}
void PipelinelatestRun::setState(std::string value)
{
    m_State = value;
}
std::string PipelinelatestRun::getType() const
{
    return m_Type;
}
void PipelinelatestRun::setType(std::string value)
{
    m_Type = value;
}
std::string PipelinelatestRun::getCommitId() const
{
    return m_CommitId;
}
void PipelinelatestRun::setCommitId(std::string value)
{
    m_CommitId = value;
}
std::string PipelinelatestRun::getClass() const
{
    return m__class;
}
void PipelinelatestRun::setClass(std::string value)
{
    m__class = value;
}

}
}
}
}

