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

import org.openapitools.client.models.PipelineActivityartifacts

/**
 * 
 * @param Underscoreclass 
 * @param artifacts 
 * @param durationInMillis 
 * @param estimatedDurationInMillis 
 * @param enQueueTime 
 * @param endTime 
 * @param id 
 * @param organization 
 * @param pipeline 
 * @param result 
 * @param runSummary 
 * @param startTime 
 * @param state 
 * @param type 
 * @param commitId 
 */
data class PipelineActivity (
    val Underscoreclass: kotlin.String? = null,
    val artifacts: kotlin.Array<PipelineActivityartifacts>? = null,
    val durationInMillis: kotlin.Int? = null,
    val estimatedDurationInMillis: kotlin.Int? = null,
    val enQueueTime: kotlin.String? = null,
    val endTime: kotlin.String? = null,
    val id: kotlin.String? = null,
    val organization: kotlin.String? = null,
    val pipeline: kotlin.String? = null,
    val result: kotlin.String? = null,
    val runSummary: kotlin.String? = null,
    val startTime: kotlin.String? = null,
    val state: kotlin.String? = null,
    val type: kotlin.String? = null,
    val commitId: kotlin.String? = null
) {

}

