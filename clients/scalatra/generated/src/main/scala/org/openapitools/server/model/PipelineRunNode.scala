/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class PipelineRunNode(
  Underscoreclass: Option[String],

  displayName: Option[String],

  durationInMillis: Option[Int],

  edges: Option[List[PipelineRunNodeedges]],

  id: Option[String],

  result: Option[String],

  startTime: Option[String],

  state: Option[String]

 )
