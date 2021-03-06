/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIBranchImpl.h
 *
 * 
 */

#ifndef OAIBranchImpl_H
#define OAIBranchImpl_H

#include <QJsonObject>


#include "OAIBranchImpllinks.h"
#include "OAIBranchImplpermissions.h"
#include "OAIPipelineRunImpl.h"
#include "OAIStringParameterDefinition.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIBranchImpl: public OAIObject {
public:
    OAIBranchImpl();
    OAIBranchImpl(QString json);
    ~OAIBranchImpl() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    QString getDisplayName() const;
    void setDisplayName(const QString &display_name);

    qint32 getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis);

    QString getFullDisplayName() const;
    void setFullDisplayName(const QString &full_display_name);

    QString getFullName() const;
    void setFullName(const QString &full_name);

    QString getName() const;
    void setName(const QString &name);

    QString getOrganization() const;
    void setOrganization(const QString &organization);

    QList<OAIStringParameterDefinition> getParameters() const;
    void setParameters(const QList<OAIStringParameterDefinition> &parameters);

    OAIBranchImplpermissions getPermissions() const;
    void setPermissions(const OAIBranchImplpermissions &permissions);

    qint32 getWeatherScore() const;
    void setWeatherScore(const qint32 &weather_score);

    QString getPullRequest() const;
    void setPullRequest(const QString &pull_request);

    OAIBranchImpllinks getLinks() const;
    void setLinks(const OAIBranchImpllinks &_links);

    OAIPipelineRunImpl getLatestRun() const;
    void setLatestRun(const OAIPipelineRunImpl &latest_run);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    QString display_name;
    bool m_display_name_isSet;

    qint32 estimated_duration_in_millis;
    bool m_estimated_duration_in_millis_isSet;

    QString full_display_name;
    bool m_full_display_name_isSet;

    QString full_name;
    bool m_full_name_isSet;

    QString name;
    bool m_name_isSet;

    QString organization;
    bool m_organization_isSet;

    QList<OAIStringParameterDefinition> parameters;
    bool m_parameters_isSet;

    OAIBranchImplpermissions permissions;
    bool m_permissions_isSet;

    qint32 weather_score;
    bool m_weather_score_isSet;

    QString pull_request;
    bool m_pull_request_isSet;

    OAIBranchImpllinks _links;
    bool m__links_isSet;

    OAIPipelineRunImpl latest_run;
    bool m_latest_run_isSet;

};

}

#endif // OAIBranchImpl_H
