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
import { InputStepImpl } from './inputStepImpl';
import { PipelineStepImpllinks } from './pipelineStepImpllinks';


export interface PipelineStepImpl { 
    _class?: string;
    links?: PipelineStepImpllinks;
    displayName?: string;
    durationInMillis?: number;
    id?: string;
    input?: InputStepImpl;
    result?: string;
    startTime?: string;
    state?: string;
}
