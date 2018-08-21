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
 * GithubRespositoryContainerlinks.h
 *
 * 
 */

#ifndef GithubRespositoryContainerlinks_H_
#define GithubRespositoryContainerlinks_H_



#include <string>
#include "Link.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubRespositoryContainerlinks
{
public:
    GithubRespositoryContainerlinks();
    virtual ~GithubRespositoryContainerlinks();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// GithubRespositoryContainerlinks members
    
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    void setSelf(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);

protected:
    std::shared_ptr<Link> m_Self;
    std::string m__class;
};

}
}
}
}

#endif /* GithubRespositoryContainerlinks_H_ */
