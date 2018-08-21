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

package org.openapitools.client.model;

import java.util.*;
import org.openapitools.client.model.HudsonMasterComputerexecutors;
import org.openapitools.client.model.HudsonMasterComputermonitorData;
import org.openapitools.client.model.Label1;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class HudsonMasterComputer {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("displayName")
  private String displayName = null;
  @SerializedName("executors")
  private List<HudsonMasterComputerexecutors> executors = null;
  @SerializedName("icon")
  private String icon = null;
  @SerializedName("iconClassName")
  private String iconClassName = null;
  @SerializedName("idle")
  private Boolean idle = null;
  @SerializedName("jnlpAgent")
  private Boolean jnlpAgent = null;
  @SerializedName("launchSupported")
  private Boolean launchSupported = null;
  @SerializedName("loadStatistics")
  private Label1 loadStatistics = null;
  @SerializedName("manualLaunchAllowed")
  private Boolean manualLaunchAllowed = null;
  @SerializedName("monitorData")
  private HudsonMasterComputermonitorData monitorData = null;
  @SerializedName("numExecutors")
  private Integer numExecutors = null;
  @SerializedName("offline")
  private Boolean offline = null;
  @SerializedName("offlineCause")
  private String offlineCause = null;
  @SerializedName("offlineCauseReason")
  private String offlineCauseReason = null;
  @SerializedName("temporarilyOffline")
  private Boolean temporarilyOffline = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonMasterComputerexecutors> getExecutors() {
    return executors;
  }
  public void setExecutors(List<HudsonMasterComputerexecutors> executors) {
    this.executors = executors;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getIcon() {
    return icon;
  }
  public void setIcon(String icon) {
    this.icon = icon;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getIconClassName() {
    return iconClassName;
  }
  public void setIconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getIdle() {
    return idle;
  }
  public void setIdle(Boolean idle) {
    this.idle = idle;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getJnlpAgent() {
    return jnlpAgent;
  }
  public void setJnlpAgent(Boolean jnlpAgent) {
    this.jnlpAgent = jnlpAgent;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getLaunchSupported() {
    return launchSupported;
  }
  public void setLaunchSupported(Boolean launchSupported) {
    this.launchSupported = launchSupported;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Label1 getLoadStatistics() {
    return loadStatistics;
  }
  public void setLoadStatistics(Label1 loadStatistics) {
    this.loadStatistics = loadStatistics;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getManualLaunchAllowed() {
    return manualLaunchAllowed;
  }
  public void setManualLaunchAllowed(Boolean manualLaunchAllowed) {
    this.manualLaunchAllowed = manualLaunchAllowed;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public HudsonMasterComputermonitorData getMonitorData() {
    return monitorData;
  }
  public void setMonitorData(HudsonMasterComputermonitorData monitorData) {
    this.monitorData = monitorData;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getNumExecutors() {
    return numExecutors;
  }
  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getOffline() {
    return offline;
  }
  public void setOffline(Boolean offline) {
    this.offline = offline;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOfflineCause() {
    return offlineCause;
  }
  public void setOfflineCause(String offlineCause) {
    this.offlineCause = offlineCause;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOfflineCauseReason() {
    return offlineCauseReason;
  }
  public void setOfflineCauseReason(String offlineCauseReason) {
    this.offlineCauseReason = offlineCauseReason;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getTemporarilyOffline() {
    return temporarilyOffline;
  }
  public void setTemporarilyOffline(Boolean temporarilyOffline) {
    this.temporarilyOffline = temporarilyOffline;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonMasterComputer hudsonMasterComputer = (HudsonMasterComputer) o;
    return (this._class == null ? hudsonMasterComputer._class == null : this._class.equals(hudsonMasterComputer._class)) &&
        (this.displayName == null ? hudsonMasterComputer.displayName == null : this.displayName.equals(hudsonMasterComputer.displayName)) &&
        (this.executors == null ? hudsonMasterComputer.executors == null : this.executors.equals(hudsonMasterComputer.executors)) &&
        (this.icon == null ? hudsonMasterComputer.icon == null : this.icon.equals(hudsonMasterComputer.icon)) &&
        (this.iconClassName == null ? hudsonMasterComputer.iconClassName == null : this.iconClassName.equals(hudsonMasterComputer.iconClassName)) &&
        (this.idle == null ? hudsonMasterComputer.idle == null : this.idle.equals(hudsonMasterComputer.idle)) &&
        (this.jnlpAgent == null ? hudsonMasterComputer.jnlpAgent == null : this.jnlpAgent.equals(hudsonMasterComputer.jnlpAgent)) &&
        (this.launchSupported == null ? hudsonMasterComputer.launchSupported == null : this.launchSupported.equals(hudsonMasterComputer.launchSupported)) &&
        (this.loadStatistics == null ? hudsonMasterComputer.loadStatistics == null : this.loadStatistics.equals(hudsonMasterComputer.loadStatistics)) &&
        (this.manualLaunchAllowed == null ? hudsonMasterComputer.manualLaunchAllowed == null : this.manualLaunchAllowed.equals(hudsonMasterComputer.manualLaunchAllowed)) &&
        (this.monitorData == null ? hudsonMasterComputer.monitorData == null : this.monitorData.equals(hudsonMasterComputer.monitorData)) &&
        (this.numExecutors == null ? hudsonMasterComputer.numExecutors == null : this.numExecutors.equals(hudsonMasterComputer.numExecutors)) &&
        (this.offline == null ? hudsonMasterComputer.offline == null : this.offline.equals(hudsonMasterComputer.offline)) &&
        (this.offlineCause == null ? hudsonMasterComputer.offlineCause == null : this.offlineCause.equals(hudsonMasterComputer.offlineCause)) &&
        (this.offlineCauseReason == null ? hudsonMasterComputer.offlineCauseReason == null : this.offlineCauseReason.equals(hudsonMasterComputer.offlineCauseReason)) &&
        (this.temporarilyOffline == null ? hudsonMasterComputer.temporarilyOffline == null : this.temporarilyOffline.equals(hudsonMasterComputer.temporarilyOffline));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.displayName == null ? 0: this.displayName.hashCode());
    result = 31 * result + (this.executors == null ? 0: this.executors.hashCode());
    result = 31 * result + (this.icon == null ? 0: this.icon.hashCode());
    result = 31 * result + (this.iconClassName == null ? 0: this.iconClassName.hashCode());
    result = 31 * result + (this.idle == null ? 0: this.idle.hashCode());
    result = 31 * result + (this.jnlpAgent == null ? 0: this.jnlpAgent.hashCode());
    result = 31 * result + (this.launchSupported == null ? 0: this.launchSupported.hashCode());
    result = 31 * result + (this.loadStatistics == null ? 0: this.loadStatistics.hashCode());
    result = 31 * result + (this.manualLaunchAllowed == null ? 0: this.manualLaunchAllowed.hashCode());
    result = 31 * result + (this.monitorData == null ? 0: this.monitorData.hashCode());
    result = 31 * result + (this.numExecutors == null ? 0: this.numExecutors.hashCode());
    result = 31 * result + (this.offline == null ? 0: this.offline.hashCode());
    result = 31 * result + (this.offlineCause == null ? 0: this.offlineCause.hashCode());
    result = 31 * result + (this.offlineCauseReason == null ? 0: this.offlineCauseReason.hashCode());
    result = 31 * result + (this.temporarilyOffline == null ? 0: this.temporarilyOffline.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonMasterComputer {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  displayName: ").append(displayName).append("\n");
    sb.append("  executors: ").append(executors).append("\n");
    sb.append("  icon: ").append(icon).append("\n");
    sb.append("  iconClassName: ").append(iconClassName).append("\n");
    sb.append("  idle: ").append(idle).append("\n");
    sb.append("  jnlpAgent: ").append(jnlpAgent).append("\n");
    sb.append("  launchSupported: ").append(launchSupported).append("\n");
    sb.append("  loadStatistics: ").append(loadStatistics).append("\n");
    sb.append("  manualLaunchAllowed: ").append(manualLaunchAllowed).append("\n");
    sb.append("  monitorData: ").append(monitorData).append("\n");
    sb.append("  numExecutors: ").append(numExecutors).append("\n");
    sb.append("  offline: ").append(offline).append("\n");
    sb.append("  offlineCause: ").append(offlineCause).append("\n");
    sb.append("  offlineCauseReason: ").append(offlineCauseReason).append("\n");
    sb.append("  temporarilyOffline: ").append(temporarilyOffline).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
