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
 * FavoriteImpl.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_FavoriteImpl_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_FavoriteImpl_H_


#include "../ModelBase.h"

#include "PipelineImpl.h"
#include <cpprest/details/basic_types.h>
#include "FavoriteImpllinks.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FavoriteImpl
    : public ModelBase
{
public:
    FavoriteImpl();
    virtual ~FavoriteImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FavoriteImpl members

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
    std::shared_ptr<FavoriteImpllinks> getLinks() const;
    bool linksIsSet() const;
    void unset_links();
    void setLinks(std::shared_ptr<FavoriteImpllinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<PipelineImpl> getItem() const;
    bool itemIsSet() const;
    void unsetItem();
    void setItem(std::shared_ptr<PipelineImpl> value);

protected:
    utility::string_t m__class;
    bool m__classIsSet;
    std::shared_ptr<FavoriteImpllinks> m__links;
    bool m__linksIsSet;
    std::shared_ptr<PipelineImpl> m_Item;
    bool m_ItemIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_FavoriteImpl_H_ */
