package org.openapitools.server.api.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonInclude;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class BranchImplpermissions   {
  
  private Boolean create = null;
  private Boolean read = null;
  private Boolean start = null;
  private Boolean stop = null;
  private String propertyClass = null;

  public BranchImplpermissions () {

  }

  public BranchImplpermissions (Boolean create, Boolean read, Boolean start, Boolean stop, String propertyClass) {
    this.create = create;
    this.read = read;
    this.start = start;
    this.stop = stop;
    this.propertyClass = propertyClass;
  }

    
  @JsonProperty("create")
  public Boolean getCreate() {
    return create;
  }
  public void setCreate(Boolean create) {
    this.create = create;
  }

    
  @JsonProperty("read")
  public Boolean getRead() {
    return read;
  }
  public void setRead(Boolean read) {
    this.read = read;
  }

    
  @JsonProperty("start")
  public Boolean getStart() {
    return start;
  }
  public void setStart(Boolean start) {
    this.start = start;
  }

    
  @JsonProperty("stop")
  public Boolean getStop() {
    return stop;
  }
  public void setStop(Boolean stop) {
    this.stop = stop;
  }

    
  @JsonProperty("_class")
  public String getPropertyClass() {
    return propertyClass;
  }
  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    BranchImplpermissions branchImplpermissions = (BranchImplpermissions) o;
    return Objects.equals(create, branchImplpermissions.create) &&
        Objects.equals(read, branchImplpermissions.read) &&
        Objects.equals(start, branchImplpermissions.start) &&
        Objects.equals(stop, branchImplpermissions.stop) &&
        Objects.equals(propertyClass, branchImplpermissions.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(create, read, start, stop, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class BranchImplpermissions {\n");
    
    sb.append("    create: ").append(toIndentedString(create)).append("\n");
    sb.append("    read: ").append(toIndentedString(read)).append("\n");
    sb.append("    start: ").append(toIndentedString(start)).append("\n");
    sb.append("    stop: ").append(toIndentedString(stop)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
