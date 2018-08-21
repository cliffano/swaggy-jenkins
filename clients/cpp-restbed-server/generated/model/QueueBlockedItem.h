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
 * QueueBlockedItem.h
 *
 * 
 */

#ifndef QueueBlockedItem_H_
#define QueueBlockedItem_H_



#include <string>
#include "CauseAction.h"
#include "FreeStyleProject.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  QueueBlockedItem
{
public:
    QueueBlockedItem();
    virtual ~QueueBlockedItem();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// QueueBlockedItem members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<CauseAction>> getActions() const;
    void setActions(std::vector<std::shared_ptr<CauseAction>> value);
    /// <summary>
    /// 
    /// </summary>
    bool isBlocked() const;
    void setBlocked(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isBuildable() const;
    void setBuildable(bool value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getInQueueSince() const;
    void setInQueueSince(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getParams() const;
    void setParams(std::string value);
    /// <summary>
    /// 
    /// </summary>
    bool isStuck() const;
    void setStuck(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleProject> getTask() const;
    void setTask(std::shared_ptr<FreeStyleProject> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getWhy() const;
    void setWhy(std::string value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getBuildableStartMilliseconds() const;
    void setBuildableStartMilliseconds(int32_t value);

protected:
    std::string m__class;
    std::vector<std::shared_ptr<CauseAction>> m_Actions;
    bool m_Blocked;
    bool m_Buildable;
    int32_t m_Id;
    int32_t m_InQueueSince;
    std::string m_Params;
    bool m_Stuck;
    std::shared_ptr<FreeStyleProject> m_Task;
    std::string m_Url;
    std::string m_Why;
    int32_t m_BuildableStartMilliseconds;
};

}
}
}
}

#endif /* QueueBlockedItem_H_ */
