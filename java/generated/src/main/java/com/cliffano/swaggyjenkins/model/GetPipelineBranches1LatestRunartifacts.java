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
import com.google.gson.annotations.SerializedName;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;

/**
 * GetPipelineBranches1LatestRunartifacts
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2017-06-26T22:24:14.392+10:00")
public class GetPipelineBranches1LatestRunartifacts {
  @SerializedName("name")
  private String name = null;

  @SerializedName("size")
  private Integer size = null;

  @SerializedName("url")
  private String url = null;

  @SerializedName("_class")
  private String propertyClass = null;

  public GetPipelineBranches1LatestRunartifacts name(String name) {
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(value = "")
  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public GetPipelineBranches1LatestRunartifacts size(Integer size) {
    this.size = size;
    return this;
  }

   /**
   * Get size
   * @return size
  **/
  @ApiModelProperty(value = "")
  public Integer getSize() {
    return size;
  }

  public void setSize(Integer size) {
    this.size = size;
  }

  public GetPipelineBranches1LatestRunartifacts url(String url) {
    this.url = url;
    return this;
  }

   /**
   * Get url
   * @return url
  **/
  @ApiModelProperty(value = "")
  public String getUrl() {
    return url;
  }

  public void setUrl(String url) {
    this.url = url;
  }

  public GetPipelineBranches1LatestRunartifacts propertyClass(String propertyClass) {
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
    GetPipelineBranches1LatestRunartifacts getPipelineBranches1LatestRunartifacts = (GetPipelineBranches1LatestRunartifacts) o;
    return Objects.equals(this.name, getPipelineBranches1LatestRunartifacts.name) &&
        Objects.equals(this.size, getPipelineBranches1LatestRunartifacts.size) &&
        Objects.equals(this.url, getPipelineBranches1LatestRunartifacts.url) &&
        Objects.equals(this.propertyClass, getPipelineBranches1LatestRunartifacts.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, size, url, propertyClass);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GetPipelineBranches1LatestRunartifacts {\n");
    
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    url: ").append(toIndentedString(url)).append("\n");
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

