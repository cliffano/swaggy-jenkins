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


#include "OAIGithubRepositorylinks.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubRepositorylinks::OAIGithubRepositorylinks(QString json) {
    init();
    this->fromJson(json);
}

OAIGithubRepositorylinks::OAIGithubRepositorylinks() {
    init();
}

OAIGithubRepositorylinks::~OAIGithubRepositorylinks() {
    this->cleanup();
}

void
OAIGithubRepositorylinks::init() {
    self = new OAILink();
    m_self_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIGithubRepositorylinks::cleanup() {
    if(self != nullptr) { 
        delete self;
    }
    if(_class != nullptr) { 
        delete _class;
    }
}

OAIGithubRepositorylinks*
OAIGithubRepositorylinks::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIGithubRepositorylinks::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&self, pJson["self"], "OAILink", "OAILink");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIGithubRepositorylinks::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubRepositorylinks::asJsonObject() {
    QJsonObject obj;
    if((self != nullptr) && (self->isSet())){
        toJsonValue(QString("self"), self, obj, QString("OAILink"));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

OAILink*
OAIGithubRepositorylinks::getSelf() {
    return self;
}
void
OAIGithubRepositorylinks::setSelf(OAILink* self) {
    this->self = self;
    this->m_self_isSet = true;
}

QString*
OAIGithubRepositorylinks::getClass() {
    return _class;
}
void
OAIGithubRepositorylinks::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIGithubRepositorylinks::isSet(){
    bool isObjectUpdated = false;
    do{
        if(self != nullptr && self->isSet()){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

