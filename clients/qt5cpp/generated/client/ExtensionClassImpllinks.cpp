/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "ExtensionClassImpllinks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

ExtensionClassImpllinks::ExtensionClassImpllinks(QString* json) {
    init();
    this->fromJson(*json);
}

ExtensionClassImpllinks::ExtensionClassImpllinks() {
    init();
}

ExtensionClassImpllinks::~ExtensionClassImpllinks() {
    this->cleanup();
}

void
ExtensionClassImpllinks::init() {
    self = new Link();
    _class = new QString("");
}

void
ExtensionClassImpllinks::cleanup() {
    
    if(self != nullptr) {
        delete self;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

ExtensionClassImpllinks*
ExtensionClassImpllinks::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
ExtensionClassImpllinks::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&self, pJson["self"], "Link", "Link");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
ExtensionClassImpllinks::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
ExtensionClassImpllinks::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("self"), self, obj, QString("Link"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

Link*
ExtensionClassImpllinks::getSelf() {
    return self;
}
void
ExtensionClassImpllinks::setSelf(Link* self) {
    this->self = self;
}

QString*
ExtensionClassImpllinks::getClass() {
    return _class;
}
void
ExtensionClassImpllinks::setClass(QString* _class) {
    this->_class = _class;
}


}
