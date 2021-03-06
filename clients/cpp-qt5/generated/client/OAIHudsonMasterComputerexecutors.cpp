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


#include "OAIHudsonMasterComputerexecutors.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIHudsonMasterComputerexecutors::OAIHudsonMasterComputerexecutors(QString json) {
    init();
    this->fromJson(json);
}

OAIHudsonMasterComputerexecutors::OAIHudsonMasterComputerexecutors() {
    init();
}

OAIHudsonMasterComputerexecutors::~OAIHudsonMasterComputerexecutors() {
    this->cleanup();
}

void
OAIHudsonMasterComputerexecutors::init() {
    current_executable = new OAIFreeStyleBuild();
    m_current_executable_isSet = false;
    idle = false;
    m_idle_isSet = false;
    likely_stuck = false;
    m_likely_stuck_isSet = false;
    number = 0;
    m_number_isSet = false;
    progress = 0;
    m_progress_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIHudsonMasterComputerexecutors::cleanup() {
    if(current_executable != nullptr) { 
        delete current_executable;
    }




    if(_class != nullptr) { 
        delete _class;
    }
}

OAIHudsonMasterComputerexecutors*
OAIHudsonMasterComputerexecutors::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIHudsonMasterComputerexecutors::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&current_executable, pJson["currentExecutable"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
    ::OpenAPI::setValue(&idle, pJson["idle"], "bool", "");
    
    ::OpenAPI::setValue(&likely_stuck, pJson["likelyStuck"], "bool", "");
    
    ::OpenAPI::setValue(&number, pJson["number"], "qint32", "");
    
    ::OpenAPI::setValue(&progress, pJson["progress"], "qint32", "");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIHudsonMasterComputerexecutors::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIHudsonMasterComputerexecutors::asJsonObject() {
    QJsonObject obj;
    if((current_executable != nullptr) && (current_executable->isSet())){
        toJsonValue(QString("currentExecutable"), current_executable, obj, QString("OAIFreeStyleBuild"));
    }
    if(m_idle_isSet){
        obj.insert("idle", QJsonValue(idle));
    }
    if(m_likely_stuck_isSet){
        obj.insert("likelyStuck", QJsonValue(likely_stuck));
    }
    if(m_number_isSet){
        obj.insert("number", QJsonValue(number));
    }
    if(m_progress_isSet){
        obj.insert("progress", QJsonValue(progress));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

OAIFreeStyleBuild*
OAIHudsonMasterComputerexecutors::getCurrentExecutable() {
    return current_executable;
}
void
OAIHudsonMasterComputerexecutors::setCurrentExecutable(OAIFreeStyleBuild* current_executable) {
    this->current_executable = current_executable;
    this->m_current_executable_isSet = true;
}

bool
OAIHudsonMasterComputerexecutors::isIdle() {
    return idle;
}
void
OAIHudsonMasterComputerexecutors::setIdle(bool idle) {
    this->idle = idle;
    this->m_idle_isSet = true;
}

bool
OAIHudsonMasterComputerexecutors::isLikelyStuck() {
    return likely_stuck;
}
void
OAIHudsonMasterComputerexecutors::setLikelyStuck(bool likely_stuck) {
    this->likely_stuck = likely_stuck;
    this->m_likely_stuck_isSet = true;
}

qint32
OAIHudsonMasterComputerexecutors::getNumber() {
    return number;
}
void
OAIHudsonMasterComputerexecutors::setNumber(qint32 number) {
    this->number = number;
    this->m_number_isSet = true;
}

qint32
OAIHudsonMasterComputerexecutors::getProgress() {
    return progress;
}
void
OAIHudsonMasterComputerexecutors::setProgress(qint32 progress) {
    this->progress = progress;
    this->m_progress_isSet = true;
}

QString*
OAIHudsonMasterComputerexecutors::getClass() {
    return _class;
}
void
OAIHudsonMasterComputerexecutors::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIHudsonMasterComputerexecutors::isSet(){
    bool isObjectUpdated = false;
    do{
        if(current_executable != nullptr && current_executable->isSet()){ isObjectUpdated = true; break;}
        if(m_idle_isSet){ isObjectUpdated = true; break;}
        if(m_likely_stuck_isSet){ isObjectUpdated = true; break;}
        if(m_number_isSet){ isObjectUpdated = true; break;}
        if(m_progress_isSet){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

