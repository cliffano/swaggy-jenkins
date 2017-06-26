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
import com.cliffano.swaggyjenkins.model.SwaggyjenkinsPipeline;
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * GetPipelines
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
public class GetPipelines {
  @SerializedName("0")
  private SwaggyjenkinsPipeline _0 = null;

  @SerializedName("__sourcePath")
  private String sourcePath = null;

  @SerializedName("_class")
  private String propertyClass = null;

  public GetPipelines _0(SwaggyjenkinsPipeline _0) {
    this._0 = _0;
    return this;
  }

   /**
   * Get _0
   * @return _0
  **/
  @ApiModelProperty(value = "")
  public SwaggyjenkinsPipeline get0() {
    return _0;
  }

  public void set0(SwaggyjenkinsPipeline _0) {
    this._0 = _0;
  }

  public GetPipelines sourcePath(String sourcePath) {
    this.sourcePath = sourcePath;
    return this;
  }

   /**
   * Get sourcePath
   * @return sourcePath
  **/
  @ApiModelProperty(value = "")
  public String getSourcePath() {
    return sourcePath;
  }

  public void setSourcePath(String sourcePath) {
    this.sourcePath = sourcePath;
  }

  public GetPipelines propertyClass(String propertyClass) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GetPipelines getPipelines = (GetPipelines) o;
    return Objects.equals(this._0, getPipelines._0) &&
        Objects.equals(this.sourcePath, getPipelines.sourcePath) &&
        Objects.equals(this.propertyClass, getPipelines.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(_0, sourcePath, propertyClass);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetPipelines {\n");
    
    sb.append("    _0: ").append(toIndentedString(_0)).append("\n");
    sb.append("    sourcePath: ").append(toIndentedString(sourcePath)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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

