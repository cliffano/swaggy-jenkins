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

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class HudsonMasterComputer (
  `class`: Option[String],
  displayName: Option[String],
  executors: Option[Seq[HudsonMasterComputerexecutors]],
  icon: Option[String],
  iconClassName: Option[String],
  idle: Option[Boolean],
  jnlpAgent: Option[Boolean],
  launchSupported: Option[Boolean],
  loadStatistics: Option[Label1],
  manualLaunchAllowed: Option[Boolean],
  monitorData: Option[HudsonMasterComputermonitorData],
  numExecutors: Option[Int],
  offline: Option[Boolean],
  offlineCause: Option[String],
  offlineCauseReason: Option[String],
  temporarilyOffline: Option[Boolean]
) extends ApiModel


