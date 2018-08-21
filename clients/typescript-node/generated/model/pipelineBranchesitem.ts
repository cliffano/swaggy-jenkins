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

import { PipelineBranchesitemlatestRun } from './pipelineBranchesitemlatestRun';
import { PipelineBranchesitempullRequest } from './pipelineBranchesitempullRequest';

export class PipelineBranchesitem {
    'displayName'?: string;
    'estimatedDurationInMillis'?: number;
    'name'?: string;
    'weatherScore'?: number;
    'latestRun'?: PipelineBranchesitemlatestRun;
    'organization'?: string;
    'pullRequest'?: PipelineBranchesitempullRequest;
    'totalNumberOfPullRequests'?: number;
    '_class'?: string;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "displayName",
            "baseName": "displayName",
            "type": "string"
        },
        {
            "name": "estimatedDurationInMillis",
            "baseName": "estimatedDurationInMillis",
            "type": "number"
        },
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "weatherScore",
            "baseName": "weatherScore",
            "type": "number"
        },
        {
            "name": "latestRun",
            "baseName": "latestRun",
            "type": "PipelineBranchesitemlatestRun"
        },
        {
            "name": "organization",
            "baseName": "organization",
            "type": "string"
        },
        {
            "name": "pullRequest",
            "baseName": "pullRequest",
            "type": "PipelineBranchesitempullRequest"
        },
        {
            "name": "totalNumberOfPullRequests",
            "baseName": "totalNumberOfPullRequests",
            "type": "number"
        },
        {
            "name": "_class",
            "baseName": "_class",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return PipelineBranchesitem.attributeTypeMap;
    }
}

