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


#include "OAIPipelineStepImpllinks.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineStepImpllinks::OAIPipelineStepImpllinks(QString json) {
    init();
    this->fromJson(json);
}

OAIPipelineStepImpllinks::OAIPipelineStepImpllinks() {
    init();
}

OAIPipelineStepImpllinks::~OAIPipelineStepImpllinks() {
    this->cleanup();
}

void
OAIPipelineStepImpllinks::init() {
    self = new OAILink();
    m_self_isSet = false;
    actions = new OAILink();
    m_actions_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIPipelineStepImpllinks::cleanup() {
    if(self != nullptr) { 
        delete self;
    }
    if(actions != nullptr) { 
        delete actions;
    }
    if(_class != nullptr) { 
        delete _class;
    }
}

OAIPipelineStepImpllinks*
OAIPipelineStepImpllinks::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIPipelineStepImpllinks::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&self, pJson["self"], "OAILink", "OAILink");
    
    ::OpenAPI::setValue(&actions, pJson["actions"], "OAILink", "OAILink");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIPipelineStepImpllinks::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineStepImpllinks::asJsonObject() {
    QJsonObject obj;
    if((self != nullptr) && (self->isSet())){
        toJsonValue(QString("self"), self, obj, QString("OAILink"));
    }
    if((actions != nullptr) && (actions->isSet())){
        toJsonValue(QString("actions"), actions, obj, QString("OAILink"));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

OAILink*
OAIPipelineStepImpllinks::getSelf() {
    return self;
}
void
OAIPipelineStepImpllinks::setSelf(OAILink* self) {
    this->self = self;
    this->m_self_isSet = true;
}

OAILink*
OAIPipelineStepImpllinks::getActions() {
    return actions;
}
void
OAIPipelineStepImpllinks::setActions(OAILink* actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

QString*
OAIPipelineStepImpllinks::getClass() {
    return _class;
}
void
OAIPipelineStepImpllinks::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIPipelineStepImpllinks::isSet(){
    bool isObjectUpdated = false;
    do{
        if(self != nullptr && self->isSet()){ isObjectUpdated = true; break;}
        if(actions != nullptr && actions->isSet()){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

