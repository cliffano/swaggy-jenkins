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
 * Pipelines.h
 *
 * 
 */

#ifndef Pipelines_H_
#define Pipelines_H_


#include "ModelBase.h"

#include "Pipeline.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  Pipelines
    : public ModelBase
{
public:
    Pipelines();
    virtual ~Pipelines();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// Pipelines members


protected:
};

}
}
}
}

#endif /* Pipelines_H_ */
