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

package io.swagger.client.model
import play.api.libs.json._

case class PipelineStepImpl (
                  `class`: Option[String],
                  links: Option[PipelineStepImpllinks],
                  displayName: Option[String],
                  durationInMillis: Option[Int],
                  id: Option[String],
                  input: Option[InputStepImpl],
                  result: Option[String],
                  startTime: Option[String],
                  state: Option[String]
)

object PipelineStepImpl {
implicit val format: Format[PipelineStepImpl] = Json.format
}

