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


#include "OAIScmOrganisations.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIScmOrganisations::OAIScmOrganisations(QString json) {
    init();
    this->fromJson(json);
}

OAIScmOrganisations::OAIScmOrganisations() {
    init();
}

OAIScmOrganisations::~OAIScmOrganisations() {
    this->cleanup();
}

void
OAIScmOrganisations::init() {
}

void
OAIScmOrganisations::cleanup() {
}

OAIScmOrganisations*
OAIScmOrganisations::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIScmOrganisations::fromJsonObject(QJsonObject pJson) {
}

QString
OAIScmOrganisations::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIScmOrganisations::asJsonObject() {
    QJsonObject obj;

    return obj;
}


bool
OAIScmOrganisations::isSet(){
    bool isObjectUpdated = false;
    do{
    }while(false);
    return isObjectUpdated;
}
}

