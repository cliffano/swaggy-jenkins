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


case class PipelineBranchesitem (
  displayName: Option[String] = None,
  estimatedDurationInMillis: Option[Integer] = None,
  name: Option[String] = None,
  weatherScore: Option[Integer] = None,
  latestRun: Option[PipelineBranchesitemlatestRun] = None,
  organization: Option[String] = None,
  pullRequest: Option[PipelineBranchesitempullRequest] = None,
  totalNumberOfPullRequests: Option[Integer] = None,
  `class`: Option[String] = None
)

