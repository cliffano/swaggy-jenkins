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
 * OAIOrganisations.h
 *
 * 
 */

#ifndef OAIOrganisations_H_
#define OAIOrganisations_H_

#include <QJsonObject>


#include "OAIOAIOrganisation.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIOrganisations: public OAIObject {
public:
    OAIOrganisations();
    OAIOrganisations(QString json);
    ~OAIOrganisations();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIOrganisations* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIOrganisations_H_ */
