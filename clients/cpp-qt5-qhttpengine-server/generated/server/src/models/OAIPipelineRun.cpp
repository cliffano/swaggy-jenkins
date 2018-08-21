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


#include "OAIPipelineRun.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineRun::OAIPipelineRun(QString json) {
    this->fromJson(json);
}

OAIPipelineRun::OAIPipelineRun() {
    this->init();
}

OAIPipelineRun::~OAIPipelineRun() {
    
}

void
OAIPipelineRun::init() {
    m__class_isSet = false;
    m_artifacts_isSet = false;
    m_duration_in_millis_isSet = false;
    m_estimated_duration_in_millis_isSet = false;
    m_en_queue_time_isSet = false;
    m_end_time_isSet = false;
    m_id_isSet = false;
    m_organization_isSet = false;
    m_pipeline_isSet = false;
    m_result_isSet = false;
    m_run_summary_isSet = false;
    m_start_time_isSet = false;
    m_state_isSet = false;
    m_type_isSet = false;
    m_commit_id_isSet = false;
}

void
OAIPipelineRun::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineRun::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    
    ::OpenAPI::fromJsonValue(artifacts, json[QString("artifacts")]);
    ::OpenAPI::fromJsonValue(duration_in_millis, json[QString("durationInMillis")]);
    
    ::OpenAPI::fromJsonValue(estimated_duration_in_millis, json[QString("estimatedDurationInMillis")]);
    
    ::OpenAPI::fromJsonValue(en_queue_time, json[QString("enQueueTime")]);
    
    ::OpenAPI::fromJsonValue(end_time, json[QString("endTime")]);
    
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(organization, json[QString("organization")]);
    
    ::OpenAPI::fromJsonValue(pipeline, json[QString("pipeline")]);
    
    ::OpenAPI::fromJsonValue(result, json[QString("result")]);
    
    ::OpenAPI::fromJsonValue(run_summary, json[QString("runSummary")]);
    
    ::OpenAPI::fromJsonValue(start_time, json[QString("startTime")]);
    
    ::OpenAPI::fromJsonValue(state, json[QString("state")]);
    
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
    ::OpenAPI::fromJsonValue(commit_id, json[QString("commitId")]);
    
}

QString
OAIPipelineRun::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineRun::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	
    if(artifacts.size() > 0){
        obj.insert(QString("artifacts"), ::OpenAPI::toJsonValue(artifacts));
    } 
	if(m_duration_in_millis_isSet){
        obj.insert(QString("durationInMillis"), ::OpenAPI::toJsonValue(duration_in_millis));
    }
	if(m_estimated_duration_in_millis_isSet){
        obj.insert(QString("estimatedDurationInMillis"), ::OpenAPI::toJsonValue(estimated_duration_in_millis));
    }
	if(m_en_queue_time_isSet){
        obj.insert(QString("enQueueTime"), ::OpenAPI::toJsonValue(en_queue_time));
    }
	if(m_end_time_isSet){
        obj.insert(QString("endTime"), ::OpenAPI::toJsonValue(end_time));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_organization_isSet){
        obj.insert(QString("organization"), ::OpenAPI::toJsonValue(organization));
    }
	if(m_pipeline_isSet){
        obj.insert(QString("pipeline"), ::OpenAPI::toJsonValue(pipeline));
    }
	if(m_result_isSet){
        obj.insert(QString("result"), ::OpenAPI::toJsonValue(result));
    }
	if(m_run_summary_isSet){
        obj.insert(QString("runSummary"), ::OpenAPI::toJsonValue(run_summary));
    }
	if(m_start_time_isSet){
        obj.insert(QString("startTime"), ::OpenAPI::toJsonValue(start_time));
    }
	if(m_state_isSet){
        obj.insert(QString("state"), ::OpenAPI::toJsonValue(state));
    }
	if(m_type_isSet){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
	if(m_commit_id_isSet){
        obj.insert(QString("commitId"), ::OpenAPI::toJsonValue(commit_id));
    }
    return obj;
}

QString
OAIPipelineRun::getClass() const {
    return _class;
}
void
OAIPipelineRun::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAIPipelineRunartifacts>
OAIPipelineRun::getArtifacts() const {
    return artifacts;
}
void
OAIPipelineRun::setArtifacts(const QList<OAIPipelineRunartifacts> &artifacts) {
    this->artifacts = artifacts;
    this->m_artifacts_isSet = true;
}

qint32
OAIPipelineRun::getDurationInMillis() const {
    return duration_in_millis;
}
void
OAIPipelineRun::setDurationInMillis(const qint32 &duration_in_millis) {
    this->duration_in_millis = duration_in_millis;
    this->m_duration_in_millis_isSet = true;
}

qint32
OAIPipelineRun::getEstimatedDurationInMillis() const {
    return estimated_duration_in_millis;
}
void
OAIPipelineRun::setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
    this->m_estimated_duration_in_millis_isSet = true;
}

QString
OAIPipelineRun::getEnQueueTime() const {
    return en_queue_time;
}
void
OAIPipelineRun::setEnQueueTime(const QString &en_queue_time) {
    this->en_queue_time = en_queue_time;
    this->m_en_queue_time_isSet = true;
}

QString
OAIPipelineRun::getEndTime() const {
    return end_time;
}
void
OAIPipelineRun::setEndTime(const QString &end_time) {
    this->end_time = end_time;
    this->m_end_time_isSet = true;
}

QString
OAIPipelineRun::getId() const {
    return id;
}
void
OAIPipelineRun::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString
OAIPipelineRun::getOrganization() const {
    return organization;
}
void
OAIPipelineRun::setOrganization(const QString &organization) {
    this->organization = organization;
    this->m_organization_isSet = true;
}

QString
OAIPipelineRun::getPipeline() const {
    return pipeline;
}
void
OAIPipelineRun::setPipeline(const QString &pipeline) {
    this->pipeline = pipeline;
    this->m_pipeline_isSet = true;
}

QString
OAIPipelineRun::getResult() const {
    return result;
}
void
OAIPipelineRun::setResult(const QString &result) {
    this->result = result;
    this->m_result_isSet = true;
}

QString
OAIPipelineRun::getRunSummary() const {
    return run_summary;
}
void
OAIPipelineRun::setRunSummary(const QString &run_summary) {
    this->run_summary = run_summary;
    this->m_run_summary_isSet = true;
}

QString
OAIPipelineRun::getStartTime() const {
    return start_time;
}
void
OAIPipelineRun::setStartTime(const QString &start_time) {
    this->start_time = start_time;
    this->m_start_time_isSet = true;
}

QString
OAIPipelineRun::getState() const {
    return state;
}
void
OAIPipelineRun::setState(const QString &state) {
    this->state = state;
    this->m_state_isSet = true;
}

QString
OAIPipelineRun::getType() const {
    return type;
}
void
OAIPipelineRun::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

QString
OAIPipelineRun::getCommitId() const {
    return commit_id;
}
void
OAIPipelineRun::setCommitId(const QString &commit_id) {
    this->commit_id = commit_id;
    this->m_commit_id_isSet = true;
}


bool
OAIPipelineRun::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(artifacts.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_estimated_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_en_queue_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_end_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_organization_isSet){ isObjectUpdated = true; break;}
    
        if(m_pipeline_isSet){ isObjectUpdated = true; break;}
    
        if(m_result_isSet){ isObjectUpdated = true; break;}
    
        if(m_run_summary_isSet){ isObjectUpdated = true; break;}
    
        if(m_start_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_state_isSet){ isObjectUpdated = true; break;}
    
        if(m_type_isSet){ isObjectUpdated = true; break;}
    
        if(m_commit_id_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

