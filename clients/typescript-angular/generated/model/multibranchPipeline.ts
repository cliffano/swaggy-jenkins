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


export interface MultibranchPipeline { 
    displayName?: string;
    estimatedDurationInMillis?: number;
    latestRun?: string;
    name?: string;
    organization?: string;
    weatherScore?: number;
    branchNames?: Array<string>;
    numberOfFailingBranches?: number;
    numberOfFailingPullRequests?: number;
    numberOfSuccessfulBranches?: number;
    numberOfSuccessfulPullRequests?: number;
    totalNumberOfBranches?: number;
    totalNumberOfPullRequests?: number;
    _class?: string;
}
