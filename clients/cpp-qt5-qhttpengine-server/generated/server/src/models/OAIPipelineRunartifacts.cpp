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


#include "OAIPipelineRunartifacts.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineRunartifacts::OAIPipelineRunartifacts(QString json) {
    this->fromJson(json);
}

OAIPipelineRunartifacts::OAIPipelineRunartifacts() {
    this->init();
}

OAIPipelineRunartifacts::~OAIPipelineRunartifacts() {
    
}

void
OAIPipelineRunartifacts::init() {
    m_name_isSet = false;
    m_size_isSet = false;
    m_url_isSet = false;
    m__class_isSet = false;
}

void
OAIPipelineRunartifacts::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineRunartifacts::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(size, json[QString("size")]);
    
    ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIPipelineRunartifacts::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineRunartifacts::asJsonObject() const {
    QJsonObject obj;
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_size_isSet){
        obj.insert(QString("size"), ::OpenAPI::toJsonValue(size));
    }
	if(m_url_isSet){
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

QString
OAIPipelineRunartifacts::getName() const {
    return name;
}
void
OAIPipelineRunartifacts::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

qint32
OAIPipelineRunartifacts::getSize() const {
    return size;
}
void
OAIPipelineRunartifacts::setSize(const qint32 &size) {
    this->size = size;
    this->m_size_isSet = true;
}

QString
OAIPipelineRunartifacts::getUrl() const {
    return url;
}
void
OAIPipelineRunartifacts::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

QString
OAIPipelineRunartifacts::getClass() const {
    return _class;
}
void
OAIPipelineRunartifacts::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIPipelineRunartifacts::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_size_isSet){ isObjectUpdated = true; break;}
    
        if(m_url_isSet){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

