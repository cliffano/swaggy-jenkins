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

case class PipelineImpl(
  Underscoreclass: Option[String],

  displayName: Option[String],

  estimatedDurationInMillis: Option[Int],

  fullName: Option[String],

  latestRun: Option[String],

  name: Option[String],

  organization: Option[String],

  weatherScore: Option[Int],

  Underscorelinks: Option[PipelineImpllinks]

 )
