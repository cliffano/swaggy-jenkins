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
 * PipelineRunNodes.h
 *
 * 
 */

#ifndef PipelineRunNodes_H_
#define PipelineRunNodes_H_



#include "PipelineRunNode.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelineRunNodes
{
public:
    PipelineRunNodes();
    virtual ~PipelineRunNodes();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// PipelineRunNodes members
    

protected:
};

}
}
}
}

#endif /* PipelineRunNodes_H_ */