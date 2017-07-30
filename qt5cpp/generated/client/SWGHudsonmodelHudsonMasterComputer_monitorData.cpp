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


#include "SWGHudsonmodelHudsonMasterComputer_monitorData.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGHudsonmodelHudsonMasterComputer_monitorData::SWGHudsonmodelHudsonMasterComputer_monitorData(QString* json) {
    init();
    this->fromJson(*json);
}

SWGHudsonmodelHudsonMasterComputer_monitorData::SWGHudsonmodelHudsonMasterComputer_monitorData() {
    init();
}

SWGHudsonmodelHudsonMasterComputer_monitorData::~SWGHudsonmodelHudsonMasterComputer_monitorData() {
    this->cleanup();
}

void
SWGHudsonmodelHudsonMasterComputer_monitorData::init() {
    hudson_node_monitors_swap_space_monitor = new SWGHudsonnode_monitorsSwapSpaceMonitorMemoryUsage2();
    hudson_node_monitors_temporary_space_monitor = new SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace();
    hudson_node_monitors_disk_space_monitor = new SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace();
    hudson_node_monitors_architecture_monitor = new QString("");
    hudson_node_monitors_response_time_monitor = new SWGHudsonnode_monitorsResponseTimeMonitorData();
    hudson_node_monitors_clock_monitor = new SWGHudsonutilClockDifference();
    _class = new QString("");
}

void
SWGHudsonmodelHudsonMasterComputer_monitorData::cleanup() {
    
    if(hudson_node_monitors_swap_space_monitor != nullptr) {
        delete hudson_node_monitors_swap_space_monitor;
    }

    if(hudson_node_monitors_temporary_space_monitor != nullptr) {
        delete hudson_node_monitors_temporary_space_monitor;
    }

    if(hudson_node_monitors_disk_space_monitor != nullptr) {
        delete hudson_node_monitors_disk_space_monitor;
    }

    if(hudson_node_monitors_architecture_monitor != nullptr) {
        delete hudson_node_monitors_architecture_monitor;
    }

    if(hudson_node_monitors_response_time_monitor != nullptr) {
        delete hudson_node_monitors_response_time_monitor;
    }

    if(hudson_node_monitors_clock_monitor != nullptr) {
        delete hudson_node_monitors_clock_monitor;
    }

    if(_class != nullptr) {
        delete _class;
    }
}

SWGHudsonmodelHudsonMasterComputer_monitorData*
SWGHudsonmodelHudsonMasterComputer_monitorData::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGHudsonmodelHudsonMasterComputer_monitorData::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&hudson_node_monitors_swap_space_monitor, pJson["hudson.node_monitors.SwapSpaceMonitor"], "SWGHudsonnode_monitorsSwapSpaceMonitorMemoryUsage2", "SWGHudsonnode_monitorsSwapSpaceMonitorMemoryUsage2");
    ::Swagger::setValue(&hudson_node_monitors_temporary_space_monitor, pJson["hudson.node_monitors.TemporarySpaceMonitor"], "SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace", "SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace");
    ::Swagger::setValue(&hudson_node_monitors_disk_space_monitor, pJson["hudson.node_monitors.DiskSpaceMonitor"], "SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace", "SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace");
    ::Swagger::setValue(&hudson_node_monitors_architecture_monitor, pJson["hudson.node_monitors.ArchitectureMonitor"], "QString", "QString");
    ::Swagger::setValue(&hudson_node_monitors_response_time_monitor, pJson["hudson.node_monitors.ResponseTimeMonitor"], "SWGHudsonnode_monitorsResponseTimeMonitorData", "SWGHudsonnode_monitorsResponseTimeMonitorData");
    ::Swagger::setValue(&hudson_node_monitors_clock_monitor, pJson["hudson.node_monitors.ClockMonitor"], "SWGHudsonutilClockDifference", "SWGHudsonutilClockDifference");
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
}

QString
SWGHudsonmodelHudsonMasterComputer_monitorData::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGHudsonmodelHudsonMasterComputer_monitorData::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("hudson.node_monitors.SwapSpaceMonitor"), hudson_node_monitors_swap_space_monitor, obj, QString("SWGHudsonnode_monitorsSwapSpaceMonitorMemoryUsage2"));

    toJsonValue(QString("hudson.node_monitors.TemporarySpaceMonitor"), hudson_node_monitors_temporary_space_monitor, obj, QString("SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace"));

    toJsonValue(QString("hudson.node_monitors.DiskSpaceMonitor"), hudson_node_monitors_disk_space_monitor, obj, QString("SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace"));

    toJsonValue(QString("hudson.node_monitors.ArchitectureMonitor"), hudson_node_monitors_architecture_monitor, obj, QString("QString"));

    toJsonValue(QString("hudson.node_monitors.ResponseTimeMonitor"), hudson_node_monitors_response_time_monitor, obj, QString("SWGHudsonnode_monitorsResponseTimeMonitorData"));

    toJsonValue(QString("hudson.node_monitors.ClockMonitor"), hudson_node_monitors_clock_monitor, obj, QString("SWGHudsonutilClockDifference"));

    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    return obj;
}

SWGHudsonnode_monitorsSwapSpaceMonitorMemoryUsage2*
SWGHudsonmodelHudsonMasterComputer_monitorData::getHudsonNodeMonitorsSwapSpaceMonitor() {
    return hudson_node_monitors_swap_space_monitor;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setHudsonNodeMonitorsSwapSpaceMonitor(SWGHudsonnode_monitorsSwapSpaceMonitorMemoryUsage2* hudson_node_monitors_swap_space_monitor) {
    this->hudson_node_monitors_swap_space_monitor = hudson_node_monitors_swap_space_monitor;
}

SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace*
SWGHudsonmodelHudsonMasterComputer_monitorData::getHudsonNodeMonitorsTemporarySpaceMonitor() {
    return hudson_node_monitors_temporary_space_monitor;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setHudsonNodeMonitorsTemporarySpaceMonitor(SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace* hudson_node_monitors_temporary_space_monitor) {
    this->hudson_node_monitors_temporary_space_monitor = hudson_node_monitors_temporary_space_monitor;
}

SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace*
SWGHudsonmodelHudsonMasterComputer_monitorData::getHudsonNodeMonitorsDiskSpaceMonitor() {
    return hudson_node_monitors_disk_space_monitor;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setHudsonNodeMonitorsDiskSpaceMonitor(SWGHudsonnode_monitorsDiskSpaceMonitorDescriptorDiskSpace* hudson_node_monitors_disk_space_monitor) {
    this->hudson_node_monitors_disk_space_monitor = hudson_node_monitors_disk_space_monitor;
}

QString*
SWGHudsonmodelHudsonMasterComputer_monitorData::getHudsonNodeMonitorsArchitectureMonitor() {
    return hudson_node_monitors_architecture_monitor;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setHudsonNodeMonitorsArchitectureMonitor(QString* hudson_node_monitors_architecture_monitor) {
    this->hudson_node_monitors_architecture_monitor = hudson_node_monitors_architecture_monitor;
}

SWGHudsonnode_monitorsResponseTimeMonitorData*
SWGHudsonmodelHudsonMasterComputer_monitorData::getHudsonNodeMonitorsResponseTimeMonitor() {
    return hudson_node_monitors_response_time_monitor;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setHudsonNodeMonitorsResponseTimeMonitor(SWGHudsonnode_monitorsResponseTimeMonitorData* hudson_node_monitors_response_time_monitor) {
    this->hudson_node_monitors_response_time_monitor = hudson_node_monitors_response_time_monitor;
}

SWGHudsonutilClockDifference*
SWGHudsonmodelHudsonMasterComputer_monitorData::getHudsonNodeMonitorsClockMonitor() {
    return hudson_node_monitors_clock_monitor;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setHudsonNodeMonitorsClockMonitor(SWGHudsonutilClockDifference* hudson_node_monitors_clock_monitor) {
    this->hudson_node_monitors_clock_monitor = hudson_node_monitors_clock_monitor;
}

QString*
SWGHudsonmodelHudsonMasterComputer_monitorData::getClass() {
    return _class;
}
void
SWGHudsonmodelHudsonMasterComputer_monitorData::setClass(QString* _class) {
    this->_class = _class;
}


}
