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
 * OAIExtensionClassContainerImpl1map.h
 *
 * 
 */

#ifndef OAIExtensionClassContainerImpl1map_H_
#define OAIExtensionClassContainerImpl1map_H_

#include <QJsonObject>


#include "OAIOAIExtensionClassImpl.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIExtensionClassContainerImpl1map: public OAIObject {
public:
    OAIExtensionClassContainerImpl1map();
    OAIExtensionClassContainerImpl1map(QString json);
    ~OAIExtensionClassContainerImpl1map();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIExtensionClassContainerImpl1map* fromJson(QString jsonString) override;

    OAIExtensionClassImpl* getIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl();
    void setIoJenkinsBlueoceanServiceEmbeddedRestPipelineImpl(OAIExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_pipeline_impl);

    OAIExtensionClassImpl* getIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl();
    void setIoJenkinsBlueoceanServiceEmbeddedRestMultiBranchPipelineImpl(OAIExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl);

    QString* getClass();
    void setClass(QString* _class);


    virtual bool isSet() override;

private:
    OAIExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_pipeline_impl;
    bool m_io_jenkins_blueocean_service_embedded_rest_pipeline_impl_isSet;

    OAIExtensionClassImpl* io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl;
    bool m_io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl_isSet;

    QString* _class;
    bool m__class_isSet;

};

}

#endif /* OAIExtensionClassContainerImpl1map_H_ */