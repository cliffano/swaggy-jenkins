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



#include "MultibranchPipeline.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

MultibranchPipeline::MultibranchPipeline()
{
    m_DisplayName = utility::conversions::to_string_t("");
    m_DisplayNameIsSet = false;
    m_EstimatedDurationInMillis = 0;
    m_EstimatedDurationInMillisIsSet = false;
    m_LatestRun = utility::conversions::to_string_t("");
    m_LatestRunIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Organization = utility::conversions::to_string_t("");
    m_OrganizationIsSet = false;
    m_WeatherScore = 0;
    m_WeatherScoreIsSet = false;
    m_BranchNamesIsSet = false;
    m_NumberOfFailingBranches = 0;
    m_NumberOfFailingBranchesIsSet = false;
    m_NumberOfFailingPullRequests = 0;
    m_NumberOfFailingPullRequestsIsSet = false;
    m_NumberOfSuccessfulBranches = 0;
    m_NumberOfSuccessfulBranchesIsSet = false;
    m_NumberOfSuccessfulPullRequests = 0;
    m_NumberOfSuccessfulPullRequestsIsSet = false;
    m_TotalNumberOfBranches = 0;
    m_TotalNumberOfBranchesIsSet = false;
    m_TotalNumberOfPullRequests = 0;
    m_TotalNumberOfPullRequestsIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

MultibranchPipeline::~MultibranchPipeline()
{
}

void MultibranchPipeline::validate()
{
    // TODO: implement validation
}

web::json::value MultibranchPipeline::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_DisplayNameIsSet)
    {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(m_DisplayName);
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        val[utility::conversions::to_string_t("estimatedDurationInMillis")] = ModelBase::toJson(m_EstimatedDurationInMillis);
    }
    if(m_LatestRunIsSet)
    {
        val[utility::conversions::to_string_t("latestRun")] = ModelBase::toJson(m_LatestRun);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_OrganizationIsSet)
    {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(m_Organization);
    }
    if(m_WeatherScoreIsSet)
    {
        val[utility::conversions::to_string_t("weatherScore")] = ModelBase::toJson(m_WeatherScore);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BranchNames )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("branchNames")] = web::json::value::array(jsonArray);
        }
    }
    if(m_NumberOfFailingBranchesIsSet)
    {
        val[utility::conversions::to_string_t("numberOfFailingBranches")] = ModelBase::toJson(m_NumberOfFailingBranches);
    }
    if(m_NumberOfFailingPullRequestsIsSet)
    {
        val[utility::conversions::to_string_t("numberOfFailingPullRequests")] = ModelBase::toJson(m_NumberOfFailingPullRequests);
    }
    if(m_NumberOfSuccessfulBranchesIsSet)
    {
        val[utility::conversions::to_string_t("numberOfSuccessfulBranches")] = ModelBase::toJson(m_NumberOfSuccessfulBranches);
    }
    if(m_NumberOfSuccessfulPullRequestsIsSet)
    {
        val[utility::conversions::to_string_t("numberOfSuccessfulPullRequests")] = ModelBase::toJson(m_NumberOfSuccessfulPullRequests);
    }
    if(m_TotalNumberOfBranchesIsSet)
    {
        val[utility::conversions::to_string_t("totalNumberOfBranches")] = ModelBase::toJson(m_TotalNumberOfBranches);
    }
    if(m_TotalNumberOfPullRequestsIsSet)
    {
        val[utility::conversions::to_string_t("totalNumberOfPullRequests")] = ModelBase::toJson(m_TotalNumberOfPullRequests);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void MultibranchPipeline::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("displayName")]));
    }
    if(val.has_field(utility::conversions::to_string_t("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("estimatedDurationInMillis")]));
    }
    if(val.has_field(utility::conversions::to_string_t("latestRun")))
    {
        setLatestRun(ModelBase::stringFromJson(val[utility::conversions::to_string_t("latestRun")]));
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("name")]));
    }
    if(val.has_field(utility::conversions::to_string_t("organization")))
    {
        setOrganization(ModelBase::stringFromJson(val[utility::conversions::to_string_t("organization")]));
    }
    if(val.has_field(utility::conversions::to_string_t("weatherScore")))
    {
        setWeatherScore(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("weatherScore")]));
    }
    {
        m_BranchNames.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("branchNames")))
        {
        for( auto& item : val[utility::conversions::to_string_t("branchNames")].as_array() )
        {
            m_BranchNames.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfFailingBranches")))
    {
        setNumberOfFailingBranches(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numberOfFailingBranches")]));
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfFailingPullRequests")))
    {
        setNumberOfFailingPullRequests(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numberOfFailingPullRequests")]));
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfSuccessfulBranches")))
    {
        setNumberOfSuccessfulBranches(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numberOfSuccessfulBranches")]));
    }
    if(val.has_field(utility::conversions::to_string_t("numberOfSuccessfulPullRequests")))
    {
        setNumberOfSuccessfulPullRequests(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("numberOfSuccessfulPullRequests")]));
    }
    if(val.has_field(utility::conversions::to_string_t("totalNumberOfBranches")))
    {
        setTotalNumberOfBranches(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("totalNumberOfBranches")]));
    }
    if(val.has_field(utility::conversions::to_string_t("totalNumberOfPullRequests")))
    {
        setTotalNumberOfPullRequests(ModelBase::int32_tFromJson(val[utility::conversions::to_string_t("totalNumberOfPullRequests")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void MultibranchPipeline::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_DisplayNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("displayName"), m_DisplayName));
    }
    if(m_EstimatedDurationInMillisIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("estimatedDurationInMillis"), m_EstimatedDurationInMillis));
    }
    if(m_LatestRunIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("latestRun"), m_LatestRun));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_OrganizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("organization"), m_Organization));
    }
    if(m_WeatherScoreIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("weatherScore"), m_WeatherScore));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_BranchNames )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("branchNames"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    if(m_NumberOfFailingBranchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfFailingBranches"), m_NumberOfFailingBranches));
    }
    if(m_NumberOfFailingPullRequestsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfFailingPullRequests"), m_NumberOfFailingPullRequests));
    }
    if(m_NumberOfSuccessfulBranchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfSuccessfulBranches"), m_NumberOfSuccessfulBranches));
    }
    if(m_NumberOfSuccessfulPullRequestsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("numberOfSuccessfulPullRequests"), m_NumberOfSuccessfulPullRequests));
    }
    if(m_TotalNumberOfBranchesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalNumberOfBranches"), m_TotalNumberOfBranches));
    }
    if(m_TotalNumberOfPullRequestsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("totalNumberOfPullRequests"), m_TotalNumberOfPullRequests));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void MultibranchPipeline::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("displayName")))
    {
        setDisplayName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("displayName"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("estimatedDurationInMillis")))
    {
        setEstimatedDurationInMillis(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("estimatedDurationInMillis"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("latestRun")))
    {
        setLatestRun(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("latestRun"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        setName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("name"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("organization")))
    {
        setOrganization(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("organization"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("weatherScore")))
    {
        setWeatherScore(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("weatherScore"))));
    }
    {
        m_BranchNames.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("branchNames")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("branchNames"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_BranchNames.push_back(ModelBase::stringFromJson(item));
        }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfFailingBranches")))
    {
        setNumberOfFailingBranches(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfFailingBranches"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfFailingPullRequests")))
    {
        setNumberOfFailingPullRequests(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfFailingPullRequests"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfSuccessfulBranches")))
    {
        setNumberOfSuccessfulBranches(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfSuccessfulBranches"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("numberOfSuccessfulPullRequests")))
    {
        setNumberOfSuccessfulPullRequests(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("numberOfSuccessfulPullRequests"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalNumberOfBranches")))
    {
        setTotalNumberOfBranches(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalNumberOfBranches"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("totalNumberOfPullRequests")))
    {
        setTotalNumberOfPullRequests(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("totalNumberOfPullRequests"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

utility::string_t MultibranchPipeline::getDisplayName() const
{
    return m_DisplayName;
}


void MultibranchPipeline::setDisplayName(utility::string_t value)
{
    m_DisplayName = value;
    m_DisplayNameIsSet = true;
}
bool MultibranchPipeline::displayNameIsSet() const
{
    return m_DisplayNameIsSet;
}

void MultibranchPipeline::unsetDisplayName()
{
    m_DisplayNameIsSet = false;
}

int32_t MultibranchPipeline::getEstimatedDurationInMillis() const
{
    return m_EstimatedDurationInMillis;
}


void MultibranchPipeline::setEstimatedDurationInMillis(int32_t value)
{
    m_EstimatedDurationInMillis = value;
    m_EstimatedDurationInMillisIsSet = true;
}
bool MultibranchPipeline::estimatedDurationInMillisIsSet() const
{
    return m_EstimatedDurationInMillisIsSet;
}

void MultibranchPipeline::unsetEstimatedDurationInMillis()
{
    m_EstimatedDurationInMillisIsSet = false;
}

utility::string_t MultibranchPipeline::getLatestRun() const
{
    return m_LatestRun;
}


void MultibranchPipeline::setLatestRun(utility::string_t value)
{
    m_LatestRun = value;
    m_LatestRunIsSet = true;
}
bool MultibranchPipeline::latestRunIsSet() const
{
    return m_LatestRunIsSet;
}

void MultibranchPipeline::unsetLatestRun()
{
    m_LatestRunIsSet = false;
}

utility::string_t MultibranchPipeline::getName() const
{
    return m_Name;
}


void MultibranchPipeline::setName(utility::string_t value)
{
    m_Name = value;
    m_NameIsSet = true;
}
bool MultibranchPipeline::nameIsSet() const
{
    return m_NameIsSet;
}

void MultibranchPipeline::unsetName()
{
    m_NameIsSet = false;
}

utility::string_t MultibranchPipeline::getOrganization() const
{
    return m_Organization;
}


void MultibranchPipeline::setOrganization(utility::string_t value)
{
    m_Organization = value;
    m_OrganizationIsSet = true;
}
bool MultibranchPipeline::organizationIsSet() const
{
    return m_OrganizationIsSet;
}

void MultibranchPipeline::unsetOrganization()
{
    m_OrganizationIsSet = false;
}

int32_t MultibranchPipeline::getWeatherScore() const
{
    return m_WeatherScore;
}


void MultibranchPipeline::setWeatherScore(int32_t value)
{
    m_WeatherScore = value;
    m_WeatherScoreIsSet = true;
}
bool MultibranchPipeline::weatherScoreIsSet() const
{
    return m_WeatherScoreIsSet;
}

void MultibranchPipeline::unsetWeatherScore()
{
    m_WeatherScoreIsSet = false;
}

std::vector<utility::string_t>& MultibranchPipeline::getBranchNames()
{
    return m_BranchNames;
}

void MultibranchPipeline::setBranchNames(std::vector<utility::string_t> value)
{
    m_BranchNames = value;
    m_BranchNamesIsSet = true;
}
bool MultibranchPipeline::branchNamesIsSet() const
{
    return m_BranchNamesIsSet;
}

void MultibranchPipeline::unsetBranchNames()
{
    m_BranchNamesIsSet = false;
}

int32_t MultibranchPipeline::getNumberOfFailingBranches() const
{
    return m_NumberOfFailingBranches;
}


void MultibranchPipeline::setNumberOfFailingBranches(int32_t value)
{
    m_NumberOfFailingBranches = value;
    m_NumberOfFailingBranchesIsSet = true;
}
bool MultibranchPipeline::numberOfFailingBranchesIsSet() const
{
    return m_NumberOfFailingBranchesIsSet;
}

void MultibranchPipeline::unsetNumberOfFailingBranches()
{
    m_NumberOfFailingBranchesIsSet = false;
}

int32_t MultibranchPipeline::getNumberOfFailingPullRequests() const
{
    return m_NumberOfFailingPullRequests;
}


void MultibranchPipeline::setNumberOfFailingPullRequests(int32_t value)
{
    m_NumberOfFailingPullRequests = value;
    m_NumberOfFailingPullRequestsIsSet = true;
}
bool MultibranchPipeline::numberOfFailingPullRequestsIsSet() const
{
    return m_NumberOfFailingPullRequestsIsSet;
}

void MultibranchPipeline::unsetNumberOfFailingPullRequests()
{
    m_NumberOfFailingPullRequestsIsSet = false;
}

int32_t MultibranchPipeline::getNumberOfSuccessfulBranches() const
{
    return m_NumberOfSuccessfulBranches;
}


void MultibranchPipeline::setNumberOfSuccessfulBranches(int32_t value)
{
    m_NumberOfSuccessfulBranches = value;
    m_NumberOfSuccessfulBranchesIsSet = true;
}
bool MultibranchPipeline::numberOfSuccessfulBranchesIsSet() const
{
    return m_NumberOfSuccessfulBranchesIsSet;
}

void MultibranchPipeline::unsetNumberOfSuccessfulBranches()
{
    m_NumberOfSuccessfulBranchesIsSet = false;
}

int32_t MultibranchPipeline::getNumberOfSuccessfulPullRequests() const
{
    return m_NumberOfSuccessfulPullRequests;
}


void MultibranchPipeline::setNumberOfSuccessfulPullRequests(int32_t value)
{
    m_NumberOfSuccessfulPullRequests = value;
    m_NumberOfSuccessfulPullRequestsIsSet = true;
}
bool MultibranchPipeline::numberOfSuccessfulPullRequestsIsSet() const
{
    return m_NumberOfSuccessfulPullRequestsIsSet;
}

void MultibranchPipeline::unsetNumberOfSuccessfulPullRequests()
{
    m_NumberOfSuccessfulPullRequestsIsSet = false;
}

int32_t MultibranchPipeline::getTotalNumberOfBranches() const
{
    return m_TotalNumberOfBranches;
}


void MultibranchPipeline::setTotalNumberOfBranches(int32_t value)
{
    m_TotalNumberOfBranches = value;
    m_TotalNumberOfBranchesIsSet = true;
}
bool MultibranchPipeline::totalNumberOfBranchesIsSet() const
{
    return m_TotalNumberOfBranchesIsSet;
}

void MultibranchPipeline::unsetTotalNumberOfBranches()
{
    m_TotalNumberOfBranchesIsSet = false;
}

int32_t MultibranchPipeline::getTotalNumberOfPullRequests() const
{
    return m_TotalNumberOfPullRequests;
}


void MultibranchPipeline::setTotalNumberOfPullRequests(int32_t value)
{
    m_TotalNumberOfPullRequests = value;
    m_TotalNumberOfPullRequestsIsSet = true;
}
bool MultibranchPipeline::totalNumberOfPullRequestsIsSet() const
{
    return m_TotalNumberOfPullRequestsIsSet;
}

void MultibranchPipeline::unsetTotalNumberOfPullRequests()
{
    m_TotalNumberOfPullRequestsIsSet = false;
}

utility::string_t MultibranchPipeline::getClass() const
{
    return m__class;
}


void MultibranchPipeline::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool MultibranchPipeline::_classIsSet() const
{
    return m__classIsSet;
}

void MultibranchPipeline::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}

