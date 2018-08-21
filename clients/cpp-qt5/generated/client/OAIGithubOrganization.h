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
 * OAIGithubOrganization.h
 *
 * 
 */

#ifndef OAIGithubOrganization_H_
#define OAIGithubOrganization_H_

#include <QJsonObject>


#include "OAIOAIGithubOrganizationlinks.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIGithubOrganization: public OAIObject {
public:
    OAIGithubOrganization();
    OAIGithubOrganization(QString json);
    ~OAIGithubOrganization();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIGithubOrganization* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    OAIGithubOrganizationlinks* getLinks();
    void setLinks(OAIGithubOrganizationlinks* _links);

    bool isJenkinsOrganizationPipeline();
    void setJenkinsOrganizationPipeline(bool jenkins_organization_pipeline);

    QString* getName();
    void setName(QString* name);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    OAIGithubOrganizationlinks* _links;
    bool m__links_isSet;

    bool jenkins_organization_pipeline;
    bool m_jenkins_organization_pipeline_isSet;

    QString* name;
    bool m_name_isSet;

};

}

#endif /* OAIGithubOrganization_H_ */
