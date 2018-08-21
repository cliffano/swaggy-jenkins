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


#include "OAIPipelineImpl.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineImpl::OAIPipelineImpl(QString json) {
    this->fromJson(json);
}

OAIPipelineImpl::OAIPipelineImpl() {
    this->init();
}

OAIPipelineImpl::~OAIPipelineImpl() {
    
}

void
OAIPipelineImpl::init() {
    m__class_isSet = false;
    m_display_name_isSet = false;
    m_estimated_duration_in_millis_isSet = false;
    m_full_name_isSet = false;
    m_latest_run_isSet = false;
    m_name_isSet = false;
    m_organization_isSet = false;
    m_weather_score_isSet = false;
    m__links_isSet = false;
}

void
OAIPipelineImpl::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineImpl::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    ::OpenAPI::fromJsonValue(estimated_duration_in_millis, json[QString("estimatedDurationInMillis")]);
    
    ::OpenAPI::fromJsonValue(full_name, json[QString("fullName")]);
    
    ::OpenAPI::fromJsonValue(latest_run, json[QString("latestRun")]);
    
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(organization, json[QString("organization")]);
    
    ::OpenAPI::fromJsonValue(weather_score, json[QString("weatherScore")]);
    
    ::OpenAPI::fromJsonValue(_links, json[QString("_links")]);
    
}

QString
OAIPipelineImpl::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineImpl::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	if(m_estimated_duration_in_millis_isSet){
        obj.insert(QString("estimatedDurationInMillis"), ::OpenAPI::toJsonValue(estimated_duration_in_millis));
    }
	if(m_full_name_isSet){
        obj.insert(QString("fullName"), ::OpenAPI::toJsonValue(full_name));
    }
	if(m_latest_run_isSet){
        obj.insert(QString("latestRun"), ::OpenAPI::toJsonValue(latest_run));
    }
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_organization_isSet){
        obj.insert(QString("organization"), ::OpenAPI::toJsonValue(organization));
    }
	if(m_weather_score_isSet){
        obj.insert(QString("weatherScore"), ::OpenAPI::toJsonValue(weather_score));
    }
	if(_links.isSet()){
        obj.insert(QString("_links"), ::OpenAPI::toJsonValue(_links));
    }
    return obj;
}

QString
OAIPipelineImpl::getClass() const {
    return _class;
}
void
OAIPipelineImpl::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString
OAIPipelineImpl::getDisplayName() const {
    return display_name;
}
void
OAIPipelineImpl::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIPipelineImpl::getEstimatedDurationInMillis() const {
    return estimated_duration_in_millis;
}
void
OAIPipelineImpl::setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
    this->m_estimated_duration_in_millis_isSet = true;
}

QString
OAIPipelineImpl::getFullName() const {
    return full_name;
}
void
OAIPipelineImpl::setFullName(const QString &full_name) {
    this->full_name = full_name;
    this->m_full_name_isSet = true;
}

QString
OAIPipelineImpl::getLatestRun() const {
    return latest_run;
}
void
OAIPipelineImpl::setLatestRun(const QString &latest_run) {
    this->latest_run = latest_run;
    this->m_latest_run_isSet = true;
}

QString
OAIPipelineImpl::getName() const {
    return name;
}
void
OAIPipelineImpl::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString
OAIPipelineImpl::getOrganization() const {
    return organization;
}
void
OAIPipelineImpl::setOrganization(const QString &organization) {
    this->organization = organization;
    this->m_organization_isSet = true;
}

qint32
OAIPipelineImpl::getWeatherScore() const {
    return weather_score;
}
void
OAIPipelineImpl::setWeatherScore(const qint32 &weather_score) {
    this->weather_score = weather_score;
    this->m_weather_score_isSet = true;
}

OAIPipelineImpllinks
OAIPipelineImpl::getLinks() const {
    return _links;
}
void
OAIPipelineImpl::setLinks(const OAIPipelineImpllinks &_links) {
    this->_links = _links;
    this->m__links_isSet = true;
}


bool
OAIPipelineImpl::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_estimated_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_full_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_latest_run_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_organization_isSet){ isObjectUpdated = true; break;}
    
        if(m_weather_score_isSet){ isObjectUpdated = true; break;}
    
        if(_links.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

