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
 * ComputerSet.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ComputerSet_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ComputerSet_H_


#include "../ModelBase.h"

#include "HudsonMasterComputer.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ComputerSet
    : public ModelBase
{
public:
    ComputerSet();
    virtual ~ComputerSet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ComputerSet members

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
    int32_t getBusyExecutors() const;
    bool busyExecutorsIsSet() const;
    void unsetBusyExecutors();
    void setBusyExecutors(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<HudsonMasterComputer>>& getComputer();
    bool computerIsSet() const;
    void unsetComputer();
    void setComputer(std::vector<std::shared_ptr<HudsonMasterComputer>> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetDisplayName();
    void setDisplayName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalExecutors() const;
    bool totalExecutorsIsSet() const;
    void unsetTotalExecutors();
    void setTotalExecutors(int32_t value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    int32_t m_BusyExecutors;
    bool m_BusyExecutorsIsSet;
    std::vector<std::shared_ptr<HudsonMasterComputer>> m_Computer;
    bool m_ComputerIsSet;
    utility::string_t m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_TotalExecutors;
    bool m_TotalExecutorsIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ComputerSet_H_ */
