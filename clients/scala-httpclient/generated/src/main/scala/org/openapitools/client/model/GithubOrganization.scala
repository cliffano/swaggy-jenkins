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

package org.openapitools.client.model


case class GithubOrganization (
  `class`: Option[String] = None,
  links: Option[GithubOrganizationlinks] = None,
  jenkinsOrganizationPipeline: Option[Boolean] = None,
  name: Option[String] = None
)

