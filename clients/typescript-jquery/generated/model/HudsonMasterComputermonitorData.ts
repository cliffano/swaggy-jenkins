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

import * as models from './models';

export interface HudsonMasterComputermonitorData {
    hudsonNodeMonitorsSwapSpaceMonitor?: models.SwapSpaceMonitorMemoryUsage2;

    hudsonNodeMonitorsTemporarySpaceMonitor?: models.DiskSpaceMonitorDescriptorDiskSpace;

    hudsonNodeMonitorsDiskSpaceMonitor?: models.DiskSpaceMonitorDescriptorDiskSpace;

    hudsonNodeMonitorsArchitectureMonitor?: string;

    hudsonNodeMonitorsResponseTimeMonitor?: models.ResponseTimeMonitorData;

    hudsonNodeMonitorsClockMonitor?: models.ClockDifference;

    _class?: string;

}
