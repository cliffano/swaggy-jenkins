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

#include "OAIRemoteAccessApi.h"
#include "OAIHelpers.h"
#include "OAIModelFactory.h"
#include "OAIQObjectWrapper.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIRemoteAccessApi::OAIRemoteAccessApi() {}

OAIRemoteAccessApi::~OAIRemoteAccessApi() {}

OAIRemoteAccessApi::OAIRemoteAccessApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
OAIRemoteAccessApi::getComputer(qint32 depth) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/computer/api/json");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("depth"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(depth)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getComputerCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getComputerCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIComputerSet* output = static_cast<OAIComputerSet*>(create(json, QString("OAIComputerSet")));
    auto wrapper = new OAIQObjectWrapper<OAIComputerSet*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getComputerSignal(output);
    } else {
        emit getComputerSignalE(output, error_type, error_str);
        emit getComputerSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getCrumb() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/crumbIssuer/api/json");



    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getCrumbCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getCrumbCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIDefaultCrumbIssuer* output = static_cast<OAIDefaultCrumbIssuer*>(create(json, QString("OAIDefaultCrumbIssuer")));
    auto wrapper = new OAIQObjectWrapper<OAIDefaultCrumbIssuer*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getCrumbSignal(output);
    } else {
        emit getCrumbSignalE(output, error_type, error_str);
        emit getCrumbSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getJenkins() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/json");



    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getJenkinsCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getJenkinsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIHudson* output = static_cast<OAIHudson*>(create(json, QString("OAIHudson")));
    auto wrapper = new OAIQObjectWrapper<OAIHudson*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getJenkinsSignal(output);
    } else {
        emit getJenkinsSignalE(output, error_type, error_str);
        emit getJenkinsSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getJob(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/api/json");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getJobCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getJobCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIFreeStyleProject* output = static_cast<OAIFreeStyleProject*>(create(json, QString("OAIFreeStyleProject")));
    auto wrapper = new OAIQObjectWrapper<OAIFreeStyleProject*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getJobSignal(output);
    } else {
        emit getJobSignalE(output, error_type, error_str);
        emit getJobSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getJobConfig(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getJobConfigCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getJobConfigCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    auto wrapper = new OAIQObjectWrapper<QString*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getJobConfigSignal(output);
    } else {
        emit getJobConfigSignalE(output, error_type, error_str);
        emit getJobConfigSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getJobLastBuild(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/lastBuild/api/json");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getJobLastBuildCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getJobLastBuildCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIFreeStyleBuild* output = static_cast<OAIFreeStyleBuild*>(create(json, QString("OAIFreeStyleBuild")));
    auto wrapper = new OAIQObjectWrapper<OAIFreeStyleBuild*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getJobLastBuildSignal(output);
    } else {
        emit getJobLastBuildSignalE(output, error_type, error_str);
        emit getJobLastBuildSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getJobProgressiveText(QString* name, QString* number, QString* start) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/{number}/logText/progressiveText");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));
    QString numberPathParam("{"); numberPathParam.append("number").append("}");
    fullPath.replace(numberPathParam, stringValue(number));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("start"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(start)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getJobProgressiveTextCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getJobProgressiveTextCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getJobProgressiveTextSignal();
    } else {
        emit getJobProgressiveTextSignalE(error_type, error_str);
        emit getJobProgressiveTextSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getQueue() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/queue/api/json");



    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getQueueCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getQueueCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIQueue* output = static_cast<OAIQueue*>(create(json, QString("OAIQueue")));
    auto wrapper = new OAIQObjectWrapper<OAIQueue*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getQueueSignal(output);
    } else {
        emit getQueueSignalE(output, error_type, error_str);
        emit getQueueSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getQueueItem(QString* number) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/queue/item/{number}/api/json");

    QString numberPathParam("{"); numberPathParam.append("number").append("}");
    fullPath.replace(numberPathParam, stringValue(number));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getQueueItemCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getQueueItemCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIQueue* output = static_cast<OAIQueue*>(create(json, QString("OAIQueue")));
    auto wrapper = new OAIQObjectWrapper<OAIQueue*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getQueueItemSignal(output);
    } else {
        emit getQueueItemSignalE(output, error_type, error_str);
        emit getQueueItemSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getView(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/view/{name}/api/json");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getViewCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getViewCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    OAIListView* output = static_cast<OAIListView*>(create(json, QString("OAIListView")));
    auto wrapper = new OAIQObjectWrapper<OAIListView*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getViewSignal(output);
    } else {
        emit getViewSignalE(output, error_type, error_str);
        emit getViewSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::getViewConfig(QString* name) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/view/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "GET");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::getViewConfigCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::getViewConfigCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    auto wrapper = new OAIQObjectWrapper<QString*> (output);
    wrapper->deleteLater();
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit getViewConfigSignal(output);
    } else {
        emit getViewConfigSignalE(output, error_type, error_str);
        emit getViewConfigSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::headJenkins() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/api/json");



    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "HEAD");





    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::headJenkinsCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::headJenkinsCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit headJenkinsSignal();
    } else {
        emit headJenkinsSignalE(error_type, error_str);
        emit headJenkinsSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postCreateItem(QString* name, QString* from, QString* mode, QString* jenkins_crumb, QString* content_type, QString*& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/createItem");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("from"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(from)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("mode"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(mode)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }
    if (content_type != nullptr) {
        input.headers.insert("Content-Type", "content_type");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postCreateItemCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postCreateItemCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postCreateItemSignal();
    } else {
        emit postCreateItemSignalE(error_type, error_str);
        emit postCreateItemSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postCreateView(QString* name, QString* jenkins_crumb, QString* content_type, QString*& body) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/createView");


    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("name"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(name)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }
    if (content_type != nullptr) {
        input.headers.insert("Content-Type", "content_type");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postCreateViewCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postCreateViewCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postCreateViewSignal();
    } else {
        emit postCreateViewSignalE(error_type, error_str);
        emit postCreateViewSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postJobBuild(QString* name, QString* json, QString* token, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/build");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("json"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(json)));

    if (fullPath.indexOf("?") > 0)
      fullPath.append("&");
    else
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("token"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(token)));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postJobBuildCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postJobBuildCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postJobBuildSignal();
    } else {
        emit postJobBuildSignalE(error_type, error_str);
        emit postJobBuildSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postJobConfig(QString* name, QString*& body, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postJobConfigCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postJobConfigCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postJobConfigSignal();
    } else {
        emit postJobConfigSignalE(error_type, error_str);
        emit postJobConfigSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postJobDelete(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/doDelete");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postJobDeleteCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postJobDeleteCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postJobDeleteSignal();
    } else {
        emit postJobDeleteSignalE(error_type, error_str);
        emit postJobDeleteSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postJobDisable(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/disable");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postJobDisableCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postJobDisableCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postJobDisableSignal();
    } else {
        emit postJobDisableSignalE(error_type, error_str);
        emit postJobDisableSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postJobEnable(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/enable");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postJobEnableCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postJobEnableCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postJobEnableSignal();
    } else {
        emit postJobEnableSignalE(error_type, error_str);
        emit postJobEnableSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postJobLastBuildStop(QString* name, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/job/{name}/lastBuild/stop");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");




    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postJobLastBuildStopCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postJobLastBuildStopCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postJobLastBuildStopSignal();
    } else {
        emit postJobLastBuildStopSignalE(error_type, error_str);
        emit postJobLastBuildStopSignalEFull(worker, error_type, error_str);
    }
}

void
OAIRemoteAccessApi::postViewConfig(QString* name, QString*& body, QString* jenkins_crumb) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/view/{name}/config.xml");

    QString namePathParam("{"); namePathParam.append("name").append("}");
    fullPath.replace(namePathParam, stringValue(name));


    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker();
    OAIHttpRequestInput input(fullPath, "POST");


    
    QString output(*body);
    input.request_body.append(output);
    

    if (jenkins_crumb != nullptr) {
        input.headers.insert("Jenkins-Crumb", "jenkins_crumb");
    }

    foreach(QString key, this->defaultHeaders.keys()) {
        input.headers.insert(key, this->defaultHeaders.value(key));
    }

    connect(worker,
            &OAIHttpRequestWorker::on_execution_finished,
            this,
            &OAIRemoteAccessApi::postViewConfigCallback);

    worker->execute(&input);
}

void
OAIRemoteAccessApi::postViewConfigCallback(OAIHttpRequestWorker * worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit postViewConfigSignal();
    } else {
        emit postViewConfigSignalE(error_type, error_str);
        emit postViewConfigSignalEFull(worker, error_type, error_str);
    }
}


}
