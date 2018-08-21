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
 * OAIPipelineBranches.h
 *
 * 
 */

#ifndef OAIPipelineBranches_H_
#define OAIPipelineBranches_H_

#include <QJsonObject>


#include "OAIOAIPipelineBranchesitem.h"
#include <QList>

#include "OAIObject.h"

namespace OpenAPI {

class OAIPipelineBranches: public OAIObject {
public:
    OAIPipelineBranches();
    OAIPipelineBranches(QString json);
    ~OAIPipelineBranches();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIPipelineBranches* fromJson(QString jsonString) override;


    virtual bool isSet() override;

private:
};

}

#endif /* OAIPipelineBranches_H_ */
