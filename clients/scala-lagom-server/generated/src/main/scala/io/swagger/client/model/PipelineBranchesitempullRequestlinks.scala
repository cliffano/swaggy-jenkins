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

case class PipelineBranchesitempullRequestlinks (
                  self: Option[String],
                  `class`: Option[String]
)

object PipelineBranchesitempullRequestlinks {
implicit val format: Format[PipelineBranchesitempullRequestlinks] = Json.format
}

