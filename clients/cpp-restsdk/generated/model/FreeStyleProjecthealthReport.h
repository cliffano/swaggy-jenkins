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
 * FreeStyleProjecthealthReport.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_FreeStyleProjecthealthReport_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_FreeStyleProjecthealthReport_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  FreeStyleProjecthealthReport
    : public ModelBase
{
public:
    FreeStyleProjecthealthReport();
    virtual ~FreeStyleProjecthealthReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// FreeStyleProjecthealthReport members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();
    void setDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIconClassName() const;
    bool iconClassNameIsSet() const;
    void unsetIconClassName();
    void setIconClassName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIconUrl() const;
    bool iconUrlIsSet() const;
    void unsetIconUrl();
    void setIconUrl(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetScore();
    void setScore(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClass() const;
    bool _classIsSet() const;
    void unset_class();
    void setClass(utility::string_t value);

protected:
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_IconClassName;
    bool m_IconClassNameIsSet;
    utility::string_t m_IconUrl;
    bool m_IconUrlIsSet;
    int32_t m_Score;
    bool m_ScoreIsSet;
    utility::string_t m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_FreeStyleProjecthealthReport_H_ */
