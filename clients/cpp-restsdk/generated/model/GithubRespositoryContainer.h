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
 * GithubRespositoryContainer.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_GithubRespositoryContainer_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_GithubRespositoryContainer_H_


#include "../ModelBase.h"

#include "GithubRepositories.h"
#include <cpprest/details/basic_types.h>
#include "GithubRespositoryContainerlinks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  GithubRespositoryContainer
    : public ModelBase
{
public:
    GithubRespositoryContainer();
    virtual ~GithubRespositoryContainer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// GithubRespositoryContainer members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubRespositoryContainerlinks> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<GithubRespositoryContainerlinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<GithubRepositories> getRepositories() const;
    bool repositoriesIsSet() const;
    void unsetRepositories();
    void setRepositories(std::shared_ptr<GithubRepositories> value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    std::shared_ptr<GithubRespositoryContainerlinks> m__links;
    bool m__linksIsSet;
    std::shared_ptr<GithubRepositories> m_Repositories;
    bool m_RepositoriesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_GithubRespositoryContainer_H_ */
