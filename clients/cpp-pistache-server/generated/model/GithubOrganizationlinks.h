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
 * GithubOrganizationlinks.h
 *
 * 
 */

#ifndef GithubOrganizationlinks_H_
#define GithubOrganizationlinks_H_


#include "ModelBase.h"

#include <string>
#include "Link.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubOrganizationlinks
    : public ModelBase
{
public:
    GithubOrganizationlinks();
    virtual ~GithubOrganizationlinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// GithubOrganizationlinks members

    /// <summary>
    /// 
    /// </summary>
    Link getRepositories() const;
    void setRepositories(Link const& value);
    bool repositoriesIsSet() const;
    void unsetRepositories();
    /// <summary>
    /// 
    /// </summary>
    Link getSelf() const;
    void setSelf(Link const& value);
    bool selfIsSet() const;
    void unsetSelf();
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();

protected:
    Link m_Repositories;
    bool m_RepositoriesIsSet;
    Link m_Self;
    bool m_SelfIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* GithubOrganizationlinks_H_ */
