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


#include "OAIGithubScm.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubScm::OAIGithubScm(QString json) {
    this->fromJson(json);
}

OAIGithubScm::OAIGithubScm() {
    this->init();
}

OAIGithubScm::~OAIGithubScm() {
    
}

void
OAIGithubScm::init() {
    m__class_isSet = false;
    m__links_isSet = false;
    m_credential_id_isSet = false;
    m_id_isSet = false;
    m_uri_isSet = false;
}

void
OAIGithubScm::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIGithubScm::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(_links, json[QString("_links")]);
    
    ::OpenAPI::fromJsonValue(credential_id, json[QString("credentialId")]);
    
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(uri, json[QString("uri")]);
    
}

QString
OAIGithubScm::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubScm::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(_links.isSet()){
        obj.insert(QString("_links"), ::OpenAPI::toJsonValue(_links));
    }
	if(m_credential_id_isSet){
        obj.insert(QString("credentialId"), ::OpenAPI::toJsonValue(credential_id));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_uri_isSet){
        obj.insert(QString("uri"), ::OpenAPI::toJsonValue(uri));
    }
    return obj;
}

QString
OAIGithubScm::getClass() const {
    return _class;
}
void
OAIGithubScm::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIGithubScmlinks
OAIGithubScm::getLinks() const {
    return _links;
}
void
OAIGithubScm::setLinks(const OAIGithubScmlinks &_links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

QString
OAIGithubScm::getCredentialId() const {
    return credential_id;
}
void
OAIGithubScm::setCredentialId(const QString &credential_id) {
    this->credential_id = credential_id;
    this->m_credential_id_isSet = true;
}

QString
OAIGithubScm::getId() const {
    return id;
}
void
OAIGithubScm::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString
OAIGithubScm::getUri() const {
    return uri;
}
void
OAIGithubScm::setUri(const QString &uri) {
    this->uri = uri;
    this->m_uri_isSet = true;
}


bool
OAIGithubScm::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(_links.isSet()){ isObjectUpdated = true; break;}
    
        if(m_credential_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_uri_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

