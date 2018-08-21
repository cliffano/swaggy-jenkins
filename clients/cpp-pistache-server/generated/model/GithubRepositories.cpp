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


#include "GithubRepositories.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

GithubRepositories::GithubRepositories()
{
    m__class = "";
    m__classIsSet = false;
    m__linksIsSet = false;
    m_ItemsIsSet = false;
    m_LastPage = 0;
    m_LastPageIsSet = false;
    m_NextPage = 0;
    m_NextPageIsSet = false;
    m_PageSize = 0;
    m_PageSizeIsSet = false;
    
}

GithubRepositories::~GithubRepositories()
{
}

void GithubRepositories::validate()
{
    // TODO: implement validation
}

nlohmann::json GithubRepositories::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val["_links"] = ModelBase::toJson(m__links);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Items )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["items"] = jsonArray;
        }
    }
    if(m_LastPageIsSet)
    {
        val["lastPage"] = m_LastPage;
    }
    if(m_NextPageIsSet)
    {
        val["nextPage"] = m_NextPage;
    }
    if(m_PageSizeIsSet)
    {
        val["pageSize"] = m_PageSize;
    }
    

    return val;
}

void GithubRepositories::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
    }
    if(val.find("_links") != val.end())
    {
        if(!val["_links"].is_null())
        {
            GithubRepositorieslinks newItem;
            newItem.fromJson(val["_links"]);
            setLinks( newItem );
        }
        
    }
    {
        m_Items.clear();
        nlohmann::json jsonArray;
        if(val.find("items") != val.end())
        {
        for( auto& item : val["items"] )
        {
            
            if(item.is_null())
            {
                m_Items.push_back( GithubRepository() );
            }
            else
            {
                GithubRepository newItem;
                newItem.fromJson(item);
                m_Items.push_back( newItem );
            }
            
        }
        }
    }
    if(val.find("lastPage") != val.end())
    {
        setLastPage(val.at("lastPage"));
    }
    if(val.find("nextPage") != val.end())
    {
        setNextPage(val.at("nextPage"));
    }
    if(val.find("pageSize") != val.end())
    {
        setPageSize(val.at("pageSize"));
    }
    
}


std::string GithubRepositories::getClass() const
{
    return m__class;
}
void GithubRepositories::setClass(std::string const& value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubRepositories::classIsSet() const
{
    return m__classIsSet;
}
void GithubRepositories::unset_class()
{
    m__classIsSet = false;
}
GithubRepositorieslinks GithubRepositories::getLinks() const
{
    return m__links;
}
void GithubRepositories::setLinks(GithubRepositorieslinks const& value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool GithubRepositories::linksIsSet() const
{
    return m__linksIsSet;
}
void GithubRepositories::unset_links()
{
    m__linksIsSet = false;
}
std::vector<GithubRepository>& GithubRepositories::getItems()
{
    return m_Items;
}
bool GithubRepositories::itemsIsSet() const
{
    return m_ItemsIsSet;
}
void GithubRepositories::unsetItems()
{
    m_ItemsIsSet = false;
}
int32_t GithubRepositories::getLastPage() const
{
    return m_LastPage;
}
void GithubRepositories::setLastPage(int32_t const value)
{
    m_LastPage = value;
    m_LastPageIsSet = true;
}
bool GithubRepositories::lastPageIsSet() const
{
    return m_LastPageIsSet;
}
void GithubRepositories::unsetLastPage()
{
    m_LastPageIsSet = false;
}
int32_t GithubRepositories::getNextPage() const
{
    return m_NextPage;
}
void GithubRepositories::setNextPage(int32_t const value)
{
    m_NextPage = value;
    m_NextPageIsSet = true;
}
bool GithubRepositories::nextPageIsSet() const
{
    return m_NextPageIsSet;
}
void GithubRepositories::unsetNextPage()
{
    m_NextPageIsSet = false;
}
int32_t GithubRepositories::getPageSize() const
{
    return m_PageSize;
}
void GithubRepositories::setPageSize(int32_t const value)
{
    m_PageSize = value;
    m_PageSizeIsSet = true;
}
bool GithubRepositories::pageSizeIsSet() const
{
    return m_PageSizeIsSet;
}
void GithubRepositories::unsetPageSize()
{
    m_PageSizeIsSet = false;
}

}
}
}
}

