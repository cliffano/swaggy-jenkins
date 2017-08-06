/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GithubRespositoryContainer.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GithubRespositoryContainer::GithubRespositoryContainer()
{
    m__class = U("");
    m__classIsSet = false;
    m__linksIsSet = false;
    m_RepositoriesIsSet = false;
}

GithubRespositoryContainer::~GithubRespositoryContainer()
{
}

void GithubRespositoryContainer::validate()
{
    // TODO: implement validation
}

web::json::value GithubRespositoryContainer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val[U("_links")] = ModelBase::toJson(m__links);
    }
    if(m_RepositoriesIsSet)
    {
        val[U("repositories")] = ModelBase::toJson(m_Repositories);
    }

    return val;
}

void GithubRespositoryContainer::fromJson(web::json::value& val)
{
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
    if(val.has_field(U("_links")))
    {
        if(!val[U("_links")].is_null())
        {
            std::shared_ptr<GithubRespositoryContainerlinks> newItem(new GithubRespositoryContainerlinks());
            newItem->fromJson(val[U("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(U("repositories")))
    {
        if(!val[U("repositories")].is_null())
        {
            std::shared_ptr<GithubRepositories> newItem(new GithubRepositories());
            newItem->fromJson(val[U("repositories")]);
            setRepositories( newItem );
        }
    }
}

void GithubRespositoryContainer::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, U("_links."));
        }
        
    }
    if(m_RepositoriesIsSet)
    {
        if (m_Repositories.get())
        {
            m_Repositories->toMultipart(multipart, U("repositories."));
        }
        
    }
}

void GithubRespositoryContainer::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
    if(multipart->hasContent(U("_links")))
    {
        if(multipart->hasContent(U("_links")))
        {
            std::shared_ptr<GithubRespositoryContainerlinks> newItem(new GithubRespositoryContainerlinks());
            newItem->fromMultiPart(multipart, U("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(U("repositories")))
    {
        if(multipart->hasContent(U("repositories")))
        {
            std::shared_ptr<GithubRepositories> newItem(new GithubRepositories());
            newItem->fromMultiPart(multipart, U("repositories."));
            setRepositories( newItem );
        }
    }
}

utility::string_t GithubRespositoryContainer::getClass() const
{
    return m__class;
}


void GithubRespositoryContainer::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubRespositoryContainer::classIsSet() const
{
    return m__classIsSet;
}

void GithubRespositoryContainer::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<GithubRespositoryContainerlinks> GithubRespositoryContainer::getLinks() const
{
    return m__links;
}


void GithubRespositoryContainer::setLinks(std::shared_ptr<GithubRespositoryContainerlinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool GithubRespositoryContainer::linksIsSet() const
{
    return m__linksIsSet;
}

void GithubRespositoryContainer::unset_links()
{
    m__linksIsSet = false;
}

std::shared_ptr<GithubRepositories> GithubRespositoryContainer::getRepositories() const
{
    return m_Repositories;
}


void GithubRespositoryContainer::setRepositories(std::shared_ptr<GithubRepositories> value)
{
    m_Repositories = value;
    m_RepositoriesIsSet = true;
}
bool GithubRespositoryContainer::repositoriesIsSet() const
{
    return m_RepositoriesIsSet;
}

void GithubRespositoryContainer::unsetRepositories()
{
    m_RepositoriesIsSet = false;
}

}
}
}
}
