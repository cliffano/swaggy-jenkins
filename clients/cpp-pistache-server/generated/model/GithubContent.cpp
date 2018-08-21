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


#include "GithubContent.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

GithubContent::GithubContent()
{
    m_Name = "";
    m_NameIsSet = false;
    m_Sha = "";
    m_ShaIsSet = false;
    m__class = "";
    m__classIsSet = false;
    m_Repo = "";
    m_RepoIsSet = false;
    m_Size = 0;
    m_SizeIsSet = false;
    m_Owner = "";
    m_OwnerIsSet = false;
    m_Path = "";
    m_PathIsSet = false;
    m_Base64Data = "";
    m_Base64DataIsSet = false;
    
}

GithubContent::~GithubContent()
{
}

void GithubContent::validate()
{
    // TODO: implement validation
}

nlohmann::json GithubContent::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_NameIsSet)
    {
        val["name"] = ModelBase::toJson(m_Name);
    }
    if(m_ShaIsSet)
    {
        val["sha"] = ModelBase::toJson(m_Sha);
    }
    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m_RepoIsSet)
    {
        val["repo"] = ModelBase::toJson(m_Repo);
    }
    if(m_SizeIsSet)
    {
        val["size"] = m_Size;
    }
    if(m_OwnerIsSet)
    {
        val["owner"] = ModelBase::toJson(m_Owner);
    }
    if(m_PathIsSet)
    {
        val["path"] = ModelBase::toJson(m_Path);
    }
    if(m_Base64DataIsSet)
    {
        val["base64Data"] = ModelBase::toJson(m_Base64Data);
    }
    

    return val;
}

void GithubContent::fromJson(nlohmann::json& val)
{
    if(val.find("name") != val.end())
    {
        setName(val.at("name"));
    }
    if(val.find("sha") != val.end())
    {
        setSha(val.at("sha"));
    }
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("repo") != val.end())
    {
        setRepo(val.at("repo"));
    }
    if(val.find("size") != val.end())
    {
        setSize(val.at("size"));
    }
    if(val.find("owner") != val.end())
    {
        setOwner(val.at("owner"));
    }
    if(val.find("path") != val.end())
    {
        setPath(val.at("path"));
    }
    if(val.find("base64Data") != val.end())
    {
        setBase64Data(val.at("base64Data"));
    }
    
}


std::string GithubContent::getName() const
{
    return m_Name;
}
void GithubContent::setName(std::string const& value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool GithubContent::nameIsSet() const
{
    return m_NameIsSet;
}
void GithubContent::unsetName()
{
    m_NameIsSet = false;
}
std::string GithubContent::getSha() const
{
    return m_Sha;
}
void GithubContent::setSha(std::string const& value)
{
    m_Sha = value;
    m_ShaIsSet = true;
}
bool GithubContent::shaIsSet() const
{
    return m_ShaIsSet;
}
void GithubContent::unsetSha()
{
    m_ShaIsSet = false;
}
std::string GithubContent::getClass() const
{
    return m__class;
}
void GithubContent::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubContent::classIsSet() const
{
    return m__classIsSet;
}
void GithubContent::unset_class()
{
    m__classIsSet = false;
}
std::string GithubContent::getRepo() const
{
    return m_Repo;
}
void GithubContent::setRepo(std::string const& value)
{
    m_Repo = value;
    m_RepoIsSet = true;
}
bool GithubContent::repoIsSet() const
{
    return m_RepoIsSet;
}
void GithubContent::unsetRepo()
{
    m_RepoIsSet = false;
}
int32_t GithubContent::getSize() const
{
    return m_Size;
}
void GithubContent::setSize(int32_t const value)
{
    m_Size = value;
    m_SizeIsSet = true;
}
bool GithubContent::sizeIsSet() const
{
    return m_SizeIsSet;
}
void GithubContent::unsetSize()
{
    m_SizeIsSet = false;
}
std::string GithubContent::getOwner() const
{
    return m_Owner;
}
void GithubContent::setOwner(std::string const& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}
bool GithubContent::ownerIsSet() const
{
    return m_OwnerIsSet;
}
void GithubContent::unsetOwner()
{
    m_OwnerIsSet = false;
}
std::string GithubContent::getPath() const
{
    return m_Path;
}
void GithubContent::setPath(std::string const& value)
{
    m_Path = value;
    m_PathIsSet = true;
}
bool GithubContent::pathIsSet() const
{
    return m_PathIsSet;
}
void GithubContent::unsetPath()
{
    m_PathIsSet = false;
}
std::string GithubContent::getBase64Data() const
{
    return m_Base64Data;
}
void GithubContent::setBase64Data(std::string const& value)
{
    m_Base64Data = value;
    m_Base64DataIsSet = true;
}
bool GithubContent::base64DataIsSet() const
{
    return m_Base64DataIsSet;
}
void GithubContent::unsetBase64Data()
{
    m_Base64DataIsSet = false;
}

}
}
}
}

