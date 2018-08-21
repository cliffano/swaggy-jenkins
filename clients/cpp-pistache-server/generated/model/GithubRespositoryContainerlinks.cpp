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


#include "GithubRespositoryContainerlinks.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

GithubRespositoryContainerlinks::GithubRespositoryContainerlinks()
{
    m_SelfIsSet = false;
    m__class = "";
    m__classIsSet = false;
    
}

GithubRespositoryContainerlinks::~GithubRespositoryContainerlinks()
{
}

void GithubRespositoryContainerlinks::validate()
{
    // TODO: implement validation
}

nlohmann::json GithubRespositoryContainerlinks::toJson() const
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

void GithubRespositoryContainerlinks::fromJson(nlohmann::json& val)
{
    if(val.find("self") != val.end())
    {
        if(!val["self"].is_null())
        {
            Link newItem;
            newItem.fromJson(val["self"]);
            setSelf( newItem );
        }
        
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    
}


Link GithubRespositoryContainerlinks::getSelf() const
{
    return m_Self;
}
void GithubRespositoryContainerlinks::setSelf(Link const& value)
{
    m_Self = value;
    m_SelfIsSet = true;
}
bool GithubRespositoryContainerlinks::selfIsSet() const
{
    return m_SelfIsSet;
}
void GithubRespositoryContainerlinks::unsetSelf()
{
    m_SelfIsSet = false;
}
std::string GithubRespositoryContainerlinks::getClass() const
{
    return m__class;
}
void GithubRespositoryContainerlinks::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubRespositoryContainerlinks::classIsSet() const
{
    return m__classIsSet;
}
void GithubRespositoryContainerlinks::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

