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

package org.openapitools.client.model


case class PipelineStepImpl (
  `class`: Option[String] = None,
  links: Option[PipelineStepImpllinks] = None,
  displayName: Option[String] = None,
  durationInMillis: Option[Integer] = None,
  id: Option[String] = None,
  input: Option[InputStepImpl] = None,
  result: Option[String] = None,
  startTime: Option[String] = None,
  state: Option[String] = None
)

