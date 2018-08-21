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
 * PipelineBranchesitem.h
 *
 * 
 */

#ifndef PipelineBranchesitem_H_
#define PipelineBranchesitem_H_



#include <string>
#include "PipelineBranchesitemlatestRun.h"
#include "PipelineBranchesitempullRequest.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineBranchesitem
{
public:
    PipelineBranchesitem();
    virtual ~PipelineBranchesitem();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineBranchesitem members
    
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
    std::string getName() const;
    void setName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getWeatherScore() const;
    void setWeatherScore(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitemlatestRun> getLatestRun() const;
    void setLatestRun(std::shared_ptr<PipelineBranchesitemlatestRun> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineBranchesitempullRequest> getPullRequest() const;
    void setPullRequest(std::shared_ptr<PipelineBranchesitempullRequest> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalNumberOfPullRequests() const;
    void setTotalNumberOfPullRequests(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::string m_DisplayName;
    int32_t m_EstimatedDurationInMillis;
    std::string m_Name;
    int32_t m_WeatherScore;
    std::shared_ptr<PipelineBranchesitemlatestRun> m_LatestRun;
    std::string m_Organization;
    std::shared_ptr<PipelineBranchesitempullRequest> m_PullRequest;
    int32_t m_TotalNumberOfPullRequests;
    std::string m__class;
};

}
}
}
}

#endif /* PipelineBranchesitem_H_ */
