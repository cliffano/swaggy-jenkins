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
 * PipelineRunNodeSteps.h
 *
 * 
 */

#ifndef PipelineRunNodeSteps_H_
#define PipelineRunNodeSteps_H_


#include "ModelBase.h"

#include "PipelineStepImpl.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunNodeSteps
    : public ModelBase
{
public:
    PipelineRunNodeSteps();
    virtual ~PipelineRunNodeSteps();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelineRunNodeSteps members


protected:
};

}
}
}
}

#endif /* PipelineRunNodeSteps_H_ */
