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


#include "OAIGithubRepositories.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIGithubRepositories::OAIGithubRepositories(QString json) {
    init();
    this->fromJson(json);
}

OAIGithubRepositories::OAIGithubRepositories() {
    init();
}

OAIGithubRepositories::~OAIGithubRepositories() {
    this->cleanup();
}

void
OAIGithubRepositories::init() {
    _class = new QString("");
    m__class_isSet = false;
    _links = new OAIGithubRepositorieslinks();
    m__links_isSet = false;
    items = new QList<OAIGithubRepository*>();
    m_items_isSet = false;
    last_page = 0;
    m_last_page_isSet = false;
    next_page = 0;
    m_next_page_isSet = false;
    page_size = 0;
    m_page_size_isSet = false;
}

void
OAIGithubRepositories::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(_links != nullptr) { 
        delete _links;
    }
    if(items != nullptr) { 
        auto arr = items;
        for(auto o: *arr) { 
            delete o;
        }
        delete items;
    }



}

OAIGithubRepositories*
OAIGithubRepositories::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIGithubRepositories::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    ::OpenAPI::setValue(&_links, pJson["_links"], "OAIGithubRepositorieslinks", "OAIGithubRepositorieslinks");
    
    
    ::OpenAPI::setValue(&items, pJson["items"], "QList", "OAIGithubRepository");
    ::OpenAPI::setValue(&last_page, pJson["lastPage"], "qint32", "");
    
    ::OpenAPI::setValue(&next_page, pJson["nextPage"], "qint32", "");
    
    ::OpenAPI::setValue(&page_size, pJson["pageSize"], "qint32", "");
    
}

QString
OAIGithubRepositories::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIGithubRepositories::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if((_links != nullptr) && (_links->isSet())){
        toJsonValue(QString("_links"), _links, obj, QString("OAIGithubRepositorieslinks"));
    }
    if(items->size() > 0){
        toJsonArray((QList<void*>*)items, obj, "items", "OAIGithubRepository");
    }
    if(m_last_page_isSet){
        obj.insert("lastPage", QJsonValue(last_page));
    }
    if(m_next_page_isSet){
        obj.insert("nextPage", QJsonValue(next_page));
    }
    if(m_page_size_isSet){
        obj.insert("pageSize", QJsonValue(page_size));
    }

    return obj;
}

QString*
OAIGithubRepositories::getClass() {
    return _class;
}
void
OAIGithubRepositories::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIGithubRepositorieslinks*
OAIGithubRepositories::getLinks() {
    return _links;
}
void
OAIGithubRepositories::setLinks(OAIGithubRepositorieslinks* _links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

QList<OAIGithubRepository*>*
OAIGithubRepositories::getItems() {
    return items;
}
void
OAIGithubRepositories::setItems(QList<OAIGithubRepository*>* items) {
    this->items = items;
    this->m_items_isSet = true;
}

qint32
OAIGithubRepositories::getLastPage() {
    return last_page;
}
void
OAIGithubRepositories::setLastPage(qint32 last_page) {
    this->last_page = last_page;
    this->m_last_page_isSet = true;
}

qint32
OAIGithubRepositories::getNextPage() {
    return next_page;
}
void
OAIGithubRepositories::setNextPage(qint32 next_page) {
    this->next_page = next_page;
    this->m_next_page_isSet = true;
}

qint32
OAIGithubRepositories::getPageSize() {
    return page_size;
}
void
OAIGithubRepositories::setPageSize(qint32 page_size) {
    this->page_size = page_size;
    this->m_page_size_isSet = true;
}


bool
OAIGithubRepositories::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(_links != nullptr && _links->isSet()){ isObjectUpdated = true; break;}
        if(items->size() > 0){ isObjectUpdated = true; break;}
        if(m_last_page_isSet){ isObjectUpdated = true; break;}
        if(m_next_page_isSet){ isObjectUpdated = true; break;}
        if(m_page_size_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

