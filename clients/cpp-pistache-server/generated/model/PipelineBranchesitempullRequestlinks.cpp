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


#include "PipelineBranchesitempullRequestlinks.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PipelineBranchesitempullRequestlinks::PipelineBranchesitempullRequestlinks()
{
    m_Self = "";
    m_SelfIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

PipelineBranchesitempullRequestlinks::~PipelineBranchesitempullRequestlinks()
{
}

void PipelineBranchesitempullRequestlinks::validate()
{
    // TODO: implement validation
}

nlohmann::json PipelineBranchesitempullRequestlinks::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_SelfIsSet)
    {
        val["self"] = ModelBase::toJson(m_Self);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void PipelineBranchesitempullRequestlinks::fromJson(nlohmann::json& val)
{
    if(val.find("self") != val.end())
    {
        setSelf(val.at("self"));
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


std::string PipelineBranchesitempullRequestlinks::getSelf() const
{
    return m_Self;
}
void PipelineBranchesitempullRequestlinks::setSelf(std::string const& value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool PipelineBranchesitempullRequestlinks::selfIsSet() const
{
    return m_SelfIsSet;
}
void PipelineBranchesitempullRequestlinks::unsetSelf()
{
    m_SelfIsSet = false;
}
std::string PipelineBranchesitempullRequestlinks::getClass() const
{
    return m__class;
}
void PipelineBranchesitempullRequestlinks::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineBranchesitempullRequestlinks::classIsSet() const
{
    return m__classIsSet;
}
void PipelineBranchesitempullRequestlinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

