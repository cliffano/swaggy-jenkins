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
 * OAIGithubContent.h
 *
 * 
 */

#ifndef OAIGithubContent_H_
#define OAIGithubContent_H_

#include <QJsonObject>


#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIGithubContent: public OAIObject {
public:
    OAIGithubContent();
    OAIGithubContent(QString json);
    ~OAIGithubContent();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIGithubContent* fromJson(QString jsonString) override;

    QString* getName();
    void setName(QString* name);

    QString* getSha();
    void setSha(QString* sha);

    QString* getClass();
    void setClass(QString* _class);

    QString* getRepo();
    void setRepo(QString* repo);

    qint32 getSize();
    void setSize(qint32 size);

    QString* getOwner();
    void setOwner(QString* owner);

    QString* getPath();
    void setPath(QString* path);

    QString* getBase64Data();
    void setBase64Data(QString* base64_data);


    virtual bool isSet() override;

private:
    QString* name;
    bool m_name_isSet;

    QString* sha;
    bool m_sha_isSet;

    QString* _class;
    bool m__class_isSet;

    QString* repo;
    bool m_repo_isSet;

    qint32 size;
    bool m_size_isSet;

    QString* owner;
    bool m_owner_isSet;

    QString* path;
    bool m_path_isSet;

    QString* base64_data;
    bool m_base64_data_isSet;

};

}

#endif /* OAIGithubContent_H_ */
