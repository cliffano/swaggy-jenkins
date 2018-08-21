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

import org.openapitools.client.model.GithubScmlinks;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class GithubScm {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("_links")
  private GithubScmlinks links = null;
  @SerializedName("credentialId")
  private String credentialId = null;
  @SerializedName("id")
  private String id = null;
  @SerializedName("uri")
  private String uri = null;

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
  public GithubScmlinks getLinks() {
    return links;
  }
  public void setLinks(GithubScmlinks links) {
    this.links = links;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCredentialId() {
    return credentialId;
  }
  public void setCredentialId(String credentialId) {
    this.credentialId = credentialId;
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
  public String getUri() {
    return uri;
  }
  public void setUri(String uri) {
    this.uri = uri;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    GithubScm githubScm = (GithubScm) o;
    return (this._class == null ? githubScm._class == null : this._class.equals(githubScm._class)) &&
        (this.links == null ? githubScm.links == null : this.links.equals(githubScm.links)) &&
        (this.credentialId == null ? githubScm.credentialId == null : this.credentialId.equals(githubScm.credentialId)) &&
        (this.id == null ? githubScm.id == null : this.id.equals(githubScm.id)) &&
        (this.uri == null ? githubScm.uri == null : this.uri.equals(githubScm.uri));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.links == null ? 0: this.links.hashCode());
    result = 31 * result + (this.credentialId == null ? 0: this.credentialId.hashCode());
    result = 31 * result + (this.id == null ? 0: this.id.hashCode());
    result = 31 * result + (this.uri == null ? 0: this.uri.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class GithubScm {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  links: ").append(links).append("\n");
    sb.append("  credentialId: ").append(credentialId).append("\n");
    sb.append("  id: ").append(id).append("\n");
    sb.append("  uri: ").append(uri).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
