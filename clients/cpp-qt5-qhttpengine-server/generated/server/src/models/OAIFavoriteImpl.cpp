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


#include "OAIFavoriteImpl.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIFavoriteImpl::OAIFavoriteImpl(QString json) {
    this->fromJson(json);
}

OAIFavoriteImpl::OAIFavoriteImpl() {
    this->init();
}

OAIFavoriteImpl::~OAIFavoriteImpl() {
    
}

void
OAIFavoriteImpl::init() {
    m__class_isSet = false;
    m__links_isSet = false;
    m_item_isSet = false;
}

void
OAIFavoriteImpl::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIFavoriteImpl::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(_links, json[QString("_links")]);
    
    ::OpenAPI::fromJsonValue(item, json[QString("item")]);
    
}

QString
OAIFavoriteImpl::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIFavoriteImpl::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(_links.isSet()){
        obj.insert(QString("_links"), ::OpenAPI::toJsonValue(_links));
    }
	if(item.isSet()){
        obj.insert(QString("item"), ::OpenAPI::toJsonValue(item));
    }
    return obj;
}

QString
OAIFavoriteImpl::getClass() const {
    return _class;
}
void
OAIFavoriteImpl::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

OAIFavoriteImpllinks
OAIFavoriteImpl::getLinks() const {
    return _links;
}
void
OAIFavoriteImpl::setLinks(const OAIFavoriteImpllinks &_links) {
    this->_links = _links;
    this->m__links_isSet = true;
}

OAIPipelineImpl
OAIFavoriteImpl::getItem() const {
    return item;
}
void
OAIFavoriteImpl::setItem(const OAIPipelineImpl &item) {
    this->item = item;
    this->m_item_isSet = true;
}


bool
OAIFavoriteImpl::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(_links.isSet()){ isObjectUpdated = true; break;}
    
        if(item.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
