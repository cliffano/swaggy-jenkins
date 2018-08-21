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
 * ScmOrganisations.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ScmOrganisations_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ScmOrganisations_H_


#include "GithubOrganization.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ScmOrganisations
    : public null<GithubOrganization>
{
public:
    ScmOrganisations();
    virtual ~ScmOrganisations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ScmOrganisations members


protected:
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ScmOrganisations_H_ */
