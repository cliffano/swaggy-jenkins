/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "GithubOrganization.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

GithubOrganization::GithubOrganization()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m__linksIsSet = false;
    m_JenkinsOrganizationPipeline = false;
    m_JenkinsOrganizationPipelineIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

GithubOrganization::~GithubOrganization()
{
}

void GithubOrganization::validate()
{
    // TODO: implement validation
}

web::json::value GithubOrganization::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m__linksIsSet)
    {
        val[utility::conversions::to_string_t("_links")] = ModelBase::toJson(m__links);
    }
    if(m_JenkinsOrganizationPipelineIsSet)
    {
        val[utility::conversions::to_string_t("jenkinsOrganizationPipeline")] = ModelBase::toJson(m_JenkinsOrganizationPipeline);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

void GithubOrganization::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_links")))
    {
        if(!val[utility::conversions::to_string_t("_links")].is_null())
        {
            std::shared_ptr<GithubOrganizationlinks> newItem(new GithubOrganizationlinks());
            newItem->fromJson(val[utility::conversions::to_string_t("_links")]);
            setLinks( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jenkinsOrganizationPipeline")))
    {
        setJenkinsOrganizationPipeline(ModelBase::boolFromJson(val[utility::conversions::to_string_t("jenkinsOrganizationPipeline")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
}

void GithubOrganization::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m__linksIsSet)
    {
        if (m__links.get())
        {
            m__links->toMultipart(multipart, utility::conversions::to_string_t("_links."));
        }
    }
    if(m_JenkinsOrganizationPipelineIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("jenkinsOrganizationPipeline"), m_JenkinsOrganizationPipeline));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
}

void GithubOrganization::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("_links")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("_links")))
        {
            std::shared_ptr<GithubOrganizationlinks> newItem(new GithubOrganizationlinks());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("_links."));
            setLinks( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("jenkinsOrganizationPipeline")))
    {
        setJenkinsOrganizationPipeline(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("jenkinsOrganizationPipeline"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
}

utility::string_t GithubOrganization::getClass() const
{
    return m__class;
}


void GithubOrganization::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubOrganization::_classIsSet() const
{
    return m__classIsSet;
}

void GithubOrganization::unset_class()
{
    m__classIsSet = false;
}

std::shared_ptr<GithubOrganizationlinks> GithubOrganization::getLinks() const
{
    return m__links;
}


void GithubOrganization::setLinks(std::shared_ptr<GithubOrganizationlinks> value)
{
    m__links = value;
    m__linksIsSet = true;
}
bool GithubOrganization::linksIsSet() const
{
    return m__linksIsSet;
}

void GithubOrganization::unset_links()
{
    m__linksIsSet = false;
}

bool GithubOrganization::isJenkinsOrganizationPipeline() const
{
    return m_JenkinsOrganizationPipeline;
}


void GithubOrganization::setJenkinsOrganizationPipeline(bool value)
{
    m_JenkinsOrganizationPipeline = value;
    m_JenkinsOrganizationPipelineIsSet = true;
}
bool GithubOrganization::jenkinsOrganizationPipelineIsSet() const
{
    return m_JenkinsOrganizationPipelineIsSet;
}

void GithubOrganization::unsetJenkinsOrganizationPipeline()
{
    m_JenkinsOrganizationPipelineIsSet = false;
}

utility::string_t GithubOrganization::getName() const
{
    return m_Name;
}


void GithubOrganization::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool GithubOrganization::nameIsSet() const
{
    return m_NameIsSet;
}

void GithubOrganization::unsetName()
{
    m_NameIsSet = false;
}

}
}
}
}

