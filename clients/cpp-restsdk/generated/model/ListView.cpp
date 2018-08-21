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



#include "ListView.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ListView::ListView()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_JobsIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
}

ListView::~ListView()
{
}

void ListView::validate()
{
    // TODO: implement validation
}

web::json::value ListView::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Jobs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("jobs")] = web::json::value::array(jsonArray);
        }
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }

    return val;
}

void ListView::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromJson(val[utility::conversions::to_string_t("description")]));
    }
    {
        m_Jobs.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("jobs")))
        {
        for( auto& item : val[utility::conversions::to_string_t("jobs")].as_array() )
        {
            if(item.is_null())
            {
                m_Jobs.push_back( std::shared_ptr<FreeStyleProject>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleProject> newItem(new FreeStyleProject());
                newItem->fromJson(item);
                m_Jobs.push_back( newItem );
            }
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromJson(val[utility::conversions::to_string_t("url")]));
    }
}

void ListView::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Jobs )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("jobs"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
}

void ListView::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
    {
        m_Jobs.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("jobs")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("jobs"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Jobs.push_back( std::shared_ptr<FreeStyleProject>(nullptr) );
            }
            else
            {
                std::shared_ptr<FreeStyleProject> newItem(new FreeStyleProject());
                newItem->fromJson(item);
                m_Jobs.push_back( newItem );
            }
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        setUrl(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("url"))));
    }
}

utility::string_t ListView::getClass() const
{
    return m__class;
}


void ListView::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool ListView::_classIsSet() const
{
    return m__classIsSet;
}

void ListView::unset_class()
{
    m__classIsSet = false;
}

utility::string_t ListView::getDescription() const
{
    return m_Description;
}


void ListView::setDescription(utility::string_t value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ListView::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void ListView::unsetDescription()
{
    m_DescriptionIsSet = false;
}

std::vector<std::shared_ptr<FreeStyleProject>>& ListView::getJobs()
{
    return m_Jobs;
}

void ListView::setJobs(std::vector<std::shared_ptr<FreeStyleProject>> value)
{
    m_Jobs = value;
    m_JobsIsSet = true;
}
bool ListView::jobsIsSet() const
{
    return m_JobsIsSet;
}

void ListView::unsetJobs()
{
    m_JobsIsSet = false;
}

utility::string_t ListView::getName() const
{
    return m_Name;
}


void ListView::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool ListView::nameIsSet() const
{
    return m_NameIsSet;
}

void ListView::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t ListView::getUrl() const
{
    return m_Url;
}


void ListView::setUrl(utility::string_t value)
{
    m_Url = value;
    m_UrlIsSet = true;
}
bool ListView::urlIsSet() const
{
    return m_UrlIsSet;
}

void ListView::unsetUrl()
{
    m_UrlIsSet = false;
}

}
}
}
}

