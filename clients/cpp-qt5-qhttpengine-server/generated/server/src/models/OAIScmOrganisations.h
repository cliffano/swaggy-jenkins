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
 * OAIScmOrganisations.h
 *
 * 
 */

#ifndef OAIScmOrganisations_H
#define OAIScmOrganisations_H

#include <QJsonObject>


#include "OAIGithubOrganization.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIScmOrganisations: public OAIObject {
public:
    OAIScmOrganisations();
    OAIScmOrganisations(QString json);
    ~OAIScmOrganisations() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    virtual bool isSet() const override;

private:
};

}

#endif // OAIScmOrganisations_H
