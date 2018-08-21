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

#ifndef OAIScmOrganisations_H_
#define OAIScmOrganisations_H_

#include <QJsonObject>


#include "OAIOAIGithubOrganization.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIScmOrganisations: public OAIObject {
public:
    OAIScmOrganisations();
    OAIScmOrganisations(QString json);
    ~OAIScmOrganisations();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIScmOrganisations* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIScmOrganisations_H_ */
