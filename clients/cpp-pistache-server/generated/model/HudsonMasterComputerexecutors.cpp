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


#include "HudsonMasterComputerexecutors.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

HudsonMasterComputerexecutors::HudsonMasterComputerexecutors()
{
    m_CurrentExecutableIsSet = false;
    m_Idle = false;
    m_IdleIsSet = false;
    m_LikelyStuck = false;
    m_LikelyStuckIsSet = false;
    m_number = 0;
    m_numberIsSet = false;
    m_Progress = 0;
    m_ProgressIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

HudsonMasterComputerexecutors::~HudsonMasterComputerexecutors()
{
}

void HudsonMasterComputerexecutors::validate()
{
    // TODO: implement validation
}

nlohmann::json HudsonMasterComputerexecutors::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_CurrentExecutableIsSet)
    {
        val["currentExecutable"] = ModelBase::toJson(m_CurrentExecutable);
    }
    if(m_IdleIsSet)
    {
        val["idle"] = m_Idle;
    }
    if(m_LikelyStuckIsSet)
    {
        val["likelyStuck"] = m_LikelyStuck;
    }
    if(m_numberIsSet)
    {
        val["number"] = m_number;
    }
    if(m_ProgressIsSet)
    {
        val["progress"] = m_Progress;
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    

    return val;
}

void HudsonMasterComputerexecutors::fromJson(nlohmann::json& val)
{
    if(val.find("currentExecutable") != val.end())
    {
        if(!val["currentExecutable"].is_null())
        {
            FreeStyleBuild newItem;
            newItem.fromJson(val["currentExecutable"]);
            setCurrentExecutable( newItem );
        }
        
    }
    if(val.find("idle") != val.end())
    {
        setIdle(val.at("idle"));
    }
    if(val.find("likelyStuck") != val.end())
    {
        setLikelyStuck(val.at("likelyStuck"));
    }
    if(val.find("number") != val.end())
    {
        setNumber(val.at("number"));
    }
    if(val.find("progress") != val.end())
    {
        setProgress(val.at("progress"));
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


FreeStyleBuild HudsonMasterComputerexecutors::getCurrentExecutable() const
{
    return m_CurrentExecutable;
}
void HudsonMasterComputerexecutors::setCurrentExecutable(FreeStyleBuild const& value)
{
    m_CurrentExecutable = value;
    m_CurrentExecutableIsSet = true;
}
bool HudsonMasterComputerexecutors::currentExecutableIsSet() const
{
    return m_CurrentExecutableIsSet;
}
void HudsonMasterComputerexecutors::unsetCurrentExecutable()
{
    m_CurrentExecutableIsSet = false;
}
bool HudsonMasterComputerexecutors::isIdle() const
{
    return m_Idle;
}
void HudsonMasterComputerexecutors::setIdle(bool const value)
{
    m_Idle = value;
    m_IdleIsSet = true;
}
bool HudsonMasterComputerexecutors::idleIsSet() const
{
    return m_IdleIsSet;
}
void HudsonMasterComputerexecutors::unsetIdle()
{
    m_IdleIsSet = false;
}
bool HudsonMasterComputerexecutors::isLikelyStuck() const
{
    return m_LikelyStuck;
}
void HudsonMasterComputerexecutors::setLikelyStuck(bool const value)
{
    m_LikelyStuck = value;
    m_LikelyStuckIsSet = true;
}
bool HudsonMasterComputerexecutors::likelyStuckIsSet() const
{
    return m_LikelyStuckIsSet;
}
void HudsonMasterComputerexecutors::unsetLikelyStuck()
{
    m_LikelyStuckIsSet = false;
}
int32_t HudsonMasterComputerexecutors::getNumber() const
{
    return m_number;
}
void HudsonMasterComputerexecutors::setNumber(int32_t const value)
{
    m_number = value;
    m_numberIsSet = true;
}
bool HudsonMasterComputerexecutors::numberIsSet() const
{
    return m_numberIsSet;
}
void HudsonMasterComputerexecutors::unsetnumber()
{
    m_numberIsSet = false;
}
int32_t HudsonMasterComputerexecutors::getProgress() const
{
    return m_Progress;
}
void HudsonMasterComputerexecutors::setProgress(int32_t const value)
{
    m_Progress = value;
    m_ProgressIsSet = true;
}
bool HudsonMasterComputerexecutors::progressIsSet() const
{
    return m_ProgressIsSet;
}
void HudsonMasterComputerexecutors::unsetProgress()
{
    m_ProgressIsSet = false;
}
std::string HudsonMasterComputerexecutors::getClass() const
{
    return m__class;
}
void HudsonMasterComputerexecutors::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool HudsonMasterComputerexecutors::classIsSet() const
{
    return m__classIsSet;
}
void HudsonMasterComputerexecutors::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

