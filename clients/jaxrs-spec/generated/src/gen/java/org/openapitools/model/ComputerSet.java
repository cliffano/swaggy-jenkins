package org.openapitools.model;

import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.HudsonMasterComputer;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class ComputerSet   {
  
  private @Valid String propertyClass = null;
  private @Valid Integer busyExecutors = null;
  private @Valid List<HudsonMasterComputer> computer = new ArrayList<HudsonMasterComputer>();
  private @Valid String displayName = null;
  private @Valid Integer totalExecutors = null;

  /**
   **/
  public ComputerSet propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  /**
   **/
  public ComputerSet busyExecutors(Integer busyExecutors) {
    this.busyExecutors = busyExecutors;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("busyExecutors")
  public Integer getBusyExecutors() {
    return busyExecutors;
  }
  public void setBusyExecutors(Integer busyExecutors) {
    this.busyExecutors = busyExecutors;
  }

  /**
   **/
  public ComputerSet computer(List<HudsonMasterComputer> computer) {
    this.computer = computer;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("computer")
  public List<HudsonMasterComputer> getComputer() {
    return computer;
  }
  public void setComputer(List<HudsonMasterComputer> computer) {
    this.computer = computer;
  }

  /**
   **/
  public ComputerSet displayName(String displayName) {
    this.displayName = displayName;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("displayName")
  public String getDisplayName() {
    return displayName;
  }
  public void setDisplayName(String displayName) {
    this.displayName = displayName;
  }

  /**
   **/
  public ComputerSet totalExecutors(Integer totalExecutors) {
    this.totalExecutors = totalExecutors;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("totalExecutors")
  public Integer getTotalExecutors() {
    return totalExecutors;
  }
  public void setTotalExecutors(Integer totalExecutors) {
    this.totalExecutors = totalExecutors;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComputerSet computerSet = (ComputerSet) o;
    return Objects.equals(propertyClass, computerSet.propertyClass) &&
        Objects.equals(busyExecutors, computerSet.busyExecutors) &&
        Objects.equals(computer, computerSet.computer) &&
        Objects.equals(displayName, computerSet.displayName) &&
        Objects.equals(totalExecutors, computerSet.totalExecutors);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, busyExecutors, computer, displayName, totalExecutors);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComputerSet {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    busyExecutors: ").append(toIndentedString(busyExecutors)).append("\n");
    sb.append("    computer: ").append(toIndentedString(computer)).append("\n");
    sb.append("    displayName: ").append(toIndentedString(displayName)).append("\n");
    sb.append("    totalExecutors: ").append(toIndentedString(totalExecutors)).append("\n");
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
