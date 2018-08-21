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

import { GithubScmlinks } from './githubScmlinks';

export class GithubScm {
    '_class'?: string;
    'links'?: GithubScmlinks;
    'credentialId'?: string;
    'id'?: string;
    'uri'?: string;

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
            "type": "GithubScmlinks"
        },
        {
            "name": "credentialId",
            "baseName": "credentialId",
            "type": "string"
        },
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "uri",
            "baseName": "uri",
            "type": "string"
        }    ];

    static getAttributeTypeMap() {
        return GithubScm.attributeTypeMap;
    }
}

