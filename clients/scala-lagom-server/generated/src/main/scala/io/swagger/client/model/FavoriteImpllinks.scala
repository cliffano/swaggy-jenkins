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

case class FavoriteImpllinks (
                  self: Option[Link],
                  `class`: Option[String]
)

object FavoriteImpllinks {
implicit val format: Format[FavoriteImpllinks] = Json.format
}

