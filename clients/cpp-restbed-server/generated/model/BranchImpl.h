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

/*
 * BranchImpl.h
 *
 * 
 */

#ifndef BranchImpl_H_
#define BranchImpl_H_



#include "BranchImpllinks.h"
#include "BranchImplpermissions.h"
#include <string>
#include "PipelineRunImpl.h"
#include "StringParameterDefinition.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  BranchImpl
{
public:
    BranchImpl();
    virtual ~BranchImpl();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// BranchImpl members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getFullDisplayName() const;
    void setFullDisplayName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getFullName() const;
    void setFullName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<StringParameterDefinition>> getParameters() const;
    void setParameters(std::vector<std::shared_ptr<StringParameterDefinition>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BranchImplpermissions> getPermissions() const;
    void setPermissions(std::shared_ptr<BranchImplpermissions> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getWeatherScore() const;
    void setWeatherScore(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getPullRequest() const;
    void setPullRequest(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BranchImpllinks> getLinks() const;
    void setLinks(std::shared_ptr<BranchImpllinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineRunImpl> getLatestRun() const;
    void setLatestRun(std::shared_ptr<PipelineRunImpl> value);

protected:
    std::string m__class;
    std::string m_DisplayName;
    int32_t m_EstimatedDurationInMillis;
    std::string m_FullDisplayName;
    std::string m_FullName;
    std::string m_Name;
    std::string m_Organization;
    std::vector<std::shared_ptr<StringParameterDefinition>> m_Parameters;
    std::shared_ptr<BranchImplpermissions> m_Permissions;
    int32_t m_WeatherScore;
    std::string m_PullRequest;
    std::shared_ptr<BranchImpllinks> m__links;
    std::shared_ptr<PipelineRunImpl> m_LatestRun;
};

}
}
}
}

#endif /* BranchImpl_H_ */
