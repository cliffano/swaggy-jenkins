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


#include "OAIHudsonassignedLabels.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIHudsonassignedLabels::OAIHudsonassignedLabels(QString json) {
    init();
    this->fromJson(json);
}

OAIHudsonassignedLabels::OAIHudsonassignedLabels() {
    init();
}

OAIHudsonassignedLabels::~OAIHudsonassignedLabels() {
    this->cleanup();
}

void
OAIHudsonassignedLabels::init() {
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIHudsonassignedLabels::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
}

OAIHudsonassignedLabels*
OAIHudsonassignedLabels::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIHudsonassignedLabels::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIHudsonassignedLabels::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIHudsonassignedLabels::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIHudsonassignedLabels::getClass() {
    return _class;
}
void
OAIHudsonassignedLabels::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIHudsonassignedLabels::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

