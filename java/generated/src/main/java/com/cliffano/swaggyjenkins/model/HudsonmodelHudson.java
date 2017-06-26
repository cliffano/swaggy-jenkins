/*
 * Swaggy Jenkins
 * Jenkins API client generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.0.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package com.cliffano.swaggyjenkins.model;

import java.util.Objects;
import com.cliffano.swaggyjenkins.model.HudsonmodelAllView;
import com.cliffano.swaggyjenkins.model.HudsonmodelFreeStyleProject;
import com.cliffano.swaggyjenkins.model.HudsonmodelHudsonassignedLabels;
import com.cliffano.swaggyjenkins.model.JenkinsmodelUnlabeledLoadStatistics;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;

/**
 * HudsonmodelHudson
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
public class HudsonmodelHudson {
  @SerializedName("_class")
  private String propertyClass = null;

  @SerializedName("assignedLabels")
  private List<HudsonmodelHudsonassignedLabels> assignedLabels = null;

  @SerializedName("mode")
  private String mode = null;

  @SerializedName("nodeDescription")
  private String nodeDescription = null;

  @SerializedName("nodeName")
  private String nodeName = null;

  @SerializedName("numExecutors")
  private Integer numExecutors = null;

  @SerializedName("description")
  private String description = null;

  @SerializedName("jobs")
  private List<HudsonmodelFreeStyleProject> jobs = null;

  @SerializedName("primaryView")
  private HudsonmodelAllView primaryView = null;

  @SerializedName("quietingDown")
  private Boolean quietingDown = null;

  @SerializedName("slaveAgentPort")
  private Integer slaveAgentPort = null;

  @SerializedName("unlabeledLoad")
  private JenkinsmodelUnlabeledLoadStatistics unlabeledLoad = null;

  @SerializedName("useCrumbs")
  private Boolean useCrumbs = null;

  @SerializedName("useSecurity")
  private Boolean useSecurity = null;

  @SerializedName("views")
  private List<HudsonmodelAllView> views = null;

  public HudsonmodelHudson propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")
  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public HudsonmodelHudson assignedLabels(List<HudsonmodelHudsonassignedLabels> assignedLabels) {
    this.assignedLabels = assignedLabels;
    return this;
  }

  public HudsonmodelHudson addAssignedLabelsItem(HudsonmodelHudsonassignedLabels assignedLabelsItem) {
    if (this.assignedLabels == null) {
      this.assignedLabels = new ArrayList<HudsonmodelHudsonassignedLabels>();
    }
    this.assignedLabels.add(assignedLabelsItem);
    return this;
  }

   /**
   * Get assignedLabels
   * @return assignedLabels
  **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelHudsonassignedLabels> getAssignedLabels() {
    return assignedLabels;
  }

  public void setAssignedLabels(List<HudsonmodelHudsonassignedLabels> assignedLabels) {
    this.assignedLabels = assignedLabels;
  }

  public HudsonmodelHudson mode(String mode) {
    this.mode = mode;
    return this;
  }

   /**
   * Get mode
   * @return mode
  **/
  @ApiModelProperty(value = "")
  public String getMode() {
    return mode;
  }

  public void setMode(String mode) {
    this.mode = mode;
  }

  public HudsonmodelHudson nodeDescription(String nodeDescription) {
    this.nodeDescription = nodeDescription;
    return this;
  }

   /**
   * Get nodeDescription
   * @return nodeDescription
  **/
  @ApiModelProperty(value = "")
  public String getNodeDescription() {
    return nodeDescription;
  }

  public void setNodeDescription(String nodeDescription) {
    this.nodeDescription = nodeDescription;
  }

  public HudsonmodelHudson nodeName(String nodeName) {
    this.nodeName = nodeName;
    return this;
  }

   /**
   * Get nodeName
   * @return nodeName
  **/
  @ApiModelProperty(value = "")
  public String getNodeName() {
    return nodeName;
  }

  public void setNodeName(String nodeName) {
    this.nodeName = nodeName;
  }

  public HudsonmodelHudson numExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
    return this;
  }

   /**
   * Get numExecutors
   * @return numExecutors
  **/
  @ApiModelProperty(value = "")
  public Integer getNumExecutors() {
    return numExecutors;
  }

  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

  public HudsonmodelHudson description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Get description
   * @return description
  **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public HudsonmodelHudson jobs(List<HudsonmodelFreeStyleProject> jobs) {
    this.jobs = jobs;
    return this;
  }

  public HudsonmodelHudson addJobsItem(HudsonmodelFreeStyleProject jobsItem) {
    if (this.jobs == null) {
      this.jobs = new ArrayList<HudsonmodelFreeStyleProject>();
    }
    this.jobs.add(jobsItem);
    return this;
  }

   /**
   * Get jobs
   * @return jobs
  **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelFreeStyleProject> getJobs() {
    return jobs;
  }

  public void setJobs(List<HudsonmodelFreeStyleProject> jobs) {
    this.jobs = jobs;
  }

  public HudsonmodelHudson primaryView(HudsonmodelAllView primaryView) {
    this.primaryView = primaryView;
    return this;
  }

   /**
   * Get primaryView
   * @return primaryView
  **/
  @ApiModelProperty(value = "")
  public HudsonmodelAllView getPrimaryView() {
    return primaryView;
  }

  public void setPrimaryView(HudsonmodelAllView primaryView) {
    this.primaryView = primaryView;
  }

  public HudsonmodelHudson quietingDown(Boolean quietingDown) {
    this.quietingDown = quietingDown;
    return this;
  }

   /**
   * Get quietingDown
   * @return quietingDown
  **/
  @ApiModelProperty(value = "")
  public Boolean getQuietingDown() {
    return quietingDown;
  }

  public void setQuietingDown(Boolean quietingDown) {
    this.quietingDown = quietingDown;
  }

  public HudsonmodelHudson slaveAgentPort(Integer slaveAgentPort) {
    this.slaveAgentPort = slaveAgentPort;
    return this;
  }

   /**
   * Get slaveAgentPort
   * @return slaveAgentPort
  **/
  @ApiModelProperty(value = "")
  public Integer getSlaveAgentPort() {
    return slaveAgentPort;
  }

  public void setSlaveAgentPort(Integer slaveAgentPort) {
    this.slaveAgentPort = slaveAgentPort;
  }

  public HudsonmodelHudson unlabeledLoad(JenkinsmodelUnlabeledLoadStatistics unlabeledLoad) {
    this.unlabeledLoad = unlabeledLoad;
    return this;
  }

   /**
   * Get unlabeledLoad
   * @return unlabeledLoad
  **/
  @ApiModelProperty(value = "")
  public JenkinsmodelUnlabeledLoadStatistics getUnlabeledLoad() {
    return unlabeledLoad;
  }

  public void setUnlabeledLoad(JenkinsmodelUnlabeledLoadStatistics unlabeledLoad) {
    this.unlabeledLoad = unlabeledLoad;
  }

  public HudsonmodelHudson useCrumbs(Boolean useCrumbs) {
    this.useCrumbs = useCrumbs;
    return this;
  }

   /**
   * Get useCrumbs
   * @return useCrumbs
  **/
  @ApiModelProperty(value = "")
  public Boolean getUseCrumbs() {
    return useCrumbs;
  }

  public void setUseCrumbs(Boolean useCrumbs) {
    this.useCrumbs = useCrumbs;
  }

  public HudsonmodelHudson useSecurity(Boolean useSecurity) {
    this.useSecurity = useSecurity;
    return this;
  }

   /**
   * Get useSecurity
   * @return useSecurity
  **/
  @ApiModelProperty(value = "")
  public Boolean getUseSecurity() {
    return useSecurity;
  }

  public void setUseSecurity(Boolean useSecurity) {
    this.useSecurity = useSecurity;
  }

  public HudsonmodelHudson views(List<HudsonmodelAllView> views) {
    this.views = views;
    return this;
  }

  public HudsonmodelHudson addViewsItem(HudsonmodelAllView viewsItem) {
    if (this.views == null) {
      this.views = new ArrayList<HudsonmodelAllView>();
    }
    this.views.add(viewsItem);
    return this;
  }

   /**
   * Get views
   * @return views
  **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelAllView> getViews() {
    return views;
  }

  public void setViews(List<HudsonmodelAllView> views) {
    this.views = views;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelHudson hudsonmodelHudson = (HudsonmodelHudson) o;
    return Objects.equals(this.propertyClass, hudsonmodelHudson.propertyClass) &&
        Objects.equals(this.assignedLabels, hudsonmodelHudson.assignedLabels) &&
        Objects.equals(this.mode, hudsonmodelHudson.mode) &&
        Objects.equals(this.nodeDescription, hudsonmodelHudson.nodeDescription) &&
        Objects.equals(this.nodeName, hudsonmodelHudson.nodeName) &&
        Objects.equals(this.numExecutors, hudsonmodelHudson.numExecutors) &&
        Objects.equals(this.description, hudsonmodelHudson.description) &&
        Objects.equals(this.jobs, hudsonmodelHudson.jobs) &&
        Objects.equals(this.primaryView, hudsonmodelHudson.primaryView) &&
        Objects.equals(this.quietingDown, hudsonmodelHudson.quietingDown) &&
        Objects.equals(this.slaveAgentPort, hudsonmodelHudson.slaveAgentPort) &&
        Objects.equals(this.unlabeledLoad, hudsonmodelHudson.unlabeledLoad) &&
        Objects.equals(this.useCrumbs, hudsonmodelHudson.useCrumbs) &&
        Objects.equals(this.useSecurity, hudsonmodelHudson.useSecurity) &&
        Objects.equals(this.views, hudsonmodelHudson.views);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, assignedLabels, mode, nodeDescription, nodeName, numExecutors, description, jobs, primaryView, quietingDown, slaveAgentPort, unlabeledLoad, useCrumbs, useSecurity, views);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelHudson {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    assignedLabels: ").append(toIndentedString(assignedLabels)).append("\n");
    sb.append("    mode: ").append(toIndentedString(mode)).append("\n");
    sb.append("    nodeDescription: ").append(toIndentedString(nodeDescription)).append("\n");
    sb.append("    nodeName: ").append(toIndentedString(nodeName)).append("\n");
    sb.append("    numExecutors: ").append(toIndentedString(numExecutors)).append("\n");
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    jobs: ").append(toIndentedString(jobs)).append("\n");
    sb.append("    primaryView: ").append(toIndentedString(primaryView)).append("\n");
    sb.append("    quietingDown: ").append(toIndentedString(quietingDown)).append("\n");
    sb.append("    slaveAgentPort: ").append(toIndentedString(slaveAgentPort)).append("\n");
    sb.append("    unlabeledLoad: ").append(toIndentedString(unlabeledLoad)).append("\n");
    sb.append("    useCrumbs: ").append(toIndentedString(useCrumbs)).append("\n");
    sb.append("    useSecurity: ").append(toIndentedString(useSecurity)).append("\n");
    sb.append("    views: ").append(toIndentedString(views)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
  
}

