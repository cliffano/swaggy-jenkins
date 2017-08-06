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

/*
 * QueueLeftItem.h
 *
 * 
 */

#ifndef QueueLeftItem_H_
#define QueueLeftItem_H_



#include "FreeStyleBuild.h"
#include <string>
#include "CauseAction.h"
#include "FreeStyleProject.h"
#include <vector>
#include <memory>

namespace io {
namespace swagger {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  QueueLeftItem
{
public:
    QueueLeftItem();
    virtual ~QueueLeftItem();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// QueueLeftItem members
    
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
    bool getBlocked() const;
    void setBlocked(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool getBuildable() const;
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
    bool getStuck() const;
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
    bool getCancelled() const;
    void setCancelled(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<FreeStyleBuild> getExecutable() const;
    void setExecutable(std::shared_ptr<FreeStyleBuild> value);

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
    bool m_Cancelled;
    std::shared_ptr<FreeStyleBuild> m_Executable;
};

}
}
}
}

#endif /* QueueLeftItem_H_ */