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


#include "OAIStringParameterValue.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIStringParameterValue::OAIStringParameterValue(QString json) {
    init();
    this->fromJson(json);
}

OAIStringParameterValue::OAIStringParameterValue() {
    init();
}

OAIStringParameterValue::~OAIStringParameterValue() {
    this->cleanup();
}

void
OAIStringParameterValue::init() {
    _class = new QString("");
    m__class_isSet = false;
    name = new QString("");
    m_name_isSet = false;
    value = new QString("");
    m_value_isSet = false;
}

void
OAIStringParameterValue::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(name != nullptr) { 
        delete name;
    }
    if(value != nullptr) { 
        delete value;
    }
}

OAIStringParameterValue*
OAIStringParameterValue::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIStringParameterValue::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&name, pJson["name"], "QString", "QString");
    
    ::OpenAPI::setValue(&value, pJson["value"], "QString", "QString");
    
}

QString
OAIStringParameterValue::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIStringParameterValue::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(name != nullptr && *name != QString("")){
        toJsonValue(QString("name"), name, obj, QString("QString"));
    }
    if(value != nullptr && *value != QString("")){
        toJsonValue(QString("value"), value, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIStringParameterValue::getClass() {
    return _class;
}
void
OAIStringParameterValue::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString*
OAIStringParameterValue::getName() {
    return name;
}
void
OAIStringParameterValue::setName(QString* name) {
    this->name = name;
    this->m_name_isSet = true;
}

QString*
OAIStringParameterValue::getValue() {
    return value;
}
void
OAIStringParameterValue::setValue(QString* value) {
    this->value = value;
    this->m_value_isSet = true;
}


bool
OAIStringParameterValue::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(name != nullptr && *name != QString("")){ isObjectUpdated = true; break;}
        if(value != nullptr && *value != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

