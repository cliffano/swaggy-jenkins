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

/*
 * OAIDefaultCrumbIssuer.h
 *
 * 
 */

#ifndef OAIDefaultCrumbIssuer_H
#define OAIDefaultCrumbIssuer_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIDefaultCrumbIssuer: public OAIObject {
public:
    OAIDefaultCrumbIssuer();
    OAIDefaultCrumbIssuer(QString json);
    ~OAIDefaultCrumbIssuer() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QString getCrumb() const;
    void setCrumb(const QString &crumb);

    QString getCrumbRequestField() const;
    void setCrumbRequestField(const QString &crumb_request_field);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QString crumb;
    bool m_crumb_isSet;

    QString crumb_request_field;
    bool m_crumb_request_field_isSet;

};

}

#endif // OAIDefaultCrumbIssuer_H