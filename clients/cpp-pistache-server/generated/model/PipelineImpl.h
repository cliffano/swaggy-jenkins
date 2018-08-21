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
/*
 * PipelineImpl.h
 *
 * 
 */

#ifndef PipelineImpl_H_
#define PipelineImpl_H_


#include "ModelBase.h"

#include "PipelineImpllinks.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineImpl
    : public ModelBase
{
public:
    PipelineImpl();
    virtual ~PipelineImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineImpl members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string const& value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t const value);
    bool estimatedDurationInMillisIsSet() const;
    void unsetEstimatedDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    std::string getFullName() const;
    void setFullName(std::string const& value);
    bool fullNameIsSet() const;
    void unsetFullName();
    /// <summary>
    /// 
    /// </summary>
    std::string getLatestRun() const;
    void setLatestRun(std::string const& value);
    bool latestRunIsSet() const;
    void unsetLatestRun();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string const& value);
    bool organizationIsSet() const;
    void unsetOrganization();
    /// <summary>
    /// 
    /// </summary>
    int32_t getWeatherScore() const;
    void setWeatherScore(int32_t const value);
    bool weatherScoreIsSet() const;
    void unsetWeatherScore();
    /// <summary>
    /// 
    /// </summary>
    PipelineImpllinks getLinks() const;
    void setLinks(PipelineImpllinks const& value);
    bool linksIsSet() const;
    void unset_links();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_EstimatedDurationInMillis;
    bool m_EstimatedDurationInMillisIsSet;
    std::string m_FullName;
    bool m_FullNameIsSet;
    std::string m_LatestRun;
    bool m_LatestRunIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Organization;
    bool m_OrganizationIsSet;
    int32_t m_WeatherScore;
    bool m_WeatherScoreIsSet;
    PipelineImpllinks m__links;
    bool m__linksIsSet;
};

}
}
}
}

#endif /* PipelineImpl_H_ */
