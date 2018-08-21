package org.openapitools.model;

import org.openapitools.model.GithubOrganizationlinks;
import javax.validation.constraints.*;
import javax.validation.Valid;


import io.swagger.annotations.*;
import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;


public class GithubOrganization   {
  
  private @Valid String propertyClass = null;
  private @Valid GithubOrganizationlinks links = null;
  private @Valid Boolean jenkinsOrganizationPipeline = null;
  private @Valid String name = null;

  /**
   **/
  public GithubOrganization propertyClass(String propertyClass) {
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
  public GithubOrganization links(GithubOrganizationlinks links) {
    this.links = links;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("_links")
  public GithubOrganizationlinks getLinks() {
    return links;
  }
  public void setLinks(GithubOrganizationlinks links) {
    this.links = links;
  }

  /**
   **/
  public GithubOrganization jenkinsOrganizationPipeline(Boolean jenkinsOrganizationPipeline) {
    this.jenkinsOrganizationPipeline = jenkinsOrganizationPipeline;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("jenkinsOrganizationPipeline")
  public Boolean getJenkinsOrganizationPipeline() {
    return jenkinsOrganizationPipeline;
  }
  public void setJenkinsOrganizationPipeline(Boolean jenkinsOrganizationPipeline) {
    this.jenkinsOrganizationPipeline = jenkinsOrganizationPipeline;
  }

  /**
   **/
  public GithubOrganization name(String name) {
    this.name = name;
    return this;
  }

  
  @ApiModelProperty(value = "")
  @JsonProperty("name")
  public String getName() {
    return name;
  }
  public void setName(String name) {
    this.name = name;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GithubOrganization githubOrganization = (GithubOrganization) o;
    return Objects.equals(propertyClass, githubOrganization.propertyClass) &&
        Objects.equals(links, githubOrganization.links) &&
        Objects.equals(jenkinsOrganizationPipeline, githubOrganization.jenkinsOrganizationPipeline) &&
        Objects.equals(name, githubOrganization.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, jenkinsOrganizationPipeline, name);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class GithubOrganization {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    jenkinsOrganizationPipeline: ").append(toIndentedString(jenkinsOrganizationPipeline)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
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

