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

import { PipelineRunImpllinks } from './pipelineRunImpllinks';

export class PipelineRunImpl {
    '_class'?: string;
    'links'?: PipelineRunImpllinks;
    'durationInMillis'?: number;
    'enQueueTime'?: string;
    'endTime'?: string;
    'estimatedDurationInMillis'?: number;
    'id'?: string;
    'organization'?: string;
    'pipeline'?: string;
    'result'?: string;
    'runSummary'?: string;
    'startTime'?: string;
    'state'?: string;
    'type'?: string;
    'commitId'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "_class",
            "baseName": "_class",
            "type": "string"
        },
        {
            "name": "links",
            "baseName": "_links",
            "type": "PipelineRunImpllinks"
        },
        {
            "name": "durationInMillis",
            "baseName": "durationInMillis",
            "type": "number"
        },
        {
            "name": "enQueueTime",
            "baseName": "enQueueTime",
            "type": "string"
        },
        {
            "name": "endTime",
            "baseName": "endTime",
            "type": "string"
        },
        {
            "name": "estimatedDurationInMillis",
            "baseName": "estimatedDurationInMillis",
            "type": "number"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "organization",
            "baseName": "organization",
            "type": "string"
        },
        {
            "name": "pipeline",
            "baseName": "pipeline",
            "type": "string"
        },
        {
            "name": "result",
            "baseName": "result",
            "type": "string"
        },
        {
            "name": "runSummary",
            "baseName": "runSummary",
            "type": "string"
        },
        {
            "name": "startTime",
            "baseName": "startTime",
            "type": "string"
        },
        {
            "name": "state",
            "baseName": "state",
            "type": "string"
        },
        {
            "name": "type",
            "baseName": "type",
            "type": "string"
        },
        {
            "name": "commitId",
            "baseName": "commitId",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return PipelineRunImpl.attributeTypeMap;
    }
}

