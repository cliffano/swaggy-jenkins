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
 * BranchImpllinks.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BranchImpllinks_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BranchImpllinks_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Link.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  BranchImpllinks
    : public ModelBase
{
public:
    BranchImpllinks();
    virtual ~BranchImpllinks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BranchImpllinks members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getSelf() const;
    bool selfIsSet() const;
    void unsetSelf();
    void setSelf(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getActions() const;
    bool actionsIsSet() const;
    void unsetActions();
    void setActions(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getRuns() const;
    bool runsIsSet() const;
    void unsetRuns();
    void setRuns(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Link> getQueue() const;
    bool queueIsSet() const;
    void unsetQueue();
    void setQueue(std::shared_ptr<Link> value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    std::shared_ptr<Link> m_Self;
    bool m_SelfIsSet;
    std::shared_ptr<Link> m_Actions;
    bool m_ActionsIsSet;
    std::shared_ptr<Link> m_Runs;
    bool m_RunsIsSet;
    std::shared_ptr<Link> m_Queue;
    bool m_QueueIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BranchImpllinks_H_ */
