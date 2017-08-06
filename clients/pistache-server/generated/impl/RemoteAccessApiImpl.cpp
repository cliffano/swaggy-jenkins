/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/

#include "RemoteAccessApiImpl.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

RemoteAccessApiImpl::RemoteAccessApiImpl(Pistache::Address addr)
    : RemoteAccessApi(addr)
    { }

void RemoteAccessApiImpl::get_computer(const Optional<int32_t> &depth, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_crumb(Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_jenkins(Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_job(const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_job_config(const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_job_last_build(const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_job_progressive_text(const std::string &name, const std::string &number, const Optional<std::string> &start, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_queue(Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_queue_item(const std::string &number, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_view(const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::get_view_config(const std::string &name, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::head_jenkins(Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_create_item(const Optional<std::string> &name, const Optional<std::string> &from, const Optional<std::string> &mode, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, const Optional<Net::Http::Header::Raw> &contentType, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_create_view(const Optional<std::string> &name, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, const Optional<Net::Http::Header::Raw> &contentType, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_job_build(const std::string &name, const Optional<std::string> &json, const Optional<std::string> &token, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_job_config(const std::string &name, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_job_delete(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_job_disable(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_job_enable(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_job_last_build_stop(const std::string &name, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}
void RemoteAccessApiImpl::post_view_config(const std::string &name, const std::string &body, const Optional<Net::Http::Header::Raw> &jenkinsCrumb, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}
