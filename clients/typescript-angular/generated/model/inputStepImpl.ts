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
import { InputStepImpllinks } from './inputStepImpllinks';
import { StringParameterDefinition } from './stringParameterDefinition';


export interface InputStepImpl { 
    _class?: string;
    links?: InputStepImpllinks;
    id?: string;
    message?: string;
    ok?: string;
    parameters?: Array<StringParameterDefinition>;
    submitter?: string;
}
