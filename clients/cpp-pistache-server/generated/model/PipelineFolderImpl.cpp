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


#include "PipelineFolderImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

PipelineFolderImpl::PipelineFolderImpl()
{
    m__class = "";
    m__classIsSet = false;
    m_DisplayName = "";
    m_DisplayNameIsSet = false;
    m_FullName = "";
    m_FullNameIsSet = false;
    m_Name = "";
    m_NameIsSet = false;
    m_Organization = "";
    m_OrganizationIsSet = false;
    m_NumberOfFolders = 0;
    m_NumberOfFoldersIsSet = false;
    m_NumberOfPipelines = 0;
    m_NumberOfPipelinesIsSet = false;
    
}

PipelineFolderImpl::~PipelineFolderImpl()
{
}

void PipelineFolderImpl::validate()
{
    // TODO: implement validation
}

nlohmann::json PipelineFolderImpl::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_DisplayNameIsSet)
    {
        val["displayName"] = ModelBase::toJson(m_DisplayName);
    }
    if(m_FullNameIsSet)
    {
        val["fullName"] = ModelBase::toJson(m_FullName);
    }
    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val["organization"] = ModelBase::toJson(m_Organization);
    }
    if(m_NumberOfFoldersIsSet)
    {
        val["numberOfFolders"] = m_NumberOfFolders;
    }
    if(m_NumberOfPipelinesIsSet)
    {
        val["numberOfPipelines"] = m_NumberOfPipelines;
    }
    

    return val;
}

void PipelineFolderImpl::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("displayName") != val.end())
    {
        setDisplayName(val.at("displayName"));
    }
    if(val.find("fullName") != val.end())
    {
        setFullName(val.at("fullName"));
    }
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
    }
    if(val.find("organization") != val.end())
    {
        setOrganization(val.at("organization"));
    }
    if(val.find("numberOfFolders") != val.end())
    {
        setNumberOfFolders(val.at("numberOfFolders"));
    }
    if(val.find("numberOfPipelines") != val.end())
    {
        setNumberOfPipelines(val.at("numberOfPipelines"));
    }
    
}


std::string PipelineFolderImpl::getClass() const
{
    return m__class;
}
void PipelineFolderImpl::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool PipelineFolderImpl::classIsSet() const
{
    return m__classIsSet;
}
void PipelineFolderImpl::unset_class()
{
    m__classIsSet = false;
}
std::string PipelineFolderImpl::getDisplayName() const
{
    return m_DisplayName;
}
void PipelineFolderImpl::setDisplayName(std::string const& value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool PipelineFolderImpl::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}
void PipelineFolderImpl::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}
std::string PipelineFolderImpl::getFullName() const
{
    return m_FullName;
}
void PipelineFolderImpl::setFullName(std::string const& value)
{
    m_FullName = value;
    m_FullNameIsSet = true;
}
bool PipelineFolderImpl::fullNameIsSet() const
{
    return m_FullNameIsSet;
}
void PipelineFolderImpl::unsetFullName()
{
    m_FullNameIsSet = false;
}
std::string PipelineFolderImpl::getName() const
{
    return m_Name;
}
void PipelineFolderImpl::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool PipelineFolderImpl::nameIsSet() const
{
    return m_NameIsSet;
}
void PipelineFolderImpl::unsetName()
{
    m_NameIsSet = false;
}
std::string PipelineFolderImpl::getOrganization() const
{
    return m_Organization;
}
void PipelineFolderImpl::setOrganization(std::string const& value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool PipelineFolderImpl::organizationIsSet() const
{
    return m_OrganizationIsSet;
}
void PipelineFolderImpl::unsetOrganization()
{
    m_OrganizationIsSet = false;
}
int32_t PipelineFolderImpl::getNumberOfFolders() const
{
    return m_NumberOfFolders;
}
void PipelineFolderImpl::setNumberOfFolders(int32_t const value)
{
    m_NumberOfFolders = value;
    m_NumberOfFoldersIsSet = true;
}
bool PipelineFolderImpl::numberOfFoldersIsSet() const
{
    return m_NumberOfFoldersIsSet;
}
void PipelineFolderImpl::unsetNumberOfFolders()
{
    m_NumberOfFoldersIsSet = false;
}
int32_t PipelineFolderImpl::getNumberOfPipelines() const
{
    return m_NumberOfPipelines;
}
void PipelineFolderImpl::setNumberOfPipelines(int32_t const value)
{
    m_NumberOfPipelines = value;
    m_NumberOfPipelinesIsSet = true;
}
bool PipelineFolderImpl::numberOfPipelinesIsSet() const
{
    return m_NumberOfPipelinesIsSet;
}
void PipelineFolderImpl::unsetNumberOfPipelines()
{
    m_NumberOfPipelinesIsSet = false;
}

}
}
}
}

