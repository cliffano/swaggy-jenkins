/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

/*
* RemoteAccessApiImpl.h
*
* 
*/

#ifndef REMOTE_ACCESS_API_IMPL_H_
#define REMOTE_ACCESS_API_IMPL_H_


#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <RemoteAccessApi.h>

#include <pistache/optional.h>

#include "ComputerSet.h"
#include "FreeStyleBuild.h"
#include "FreeStyleProject.h"
#include "Hudson.h"
#include "ListView.h"
#include "Queue.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class RemoteAccessApiImpl : public org::openapitools::server::api::RemoteAccessApi {
public:
    RemoteAccessApiImpl(Pistache::Address addr);
    ~RemoteAccessApiImpl() { };

    void get_computer(const Pistache::Optional<int32_t> &depth, Pistache::Http::ResponseWriter &response);
    void get_jenkins(Pistache::Http::ResponseWriter &response);
    void get_job(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_job_config(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_job_last_build(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_job_progressive_text(const std::string &name, const std::string &number, const Pistache::Optional<std::string> &start, Pistache::Http::ResponseWriter &response);
    void get_queue(Pistache::Http::ResponseWriter &response);
    void get_queue_item(const std::string &number, Pistache::Http::ResponseWriter &response);
    void get_view(const std::string &name, Pistache::Http::ResponseWriter &response);
    void get_view_config(const std::string &name, Pistache::Http::ResponseWriter &response);
    void head_jenkins(Pistache::Http::ResponseWriter &response);
    void post_create_item(const Pistache::Optional<std::string> &name, const Pistache::Optional<std::string> &from, const Pistache::Optional<std::string> &mode, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, const Pistache::Optional<Pistache::Http::Header::Raw> &contentType, const std::string &body, Pistache::Http::ResponseWriter &response);
    void post_create_view(const Pistache::Optional<std::string> &name, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, const Pistache::Optional<Pistache::Http::Header::Raw> &contentType, const std::string &body, Pistache::Http::ResponseWriter &response);
    void post_job_build(const std::string &name, const Pistache::Optional<std::string> &json, const Pistache::Optional<std::string> &token, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_config(const std::string &name, const std::string &body, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_delete(const std::string &name, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_disable(const std::string &name, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_enable(const std::string &name, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_job_last_build_stop(const std::string &name, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);
    void post_view_config(const std::string &name, const std::string &body, const Pistache::Optional<Pistache::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response);

};

}
}
}
}



#endif