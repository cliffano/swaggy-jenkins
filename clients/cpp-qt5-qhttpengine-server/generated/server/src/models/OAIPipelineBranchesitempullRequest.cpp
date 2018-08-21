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


#include "OAIPipelineBranchesitempullRequest.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineBranchesitempullRequest::OAIPipelineBranchesitempullRequest(QString json) {
    this->fromJson(json);
}

OAIPipelineBranchesitempullRequest::OAIPipelineBranchesitempullRequest() {
    this->init();
}

OAIPipelineBranchesitempullRequest::~OAIPipelineBranchesitempullRequest() {
    
}

void
OAIPipelineBranchesitempullRequest::init() {
    m__links_isSet = false;
    m_author_isSet = false;
    m_id_isSet = false;
    m_title_isSet = false;
    m_url_isSet = false;
    m__class_isSet = false;
}

void
OAIPipelineBranchesitempullRequest::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineBranchesitempullRequest::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_links, json[QString("_links")]);
    
    ::OpenAPI::fromJsonValue(author, json[QString("author")]);
    
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(title, json[QString("title")]);
    
    ::OpenAPI::fromJsonValue(url, json[QString("url")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIPipelineBranchesitempullRequest::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineBranchesitempullRequest::asJsonObject() const {
    QJsonObject obj;
	if(_links.isSet()){
        obj.insert(QString("_links"), ::OpenAPI::toJsonValue(_links));
    }
	if(m_author_isSet){
        obj.insert(QString("author"), ::OpenAPI::toJsonValue(author));
    }
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_title_isSet){
        obj.insert(QString("title"), ::OpenAPI::toJsonValue(title));
    }
	if(m_url_isSet){
        obj.insert(QString("url"), ::OpenAPI::toJsonValue(url));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

OAIPipelineBranchesitempullRequestlinks
OAIPipelineBranchesitempullRequest::getLinks() const {
    return _links;
}
void
OAIPipelineBranchesitempullRequest::setLinks(const OAIPipelineBranchesitempullRequestlinks &_links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

QString
OAIPipelineBranchesitempullRequest::getAuthor() const {
    return author;
}
void
OAIPipelineBranchesitempullRequest::setAuthor(const QString &author) {
    this->author = author;
    this->m_author_isSet = true;
}

QString
OAIPipelineBranchesitempullRequest::getId() const {
    return id;
}
void
OAIPipelineBranchesitempullRequest::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString
OAIPipelineBranchesitempullRequest::getTitle() const {
    return title;
}
void
OAIPipelineBranchesitempullRequest::setTitle(const QString &title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString
OAIPipelineBranchesitempullRequest::getUrl() const {
    return url;
}
void
OAIPipelineBranchesitempullRequest::setUrl(const QString &url) {
    this->url = url;
    this->m_url_isSet = true;
}

QString
OAIPipelineBranchesitempullRequest::getClass() const {
    return _class;
}
void
OAIPipelineBranchesitempullRequest::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIPipelineBranchesitempullRequest::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(_links.isSet()){ isObjectUpdated = true; break;}
    
        if(m_author_isSet){ isObjectUpdated = true; break;}
    
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_title_isSet){ isObjectUpdated = true; break;}
    
        if(m_url_isSet){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

