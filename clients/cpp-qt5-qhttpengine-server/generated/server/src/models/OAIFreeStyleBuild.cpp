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


#include "OAIFreeStyleBuild.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIFreeStyleBuild::OAIFreeStyleBuild(QString json) {
    this->fromJson(json);
}

OAIFreeStyleBuild::OAIFreeStyleBuild() {
    this->init();
}

OAIFreeStyleBuild::~OAIFreeStyleBuild() {
    
}

void
OAIFreeStyleBuild::init() {
    m__class_isSet = false;
    m_number_isSet = false;
    m_url_isSet = false;
    m_actions_isSet = false;
    m_building_isSet = false;
    m_description_isSet = false;
    m_display_name_isSet = false;
    m_duration_isSet = false;
    m_estimated_duration_isSet = false;
    m_executor_isSet = false;
    m_full_display_name_isSet = false;
    m_id_isSet = false;
    m_keep_log_isSet = false;
    m_queue_id_isSet = false;
    m_result_isSet = false;
    m_timestamp_isSet = false;
    m_built_on_isSet = false;
    m_change_set_isSet = false;
}

void
OAIFreeStyleBuild::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIFreeStyleBuild::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(number, json[QString("number")]);
    
    ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    
    
    ::OpenAPI::fromJsonValue(actions, json[QString("actions")]);
    ::OpenAPI::fromJsonValue(building, json[QString("building")]);
    
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    ::OpenAPI::fromJsonValue(duration, json[QString("duration")]);
    
    ::OpenAPI::fromJsonValue(estimated_duration, json[QString("estimatedDuration")]);
    
    ::OpenAPI::fromJsonValue(executor, json[QString("executor")]);
    
    ::OpenAPI::fromJsonValue(full_display_name, json[QString("fullDisplayName")]);
    
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(keep_log, json[QString("keepLog")]);
    
    ::OpenAPI::fromJsonValue(queue_id, json[QString("queueId")]);
    
    ::OpenAPI::fromJsonValue(result, json[QString("result")]);
    
    ::OpenAPI::fromJsonValue(timestamp, json[QString("timestamp")]);
    
    ::OpenAPI::fromJsonValue(built_on, json[QString("builtOn")]);
    
    ::OpenAPI::fromJsonValue(change_set, json[QString("changeSet")]);
    
}

QString
OAIFreeStyleBuild::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIFreeStyleBuild::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_number_isSet){
        obj.insert(QString("number"), ::OpenAPI::toJsonValue(number));
    }
	if(m_url_isSet){
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
	
    if(actions.size() > 0){
        obj.insert(QString("actions"), ::OpenAPI::toJsonValue(actions));
    } 
	if(m_building_isSet){
        obj.insert(QString("building"), ::OpenAPI::toJsonValue(building));
    }
	if(m_description_isSet){
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	if(m_duration_isSet){
        obj.insert(QString("duration"), ::OpenAPI::toJsonValue(duration));
    }
	if(m_estimated_duration_isSet){
        obj.insert(QString("estimatedDuration"), ::OpenAPI::toJsonValue(estimated_duration));
    }
	if(m_executor_isSet){
        obj.insert(QString("executor"), ::OpenAPI::toJsonValue(executor));
    }
	if(m_full_display_name_isSet){
        obj.insert(QString("fullDisplayName"), ::OpenAPI::toJsonValue(full_display_name));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_keep_log_isSet){
        obj.insert(QString("keepLog"), ::OpenAPI::toJsonValue(keep_log));
    }
	if(m_queue_id_isSet){
        obj.insert(QString("queueId"), ::OpenAPI::toJsonValue(queue_id));
    }
	if(m_result_isSet){
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(result));
    }
	if(m_timestamp_isSet){
        obj.insert(QString("timestamp"), ::OpenAPI::toJsonValue(timestamp));
    }
	if(m_built_on_isSet){
        obj.insert(QString("builtOn"), ::OpenAPI::toJsonValue(built_on));
    }
	if(change_set.isSet()){
        obj.insert(QString("changeSet"), ::OpenAPI::toJsonValue(change_set));
    }
    return obj;
}

QString
OAIFreeStyleBuild::getClass() const {
    return _class;
}
void
OAIFreeStyleBuild::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIFreeStyleBuild::getNumber() const {
    return number;
}
void
OAIFreeStyleBuild::setNumber(const qint32 &number) {
    this->number = number;
    this->m_number_isSet = true;
}

QString
OAIFreeStyleBuild::getUrl() const {
    return url;
}
void
OAIFreeStyleBuild::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

QList<OAICauseAction>
OAIFreeStyleBuild::getActions() const {
    return actions;
}
void
OAIFreeStyleBuild::setActions(const QList<OAICauseAction> &actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

bool
OAIFreeStyleBuild::isBuilding() const {
    return building;
}
void
OAIFreeStyleBuild::setBuilding(const bool &building) {
    this->building = building;
    this->m_building_isSet = true;
}

QString
OAIFreeStyleBuild::getDescription() const {
    return description;
}
void
OAIFreeStyleBuild::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString
OAIFreeStyleBuild::getDisplayName() const {
    return display_name;
}
void
OAIFreeStyleBuild::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIFreeStyleBuild::getDuration() const {
    return duration;
}
void
OAIFreeStyleBuild::setDuration(const qint32 &duration) {
    this->duration = duration;
    this->m_duration_isSet = true;
}

qint32
OAIFreeStyleBuild::getEstimatedDuration() const {
    return estimated_duration;
}
void
OAIFreeStyleBuild::setEstimatedDuration(const qint32 &estimated_duration) {
    this->estimated_duration = estimated_duration;
    this->m_estimated_duration_isSet = true;
}

QString
OAIFreeStyleBuild::getExecutor() const {
    return executor;
}
void
OAIFreeStyleBuild::setExecutor(const QString &executor) {
    this->executor = executor;
    this->m_executor_isSet = true;
}

QString
OAIFreeStyleBuild::getFullDisplayName() const {
    return full_display_name;
}
void
OAIFreeStyleBuild::setFullDisplayName(const QString &full_display_name) {
    this->full_display_name = full_display_name;
    this->m_full_display_name_isSet = true;
}

QString
OAIFreeStyleBuild::getId() const {
    return id;
}
void
OAIFreeStyleBuild::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool
OAIFreeStyleBuild::isKeepLog() const {
    return keep_log;
}
void
OAIFreeStyleBuild::setKeepLog(const bool &keep_log) {
    this->keep_log = keep_log;
    this->m_keep_log_isSet = true;
}

qint32
OAIFreeStyleBuild::getQueueId() const {
    return queue_id;
}
void
OAIFreeStyleBuild::setQueueId(const qint32 &queue_id) {
    this->queue_id = queue_id;
    this->m_queue_id_isSet = true;
}

QString
OAIFreeStyleBuild::getResult() const {
    return result;
}
void
OAIFreeStyleBuild::setResult(const QString &result) {
    this->result = result;
    this->m_result_isSet = true;
}

qint32
OAIFreeStyleBuild::getTimestamp() const {
    return timestamp;
}
void
OAIFreeStyleBuild::setTimestamp(const qint32 &timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}

QString
OAIFreeStyleBuild::getBuiltOn() const {
    return built_on;
}
void
OAIFreeStyleBuild::setBuiltOn(const QString &built_on) {
    this->built_on = built_on;
    this->m_built_on_isSet = true;
}

OAIEmptyChangeLogSet
OAIFreeStyleBuild::getChangeSet() const {
    return change_set;
}
void
OAIFreeStyleBuild::setChangeSet(const OAIEmptyChangeLogSet &change_set) {
    this->change_set = change_set;
    this->m_change_set_isSet = true;
}


bool
OAIFreeStyleBuild::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_number_isSet){ isObjectUpdated = true; break;}
    
        if(m_url_isSet){ isObjectUpdated = true; break;}
    
        if(actions.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_building_isSet){ isObjectUpdated = true; break;}
    
        if(m_description_isSet){ isObjectUpdated = true; break;}
    
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_duration_isSet){ isObjectUpdated = true; break;}
    
        if(m_estimated_duration_isSet){ isObjectUpdated = true; break;}
    
        if(m_executor_isSet){ isObjectUpdated = true; break;}
    
        if(m_full_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_keep_log_isSet){ isObjectUpdated = true; break;}
    
        if(m_queue_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_result_isSet){ isObjectUpdated = true; break;}
    
        if(m_timestamp_isSet){ isObjectUpdated = true; break;}
    
        if(m_built_on_isSet){ isObjectUpdated = true; break;}
    
        if(change_set.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

