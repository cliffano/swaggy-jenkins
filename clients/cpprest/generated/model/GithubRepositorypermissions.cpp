/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "GithubRepositorypermissions.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

GithubRepositorypermissions::GithubRepositorypermissions()
{
    m_Admin = false;
    m_AdminIsSet = false;
    m_Push = false;
    m_PushIsSet = false;
    m_Pull = false;
    m_PullIsSet = false;
    m__class = U("");
    m__classIsSet = false;
}

GithubRepositorypermissions::~GithubRepositorypermissions()
{
}

void GithubRepositorypermissions::validate()
{
    // TODO: implement validation
}

web::json::value GithubRepositorypermissions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AdminIsSet)
    {
        val[U("admin")] = ModelBase::toJson(m_Admin);
    }
    if(m_PushIsSet)
    {
        val[U("push")] = ModelBase::toJson(m_Push);
    }
    if(m_PullIsSet)
    {
        val[U("pull")] = ModelBase::toJson(m_Pull);
    }
    if(m__classIsSet)
    {
        val[U("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void GithubRepositorypermissions::fromJson(web::json::value& val)
{
    if(val.has_field(U("admin")))
    {
        setAdmin(ModelBase::boolFromJson(val[U("admin")]));
    }
    if(val.has_field(U("push")))
    {
        setPush(ModelBase::boolFromJson(val[U("push")]));
    }
    if(val.has_field(U("pull")))
    {
        setPull(ModelBase::boolFromJson(val[U("pull")]));
    }
    if(val.has_field(U("_class")))
    {
        setClass(ModelBase::stringFromJson(val[U("_class")]));
    }
}

void GithubRepositorypermissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_AdminIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("admin"), m_Admin));
    }
    if(m_PushIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("push"), m_Push));
    }
    if(m_PullIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("pull"), m_Pull));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("_class"), m__class));
        
    }
}

void GithubRepositorypermissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("admin")))
    {
        setAdmin(ModelBase::boolFromHttpContent(multipart->getContent(U("admin"))));
    }
    if(multipart->hasContent(U("push")))
    {
        setPush(ModelBase::boolFromHttpContent(multipart->getContent(U("push"))));
    }
    if(multipart->hasContent(U("pull")))
    {
        setPull(ModelBase::boolFromHttpContent(multipart->getContent(U("pull"))));
    }
    if(multipart->hasContent(U("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(U("_class"))));
    }
}

bool GithubRepositorypermissions::getAdmin() const
{
    return m_Admin;
}


void GithubRepositorypermissions::setAdmin(bool value)
{
    m_Admin = value;
    m_AdminIsSet = true;
}
bool GithubRepositorypermissions::adminIsSet() const
{
    return m_AdminIsSet;
}

void GithubRepositorypermissions::unsetAdmin()
{
    m_AdminIsSet = false;
}

bool GithubRepositorypermissions::getPush() const
{
    return m_Push;
}


void GithubRepositorypermissions::setPush(bool value)
{
    m_Push = value;
    m_PushIsSet = true;
}
bool GithubRepositorypermissions::pushIsSet() const
{
    return m_PushIsSet;
}

void GithubRepositorypermissions::unsetPush()
{
    m_PushIsSet = false;
}

bool GithubRepositorypermissions::getPull() const
{
    return m_Pull;
}


void GithubRepositorypermissions::setPull(bool value)
{
    m_Pull = value;
    m_PullIsSet = true;
}
bool GithubRepositorypermissions::pullIsSet() const
{
    return m_PullIsSet;
}

void GithubRepositorypermissions::unsetPull()
{
    m_PullIsSet = false;
}

utility::string_t GithubRepositorypermissions::getClass() const
{
    return m__class;
}


void GithubRepositorypermissions::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubRepositorypermissions::classIsSet() const
{
    return m__classIsSet;
}

void GithubRepositorypermissions::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
