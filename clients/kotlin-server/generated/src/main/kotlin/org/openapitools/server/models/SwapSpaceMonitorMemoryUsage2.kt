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
package org.openapitools.server.models


/**
 * 
 * @param Underscoreclass 
 * @param availablePhysicalMemory 
 * @param availableSwapSpace 
 * @param totalPhysicalMemory 
 * @param totalSwapSpace 
 */
data class SwapSpaceMonitorMemoryUsage2 (
    val Underscoreclass: kotlin.String? = null,
    val availablePhysicalMemory: kotlin.Int? = null,
    val availableSwapSpace: kotlin.Int? = null,
    val totalPhysicalMemory: kotlin.Int? = null,
    val totalSwapSpace: kotlin.Int? = null
) {

}

