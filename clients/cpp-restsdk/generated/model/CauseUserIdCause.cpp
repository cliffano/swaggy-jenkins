/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "CauseUserIdCause.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

CauseUserIdCause::CauseUserIdCause()
{
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
    m_ShortDescription = utility::conversions::to_string_t("");
    m_ShortDescriptionIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_UserName = utility::conversions::to_string_t("");
    m_UserNameIsSet = false;
}

CauseUserIdCause::~CauseUserIdCause()
{
}

void CauseUserIdCause::validate()
{
    // TODO: implement validation
}

web::json::value CauseUserIdCause::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }
    if(m_ShortDescriptionIsSet)
    {
        val[utility::conversions::to_string_t("shortDescription")] = ModelBase::toJson(m_ShortDescription);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_UserNameIsSet)
    {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(m_UserName);
    }

    return val;
}

void CauseUserIdCause::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
    if(val.has_field(utility::conversions::to_string_t("shortDescription")))
    {
        setShortDescription(ModelBase::stringFromJson(val[utility::conversions::to_string_t("shortDescription")]));
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        setUserId(ModelBase::stringFromJson(val[utility::conversions::to_string_t("userId")]));
    }
    if(val.has_field(utility::conversions::to_string_t("userName")))
    {
        setUserName(ModelBase::stringFromJson(val[utility::conversions::to_string_t("userName")]));
    }
}

void CauseUserIdCause::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
    if(m_ShortDescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shortDescription"), m_ShortDescription));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_UserNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userName"), m_UserName));
    }
}

void CauseUserIdCause::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("shortDescription")))
    {
        setShortDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("shortDescription"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        setUserId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userName")))
    {
        setUserName(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("userName"))));
    }
}

utility::string_t CauseUserIdCause::getClass() const
{
    return m__class;
}


void CauseUserIdCause::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool CauseUserIdCause::_classIsSet() const
{
    return m__classIsSet;
}

void CauseUserIdCause::unset_class()
{
    m__classIsSet = false;
}

utility::string_t CauseUserIdCause::getShortDescription() const
{
    return m_ShortDescription;
}


void CauseUserIdCause::setShortDescription(utility::string_t value)
{
    m_ShortDescription = value;
    m_ShortDescriptionIsSet = true;
}
bool CauseUserIdCause::shortDescriptionIsSet() const
{
    return m_ShortDescriptionIsSet;
}

void CauseUserIdCause::unsetShortDescription()
{
    m_ShortDescriptionIsSet = false;
}

utility::string_t CauseUserIdCause::getUserId() const
{
    return m_UserId;
}


void CauseUserIdCause::setUserId(utility::string_t value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}
bool CauseUserIdCause::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void CauseUserIdCause::unsetUserId()
{
    m_UserIdIsSet = false;
}

utility::string_t CauseUserIdCause::getUserName() const
{
    return m_UserName;
}


void CauseUserIdCause::setUserName(utility::string_t value)
{
    m_UserName = value;
    m_UserNameIsSet = true;
}
bool CauseUserIdCause::userNameIsSet() const
{
    return m_UserNameIsSet;
}

void CauseUserIdCause::unsetUserName()
{
    m_UserNameIsSet = false;
}

}
}
}
}

