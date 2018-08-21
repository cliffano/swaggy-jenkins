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


#include "OAIClockDifference.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIClockDifference::OAIClockDifference(QString json) {
    init();
    this->fromJson(json);
}

OAIClockDifference::OAIClockDifference() {
    init();
}

OAIClockDifference::~OAIClockDifference() {
    this->cleanup();
}

void
OAIClockDifference::init() {
    _class = new QString("");
    m__class_isSet = false;
    diff = 0;
    m_diff_isSet = false;
}

void
OAIClockDifference::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }

}

OAIClockDifference*
OAIClockDifference::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIClockDifference::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&diff, pJson["diff"], "qint32", "");
    
}

QString
OAIClockDifference::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIClockDifference::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(m_diff_isSet){
        obj.insert("diff", QJsonValue(diff));
    }

    return obj;
}

QString*
OAIClockDifference::getClass() {
    return _class;
}
void
OAIClockDifference::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

qint32
OAIClockDifference::getDiff() {
    return diff;
}
void
OAIClockDifference::setDiff(qint32 diff) {
    this->diff = diff;
    this->m_diff_isSet = true;
}


bool
OAIClockDifference::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(m_diff_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

