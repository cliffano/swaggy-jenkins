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
 * EmptyChangeLogSet.h
 *
 * 
 */

#ifndef EmptyChangeLogSet_H_
#define EmptyChangeLogSet_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  EmptyChangeLogSet
    : public ModelBase
{
public:
    EmptyChangeLogSet();
    virtual ~EmptyChangeLogSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// EmptyChangeLogSet members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::string getKind() const;
    void setKind(std::string const& value);
    bool kindIsSet() const;
    void unsetKind();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_Kind;
    bool m_KindIsSet;
};

}
}
}
}

#endif /* EmptyChangeLogSet_H_ */
