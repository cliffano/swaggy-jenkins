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
import org.openapitools.client.model.PipelineActivityartifacts;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class PipelineActivity {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("artifacts")
  private List<PipelineActivityartifacts> artifacts = null;
  @SerializedName("durationInMillis")
  private Integer durationInMillis = null;
  @SerializedName("estimatedDurationInMillis")
  private Integer estimatedDurationInMillis = null;
  @SerializedName("enQueueTime")
  private String enQueueTime = null;
  @SerializedName("endTime")
  private String endTime = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("organization")
  private String organization = null;
  @SerializedName("pipeline")
  private String pipeline = null;
  @SerializedName("result")
  private String result = null;
  @SerializedName("runSummary")
  private String runSummary = null;
  @SerializedName("startTime")
  private String startTime = null;
  @SerializedName("state")
  private String state = null;
  @SerializedName("type")
  private String type = null;
  @SerializedName("commitId")
  private String commitId = null;

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
  public List<PipelineActivityartifacts> getArtifacts() {
    return artifacts;
  }
  public void setArtifacts(List<PipelineActivityartifacts> artifacts) {
    this.artifacts = artifacts;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getDurationInMillis() {
    return durationInMillis;
  }
  public void setDurationInMillis(Integer durationInMillis) {
    this.durationInMillis = durationInMillis;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getEstimatedDurationInMillis() {
    return estimatedDurationInMillis;
  }
  public void setEstimatedDurationInMillis(Integer estimatedDurationInMillis) {
    this.estimatedDurationInMillis = estimatedDurationInMillis;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getEnQueueTime() {
    return enQueueTime;
  }
  public void setEnQueueTime(String enQueueTime) {
    this.enQueueTime = enQueueTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getEndTime() {
    return endTime;
  }
  public void setEndTime(String endTime) {
    this.endTime = endTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getId() {
    return id;
  }
  public void setId(String id) {
    this.id = id;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getOrganization() {
    return organization;
  }
  public void setOrganization(String organization) {
    this.organization = organization;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getPipeline() {
    return pipeline;
  }
  public void setPipeline(String pipeline) {
    this.pipeline = pipeline;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getResult() {
    return result;
  }
  public void setResult(String result) {
    this.result = result;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getRunSummary() {
    return runSummary;
  }
  public void setRunSummary(String runSummary) {
    this.runSummary = runSummary;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getStartTime() {
    return startTime;
  }
  public void setStartTime(String startTime) {
    this.startTime = startTime;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getState() {
    return state;
  }
  public void setState(String state) {
    this.state = state;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getType() {
    return type;
  }
  public void setType(String type) {
    this.type = type;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCommitId() {
    return commitId;
  }
  public void setCommitId(String commitId) {
    this.commitId = commitId;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineActivity pipelineActivity = (PipelineActivity) o;
    return (this._class == null ? pipelineActivity._class == null : this._class.equals(pipelineActivity._class)) &&
        (this.artifacts == null ? pipelineActivity.artifacts == null : this.artifacts.equals(pipelineActivity.artifacts)) &&
        (this.durationInMillis == null ? pipelineActivity.durationInMillis == null : this.durationInMillis.equals(pipelineActivity.durationInMillis)) &&
        (this.estimatedDurationInMillis == null ? pipelineActivity.estimatedDurationInMillis == null : this.estimatedDurationInMillis.equals(pipelineActivity.estimatedDurationInMillis)) &&
        (this.enQueueTime == null ? pipelineActivity.enQueueTime == null : this.enQueueTime.equals(pipelineActivity.enQueueTime)) &&
        (this.endTime == null ? pipelineActivity.endTime == null : this.endTime.equals(pipelineActivity.endTime)) &&
        (this.id == null ? pipelineActivity.id == null : this.id.equals(pipelineActivity.id)) &&
        (this.organization == null ? pipelineActivity.organization == null : this.organization.equals(pipelineActivity.organization)) &&
        (this.pipeline == null ? pipelineActivity.pipeline == null : this.pipeline.equals(pipelineActivity.pipeline)) &&
        (this.result == null ? pipelineActivity.result == null : this.result.equals(pipelineActivity.result)) &&
        (this.runSummary == null ? pipelineActivity.runSummary == null : this.runSummary.equals(pipelineActivity.runSummary)) &&
        (this.startTime == null ? pipelineActivity.startTime == null : this.startTime.equals(pipelineActivity.startTime)) &&
        (this.state == null ? pipelineActivity.state == null : this.state.equals(pipelineActivity.state)) &&
        (this.type == null ? pipelineActivity.type == null : this.type.equals(pipelineActivity.type)) &&
        (this.commitId == null ? pipelineActivity.commitId == null : this.commitId.equals(pipelineActivity.commitId));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.artifacts == null ? 0: this.artifacts.hashCode());
    result = 31 * result + (this.durationInMillis == null ? 0: this.durationInMillis.hashCode());
    result = 31 * result + (this.estimatedDurationInMillis == null ? 0: this.estimatedDurationInMillis.hashCode());
    result = 31 * result + (this.enQueueTime == null ? 0: this.enQueueTime.hashCode());
    result = 31 * result + (this.endTime == null ? 0: this.endTime.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.organization == null ? 0: this.organization.hashCode());
    result = 31 * result + (this.pipeline == null ? 0: this.pipeline.hashCode());
    result = 31 * result + (this.result == null ? 0: this.result.hashCode());
    result = 31 * result + (this.runSummary == null ? 0: this.runSummary.hashCode());
    result = 31 * result + (this.startTime == null ? 0: this.startTime.hashCode());
    result = 31 * result + (this.state == null ? 0: this.state.hashCode());
    result = 31 * result + (this.type == null ? 0: this.type.hashCode());
    result = 31 * result + (this.commitId == null ? 0: this.commitId.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineActivity {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  artifacts: ").append(artifacts).append("\n");
    sb.append("  durationInMillis: ").append(durationInMillis).append("\n");
    sb.append("  estimatedDurationInMillis: ").append(estimatedDurationInMillis).append("\n");
    sb.append("  enQueueTime: ").append(enQueueTime).append("\n");
    sb.append("  endTime: ").append(endTime).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  organization: ").append(organization).append("\n");
    sb.append("  pipeline: ").append(pipeline).append("\n");
    sb.append("  result: ").append(result).append("\n");
    sb.append("  runSummary: ").append(runSummary).append("\n");
    sb.append("  startTime: ").append(startTime).append("\n");
    sb.append("  state: ").append(state).append("\n");
    sb.append("  type: ").append(type).append("\n");
    sb.append("  commitId: ").append(commitId).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
