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
    init();
    this->fromJson(json);
}

OAIPipelineBranchesitempullRequest::OAIPipelineBranchesitempullRequest() {
    init();
}

OAIPipelineBranchesitempullRequest::~OAIPipelineBranchesitempullRequest() {
    this->cleanup();
}

void
OAIPipelineBranchesitempullRequest::init() {
    _links = new OAIPipelineBranchesitempullRequestlinks();
    m__links_isSet = false;
    author = new QString("");
    m_author_isSet = false;
    id = new QString("");
    m_id_isSet = false;
    title = new QString("");
    m_title_isSet = false;
    url = new QString("");
    m_url_isSet = false;
    _class = new QString("");
    m__class_isSet = false;
}

void
OAIPipelineBranchesitempullRequest::cleanup() {
    if(_links != nullptr) { 
        delete _links;
    }
    if(author != nullptr) { 
        delete author;
    }
    if(id != nullptr) { 
        delete id;
    }
    if(title != nullptr) { 
        delete title;
    }
    if(url != nullptr) { 
        delete url;
    }
    if(_class != nullptr) { 
        delete _class;
    }
}

OAIPipelineBranchesitempullRequest*
OAIPipelineBranchesitempullRequest::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIPipelineBranchesitempullRequest::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_links, pJson["_links"], "OAIPipelineBranchesitempullRequestlinks", "OAIPipelineBranchesitempullRequestlinks");
    
    ::OpenAPI::setValue(&author, pJson["author"], "QString", "QString");
    
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&title, pJson["title"], "QString", "QString");
    
    ::OpenAPI::setValue(&url, pJson["url"], "QString", "QString");
    
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
}

QString
OAIPipelineBranchesitempullRequest::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineBranchesitempullRequest::asJsonObject() {
    QJsonObject obj;
    if((_links != nullptr) && (_links->isSet())){
        toJsonValue(QString("_links"), _links, obj, QString("OAIPipelineBranchesitempullRequestlinks"));
    }
    if(author != nullptr && *author != QString("")){
        toJsonValue(QString("author"), author, obj, QString("QString"));
    }
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(title != nullptr && *title != QString("")){
        toJsonValue(QString("title"), title, obj, QString("QString"));
    }
    if(url != nullptr && *url != QString("")){
        toJsonValue(QString("url"), url, obj, QString("QString"));
    }
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }

    return obj;
}

OAIPipelineBranchesitempullRequestlinks*
OAIPipelineBranchesitempullRequest::getLinks() {
    return _links;
}
void
OAIPipelineBranchesitempullRequest::setLinks(OAIPipelineBranchesitempullRequestlinks* _links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

QString*
OAIPipelineBranchesitempullRequest::getAuthor() {
    return author;
}
void
OAIPipelineBranchesitempullRequest::setAuthor(QString* author) {
    this->author = author;
    this->m_author_isSet = true;
}

QString*
OAIPipelineBranchesitempullRequest::getId() {
    return id;
}
void
OAIPipelineBranchesitempullRequest::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIPipelineBranchesitempullRequest::getTitle() {
    return title;
}
void
OAIPipelineBranchesitempullRequest::setTitle(QString* title) {
    this->title = title;
    this->m_title_isSet = true;
}

QString*
OAIPipelineBranchesitempullRequest::getUrl() {
    return url;
}
void
OAIPipelineBranchesitempullRequest::setUrl(QString* url) {
    this->url = url;
    this->m_url_isSet = true;
}

QString*
OAIPipelineBranchesitempullRequest::getClass() {
    return _class;
}
void
OAIPipelineBranchesitempullRequest::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIPipelineBranchesitempullRequest::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_links != nullptr && _links->isSet()){ isObjectUpdated = true; break;}
        if(author != nullptr && *author != QString("")){ isObjectUpdated = true; break;}
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(title != nullptr && *title != QString("")){ isObjectUpdated = true; break;}
        if(url != nullptr && *url != QString("")){ isObjectUpdated = true; break;}
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

