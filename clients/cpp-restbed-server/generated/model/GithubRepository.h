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
 * GithubRepository.h
 *
 * 
 */

#ifndef GithubRepository_H_
#define GithubRepository_H_



#include <string>
#include "GithubRepositorypermissions.h"
#include "GithubRepositorylinks.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubRepository
{
public:
    GithubRepository();
    virtual ~GithubRepository();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// GithubRepository members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubRepositorylinks> getLinks() const;
    void setLinks(std::shared_ptr<GithubRepositorylinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDefaultBranch() const;
    void setDefaultBranch(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDescription() const;
    void setDescription(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubRepositorypermissions> getPermissions() const;
    void setPermissions(std::shared_ptr<GithubRepositorypermissions> value);
    /// <summary>
    /// 
    /// </summary>
    bool isPrivate() const;
    void setPrivate(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::string getFullName() const;
    void setFullName(std::string value);

protected:
    std::string m__class;
    std::shared_ptr<GithubRepositorylinks> m__links;
    std::string m_DefaultBranch;
    std::string m_Description;
    std::string m_Name;
    std::shared_ptr<GithubRepositorypermissions> m_Permissions;
    bool m__private;
    std::string m_FullName;
};

}
}
}
}

#endif /* GithubRepository_H_ */
