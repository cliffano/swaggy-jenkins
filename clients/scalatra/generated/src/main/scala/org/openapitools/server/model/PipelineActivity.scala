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

case class PipelineActivity(
  Underscoreclass: Option[String],

  artifacts: Option[List[PipelineActivityartifacts]],

  durationInMillis: Option[Int],

  estimatedDurationInMillis: Option[Int],

  enQueueTime: Option[String],

  endTime: Option[String],

  id: Option[String],

  organization: Option[String],

  pipeline: Option[String],

  result: Option[String],

  runSummary: Option[String],

  startTime: Option[String],

  state: Option[String],

  `type`: Option[String],

  commitId: Option[String]

 )
