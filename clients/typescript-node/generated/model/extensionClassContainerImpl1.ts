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

import { ExtensionClassContainerImpl1links } from './extensionClassContainerImpl1links';
import { ExtensionClassContainerImpl1map } from './extensionClassContainerImpl1map';

export class ExtensionClassContainerImpl1 {
    '_class'?: string;
    'links'?: ExtensionClassContainerImpl1links;
    'map'?: ExtensionClassContainerImpl1map;

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
            "type": "ExtensionClassContainerImpl1links"
        },
        {
            "name": "map",
            "baseName": "map",
            "type": "ExtensionClassContainerImpl1map"
        }    ];

    static getAttributeTypeMap() {
        return ExtensionClassContainerImpl1.attributeTypeMap;
    }
}

