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
 * OAIFreeStyleBuild.h
 *
 * 
 */

#ifndef OAIFreeStyleBuild_H_
#define OAIFreeStyleBuild_H_

#include <QJsonObject>


#include "OAIOAICauseAction.h"
#include "OAIOAIEmptyChangeLogSet.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIFreeStyleBuild: public OAIObject {
public:
    OAIFreeStyleBuild();
    OAIFreeStyleBuild(QString json);
    ~OAIFreeStyleBuild();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIFreeStyleBuild* fromJson(QString jsonString) override;

    QString* getClass();
    void setClass(QString* _class);

    qint32 getNumber();
    void setNumber(qint32 number);

    QString* getUrl();
    void setUrl(QString* url);

    QList<OAICauseAction*>* getActions();
    void setActions(QList<OAICauseAction*>* actions);

    bool isBuilding();
    void setBuilding(bool building);

    QString* getDescription();
    void setDescription(QString* description);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    qint32 getDuration();
    void setDuration(qint32 duration);

    qint32 getEstimatedDuration();
    void setEstimatedDuration(qint32 estimated_duration);

    QString* getExecutor();
    void setExecutor(QString* executor);

    QString* getFullDisplayName();
    void setFullDisplayName(QString* full_display_name);

    QString* getId();
    void setId(QString* id);

    bool isKeepLog();
    void setKeepLog(bool keep_log);

    qint32 getQueueId();
    void setQueueId(qint32 queue_id);

    QString* getResult();
    void setResult(QString* result);

    qint32 getTimestamp();
    void setTimestamp(qint32 timestamp);

    QString* getBuiltOn();
    void setBuiltOn(QString* built_on);

    OAIEmptyChangeLogSet* getChangeSet();
    void setChangeSet(OAIEmptyChangeLogSet* change_set);


    virtual bool isSet() override;

private:
    QString* _class;
    bool m__class_isSet;

    qint32 number;
    bool m_number_isSet;

    QString* url;
    bool m_url_isSet;

    QList<OAICauseAction*>* actions;
    bool m_actions_isSet;

    bool building;
    bool m_building_isSet;

    QString* description;
    bool m_description_isSet;

    QString* display_name;
    bool m_display_name_isSet;

    qint32 duration;
    bool m_duration_isSet;

    qint32 estimated_duration;
    bool m_estimated_duration_isSet;

    QString* executor;
    bool m_executor_isSet;

    QString* full_display_name;
    bool m_full_display_name_isSet;

    QString* id;
    bool m_id_isSet;

    bool keep_log;
    bool m_keep_log_isSet;

    qint32 queue_id;
    bool m_queue_id_isSet;

    QString* result;
    bool m_result_isSet;

    qint32 timestamp;
    bool m_timestamp_isSet;

    QString* built_on;
    bool m_built_on_isSet;

    OAIEmptyChangeLogSet* change_set;
    bool m_change_set_isSet;

};

}

#endif /* OAIFreeStyleBuild_H_ */
