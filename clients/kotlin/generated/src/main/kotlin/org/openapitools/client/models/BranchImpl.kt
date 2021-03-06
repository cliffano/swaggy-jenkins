/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.1.1
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models

import org.openapitools.client.models.BranchImpllinks
import org.openapitools.client.models.BranchImplpermissions
import org.openapitools.client.models.PipelineRunImpl
import org.openapitools.client.models.StringParameterDefinition

/**
 * 
 * @param Underscoreclass 
 * @param displayName 
 * @param estimatedDurationInMillis 
 * @param fullDisplayName 
 * @param fullName 
 * @param name 
 * @param organization 
 * @param parameters 
 * @param permissions 
 * @param weatherScore 
 * @param pullRequest 
 * @param Underscorelinks 
 * @param latestRun 
 */
data class BranchImpl (
    val Underscoreclass: kotlin.String? = null,
    val displayName: kotlin.String? = null,
    val estimatedDurationInMillis: kotlin.Int? = null,
    val fullDisplayName: kotlin.String? = null,
    val fullName: kotlin.String? = null,
    val name: kotlin.String? = null,
    val organization: kotlin.String? = null,
    val parameters: kotlin.Array<StringParameterDefinition>? = null,
    val permissions: BranchImplpermissions? = null,
    val weatherScore: kotlin.Int? = null,
    val pullRequest: kotlin.String? = null,
    val Underscorelinks: BranchImpllinks? = null,
    val latestRun: PipelineRunImpl? = null
) {

}

