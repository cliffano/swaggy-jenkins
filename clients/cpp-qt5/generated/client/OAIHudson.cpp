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


#include "OAIHudson.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIHudson::OAIHudson(QString json) {
    init();
    this->fromJson(json);
}

OAIHudson::OAIHudson() {
    init();
}

OAIHudson::~OAIHudson() {
    this->cleanup();
}

void
OAIHudson::init() {
    _class = new QString("");
    m__class_isSet = false;
    assigned_labels = new QList<OAIHudsonassignedLabels*>();
    m_assigned_labels_isSet = false;
    mode = new QString("");
    m_mode_isSet = false;
    node_description = new QString("");
    m_node_description_isSet = false;
    node_name = new QString("");
    m_node_name_isSet = false;
    num_executors = 0;
    m_num_executors_isSet = false;
    description = new QString("");
    m_description_isSet = false;
    jobs = new QList<OAIFreeStyleProject*>();
    m_jobs_isSet = false;
    primary_view = new OAIAllView();
    m_primary_view_isSet = false;
    quieting_down = false;
    m_quieting_down_isSet = false;
    slave_agent_port = 0;
    m_slave_agent_port_isSet = false;
    unlabeled_load = new OAIUnlabeledLoadStatistics();
    m_unlabeled_load_isSet = false;
    use_crumbs = false;
    m_use_crumbs_isSet = false;
    use_security = false;
    m_use_security_isSet = false;
    views = new QList<OAIAllView*>();
    m_views_isSet = false;
}

void
OAIHudson::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(assigned_labels != nullptr) { 
        auto arr = assigned_labels;
        for(auto o: *arr) { 
            delete o;
        }
        delete assigned_labels;
    }
    if(mode != nullptr) { 
        delete mode;
    }
    if(node_description != nullptr) { 
        delete node_description;
    }
    if(node_name != nullptr) { 
        delete node_name;
    }

    if(description != nullptr) { 
        delete description;
    }
    if(jobs != nullptr) { 
        auto arr = jobs;
        for(auto o: *arr) { 
            delete o;
        }
        delete jobs;
    }
    if(primary_view != nullptr) { 
        delete primary_view;
    }


    if(unlabeled_load != nullptr) { 
        delete unlabeled_load;
    }


    if(views != nullptr) { 
        auto arr = views;
        for(auto o: *arr) { 
            delete o;
        }
        delete views;
    }
}

OAIHudson*
OAIHudson::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIHudson::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&assigned_labels, pJson["assignedLabels"], "QList", "OAIHudsonassignedLabels");
    ::OpenAPI::setValue(&mode, pJson["mode"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_description, pJson["nodeDescription"], "QString", "QString");
    
    ::OpenAPI::setValue(&node_name, pJson["nodeName"], "QString", "QString");
    
    ::OpenAPI::setValue(&num_executors, pJson["numExecutors"], "qint32", "");
    
    ::OpenAPI::setValue(&description, pJson["description"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&jobs, pJson["jobs"], "QList", "OAIFreeStyleProject");
    ::OpenAPI::setValue(&primary_view, pJson["primaryView"], "OAIAllView", "OAIAllView");
    
    ::OpenAPI::setValue(&quieting_down, pJson["quietingDown"], "bool", "");
    
    ::OpenAPI::setValue(&slave_agent_port, pJson["slaveAgentPort"], "qint32", "");
    
    ::OpenAPI::setValue(&unlabeled_load, pJson["unlabeledLoad"], "OAIUnlabeledLoadStatistics", "OAIUnlabeledLoadStatistics");
    
    ::OpenAPI::setValue(&use_crumbs, pJson["useCrumbs"], "bool", "");
    
    ::OpenAPI::setValue(&use_security, pJson["useSecurity"], "bool", "");
    
    
    ::OpenAPI::setValue(&views, pJson["views"], "QList", "OAIAllView");
}

QString
OAIHudson::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIHudson::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(assigned_labels->size() > 0){
        toJsonArray((QList<void*>*)assigned_labels, obj, "assignedLabels", "OAIHudsonassignedLabels");
    }
    if(mode != nullptr && *mode != QString("")){
        toJsonValue(QString("mode"), mode, obj, QString("QString"));
    }
    if(node_description != nullptr && *node_description != QString("")){
        toJsonValue(QString("nodeDescription"), node_description, obj, QString("QString"));
    }
    if(node_name != nullptr && *node_name != QString("")){
        toJsonValue(QString("nodeName"), node_name, obj, QString("QString"));
    }
    if(m_num_executors_isSet){
        obj.insert("numExecutors", QJsonValue(num_executors));
    }
    if(description != nullptr && *description != QString("")){
        toJsonValue(QString("description"), description, obj, QString("QString"));
    }
    if(jobs->size() > 0){
        toJsonArray((QList<void*>*)jobs, obj, "jobs", "OAIFreeStyleProject");
    }
    if((primary_view != nullptr) && (primary_view->isSet())){
        toJsonValue(QString("primaryView"), primary_view, obj, QString("OAIAllView"));
    }
    if(m_quieting_down_isSet){
        obj.insert("quietingDown", QJsonValue(quieting_down));
    }
    if(m_slave_agent_port_isSet){
        obj.insert("slaveAgentPort", QJsonValue(slave_agent_port));
    }
    if((unlabeled_load != nullptr) && (unlabeled_load->isSet())){
        toJsonValue(QString("unlabeledLoad"), unlabeled_load, obj, QString("OAIUnlabeledLoadStatistics"));
    }
    if(m_use_crumbs_isSet){
        obj.insert("useCrumbs", QJsonValue(use_crumbs));
    }
    if(m_use_security_isSet){
        obj.insert("useSecurity", QJsonValue(use_security));
    }
    if(views->size() > 0){
        toJsonArray((QList<void*>*)views, obj, "views", "OAIAllView");
    }

    return obj;
}

QString*
OAIHudson::getClass() {
    return _class;
}
void
OAIHudson::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAIHudsonassignedLabels*>*
OAIHudson::getAssignedLabels() {
    return assigned_labels;
}
void
OAIHudson::setAssignedLabels(QList<OAIHudsonassignedLabels*>* assigned_labels) {
    this->assigned_labels = assigned_labels;
    this->m_assigned_labels_isSet = true;
}

QString*
OAIHudson::getMode() {
    return mode;
}
void
OAIHudson::setMode(QString* mode) {
    this->mode = mode;
    this->m_mode_isSet = true;
}

QString*
OAIHudson::getNodeDescription() {
    return node_description;
}
void
OAIHudson::setNodeDescription(QString* node_description) {
    this->node_description = node_description;
    this->m_node_description_isSet = true;
}

QString*
OAIHudson::getNodeName() {
    return node_name;
}
void
OAIHudson::setNodeName(QString* node_name) {
    this->node_name = node_name;
    this->m_node_name_isSet = true;
}

qint32
OAIHudson::getNumExecutors() {
    return num_executors;
}
void
OAIHudson::setNumExecutors(qint32 num_executors) {
    this->num_executors = num_executors;
    this->m_num_executors_isSet = true;
}

QString*
OAIHudson::getDescription() {
    return description;
}
void
OAIHudson::setDescription(QString* description) {
    this->description = description;
    this->m_description_isSet = true;
}

QList<OAIFreeStyleProject*>*
OAIHudson::getJobs() {
    return jobs;
}
void
OAIHudson::setJobs(QList<OAIFreeStyleProject*>* jobs) {
    this->jobs = jobs;
    this->m_jobs_isSet = true;
}

OAIAllView*
OAIHudson::getPrimaryView() {
    return primary_view;
}
void
OAIHudson::setPrimaryView(OAIAllView* primary_view) {
    this->primary_view = primary_view;
    this->m_primary_view_isSet = true;
}

bool
OAIHudson::isQuietingDown() {
    return quieting_down;
}
void
OAIHudson::setQuietingDown(bool quieting_down) {
    this->quieting_down = quieting_down;
    this->m_quieting_down_isSet = true;
}

qint32
OAIHudson::getSlaveAgentPort() {
    return slave_agent_port;
}
void
OAIHudson::setSlaveAgentPort(qint32 slave_agent_port) {
    this->slave_agent_port = slave_agent_port;
    this->m_slave_agent_port_isSet = true;
}

OAIUnlabeledLoadStatistics*
OAIHudson::getUnlabeledLoad() {
    return unlabeled_load;
}
void
OAIHudson::setUnlabeledLoad(OAIUnlabeledLoadStatistics* unlabeled_load) {
    this->unlabeled_load = unlabeled_load;
    this->m_unlabeled_load_isSet = true;
}

bool
OAIHudson::isUseCrumbs() {
    return use_crumbs;
}
void
OAIHudson::setUseCrumbs(bool use_crumbs) {
    this->use_crumbs = use_crumbs;
    this->m_use_crumbs_isSet = true;
}

bool
OAIHudson::isUseSecurity() {
    return use_security;
}
void
OAIHudson::setUseSecurity(bool use_security) {
    this->use_security = use_security;
    this->m_use_security_isSet = true;
}

QList<OAIAllView*>*
OAIHudson::getViews() {
    return views;
}
void
OAIHudson::setViews(QList<OAIAllView*>* views) {
    this->views = views;
    this->m_views_isSet = true;
}


bool
OAIHudson::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(assigned_labels->size() > 0){ isObjectUpdated = true; break;}
        if(mode != nullptr && *mode != QString("")){ isObjectUpdated = true; break;}
        if(node_description != nullptr && *node_description != QString("")){ isObjectUpdated = true; break;}
        if(node_name != nullptr && *node_name != QString("")){ isObjectUpdated = true; break;}
        if(m_num_executors_isSet){ isObjectUpdated = true; break;}
        if(description != nullptr && *description != QString("")){ isObjectUpdated = true; break;}
        if(jobs->size() > 0){ isObjectUpdated = true; break;}
        if(primary_view != nullptr && primary_view->isSet()){ isObjectUpdated = true; break;}
        if(m_quieting_down_isSet){ isObjectUpdated = true; break;}
        if(m_slave_agent_port_isSet){ isObjectUpdated = true; break;}
        if(unlabeled_load != nullptr && unlabeled_load->isSet()){ isObjectUpdated = true; break;}
        if(m_use_crumbs_isSet){ isObjectUpdated = true; break;}
        if(m_use_security_isSet){ isObjectUpdated = true; break;}
        if(views->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

