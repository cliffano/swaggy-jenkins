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


#include "GithubScmlinks.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

GithubScmlinks::GithubScmlinks(QString* json) {
    init();
    this->fromJson(*json);
}

GithubScmlinks::GithubScmlinks() {
    init();
}

GithubScmlinks::~GithubScmlinks() {
    this->cleanup();
}

void
GithubScmlinks::init() {
    self = new Link();
    _class = new QString("");
}

void
GithubScmlinks::cleanup() {
    
    if(self != nullptr) {
        delete self;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

GithubScmlinks*
GithubScmlinks::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
GithubScmlinks::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&self, pJson["self"], "Link", "Link");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
GithubScmlinks::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
GithubScmlinks::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("self"), self, obj, QString("Link"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

Link*
GithubScmlinks::getSelf() {
    return self;
}
void
GithubScmlinks::setSelf(Link* self) {
    this->self = self;
}

QString*
GithubScmlinks::getClass() {
    return _class;
}
void
GithubScmlinks::setClass(QString* _class) {
    this->_class = _class;
}


}
