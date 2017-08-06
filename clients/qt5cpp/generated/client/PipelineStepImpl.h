/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * PipelineStepImpl.h
 * 
 * 
 */

#ifndef PipelineStepImpl_H_
#define PipelineStepImpl_H_

#include <QJsonObject>


#include "InputStepImpl.h"
#include "PipelineStepImpllinks.h"
#include <QString>

#include "SWGObject.h"


namespace Swagger {

class PipelineStepImpl: public SWGObject {
public:
    PipelineStepImpl();
    PipelineStepImpl(QString* json);
    virtual ~PipelineStepImpl();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    PipelineStepImpl* fromJson(QString &jsonString);

    QString* getClass();
    void setClass(QString* _class);

    PipelineStepImpllinks* getLinks();
    void setLinks(PipelineStepImpllinks* _links);

    QString* getDisplayName();
    void setDisplayName(QString* display_name);

    qint32 getDurationInMillis();
    void setDurationInMillis(qint32 duration_in_millis);

    QString* getId();
    void setId(QString* id);

    InputStepImpl* getInput();
    void setInput(InputStepImpl* input);

    QString* getResult();
    void setResult(QString* result);

    QString* getStartTime();
    void setStartTime(QString* start_time);

    QString* getState();
    void setState(QString* state);


private:
    QString* _class;
    PipelineStepImpllinks* _links;
    QString* display_name;
    qint32 duration_in_millis;
    QString* id;
    InputStepImpl* input;
    QString* result;
    QString* start_time;
    QString* state;
};

}

#endif /* PipelineStepImpl_H_ */