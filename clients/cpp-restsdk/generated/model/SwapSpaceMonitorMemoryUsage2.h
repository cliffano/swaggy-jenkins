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
 * SwapSpaceMonitorMemoryUsage2.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_SwapSpaceMonitorMemoryUsage2_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_SwapSpaceMonitorMemoryUsage2_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  SwapSpaceMonitorMemoryUsage2
    : public ModelBase
{
public:
    SwapSpaceMonitorMemoryUsage2();
    virtual ~SwapSpaceMonitorMemoryUsage2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// SwapSpaceMonitorMemoryUsage2 members

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
    int32_t getAvailablePhysicalMemory() const;
    bool availablePhysicalMemoryIsSet() const;
    void unsetAvailablePhysicalMemory();
    void setAvailablePhysicalMemory(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getAvailableSwapSpace() const;
    bool availableSwapSpaceIsSet() const;
    void unsetAvailableSwapSpace();
    void setAvailableSwapSpace(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalPhysicalMemory() const;
    bool totalPhysicalMemoryIsSet() const;
    void unsetTotalPhysicalMemory();
    void setTotalPhysicalMemory(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTotalSwapSpace() const;
    bool totalSwapSpaceIsSet() const;
    void unsetTotalSwapSpace();
    void setTotalSwapSpace(int32_t value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    int32_t m_AvailablePhysicalMemory;
    bool m_AvailablePhysicalMemoryIsSet;
    int32_t m_AvailableSwapSpace;
    bool m_AvailableSwapSpaceIsSet;
    int32_t m_TotalPhysicalMemory;
    bool m_TotalPhysicalMemoryIsSet;
    int32_t m_TotalSwapSpace;
    bool m_TotalSwapSpaceIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_SwapSpaceMonitorMemoryUsage2_H_ */
