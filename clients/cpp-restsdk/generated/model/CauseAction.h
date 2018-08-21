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
 * CauseAction.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CauseAction_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CauseAction_H_


#include "../ModelBase.h"

#include "CauseUserIdCause.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CauseAction
    : public ModelBase
{
public:
    CauseAction();
    virtual ~CauseAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CauseAction members

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
    std::vector<std::shared_ptr<CauseUserIdCause>>& getCauses();
    bool causesIsSet() const;
    void unsetCauses();
    void setCauses(std::vector<std::shared_ptr<CauseUserIdCause>> value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    std::vector<std::shared_ptr<CauseUserIdCause>> m_Causes;
    bool m_CausesIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CauseAction_H_ */
