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
 * OAINullSCM.h
 *
 * 
 */

#ifndef OAINullSCM_H
#define OAINullSCM_H

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAINullSCM: public OAIObject {
public:
    OAINullSCM();
    OAINullSCM(QString json);
    ~OAINullSCM() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

};

}

#endif // OAINullSCM_H
