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
package org.openapitools.client.models

import org.openapitools.client.models.GithubOrganizationlinks

/**
 * 
 * @param Underscoreclass 
 * @param Underscorelinks 
 * @param jenkinsOrganizationPipeline 
 * @param name 
 */
data class GithubOrganization (
    val Underscoreclass: kotlin.String? = null,
    val Underscorelinks: GithubOrganizationlinks? = null,
    val jenkinsOrganizationPipeline: kotlin.Boolean? = null,
    val name: kotlin.String? = null
) {

}

