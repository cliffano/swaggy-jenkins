package apimodels;

import com.fasterxml.jackson.annotation.*;
import java.util.Set;
import javax.validation.*;
import java.util.Objects;
import javax.validation.constraints.*;
/**
 * FreeStyleProjecthealthReport
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaPlayFrameworkCodegen", date = "2019-04-10T13:31:26.487Z[GMT]")

@SuppressWarnings({"UnusedReturnValue", "WeakerAccess"})
public class FreeStyleProjecthealthReport   {
  @JsonProperty("description")
  private String description = null;

  @JsonProperty("iconClassName")
  private String iconClassName = null;

  @JsonProperty("iconUrl")
  private String iconUrl = null;

  @JsonProperty("score")
  private Integer score = null;

  @JsonProperty("_class")
  private String propertyClass = null;

  public FreeStyleProjecthealthReport description(String description) {
    this.description = description;
    return this;
  }

   /**
   * Get description
   * @return description
  **/
    public String getDescription() {
    return description;
  }

  public void setDescription(String description) {
    this.description = description;
  }

  public FreeStyleProjecthealthReport iconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
    return this;
  }

   /**
   * Get iconClassName
   * @return iconClassName
  **/
    public String getIconClassName() {
    return iconClassName;
  }

  public void setIconClassName(String iconClassName) {
    this.iconClassName = iconClassName;
  }

  public FreeStyleProjecthealthReport iconUrl(String iconUrl) {
    this.iconUrl = iconUrl;
    return this;
  }

   /**
   * Get iconUrl
   * @return iconUrl
  **/
    public String getIconUrl() {
    return iconUrl;
  }

  public void setIconUrl(String iconUrl) {
    this.iconUrl = iconUrl;
  }

  public FreeStyleProjecthealthReport score(Integer score) {
    this.score = score;
    return this;
  }

   /**
   * Get score
   * @return score
  **/
    public Integer getScore() {
    return score;
  }

  public void setScore(Integer score) {
    this.score = score;
  }

  public FreeStyleProjecthealthReport propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
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
    FreeStyleProjecthealthReport freeStyleProjecthealthReport = (FreeStyleProjecthealthReport) o;
    return Objects.equals(description, freeStyleProjecthealthReport.description) &&
        Objects.equals(iconClassName, freeStyleProjecthealthReport.iconClassName) &&
        Objects.equals(iconUrl, freeStyleProjecthealthReport.iconUrl) &&
        Objects.equals(score, freeStyleProjecthealthReport.score) &&
        Objects.equals(propertyClass, freeStyleProjecthealthReport.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(description, iconClassName, iconUrl, score, propertyClass);
  }

  @SuppressWarnings("StringBufferReplaceableByString")
  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FreeStyleProjecthealthReport {\n");
    
    sb.append("    description: ").append(toIndentedString(description)).append("\n");
    sb.append("    iconClassName: ").append(toIndentedString(iconClassName)).append("\n");
    sb.append("    iconUrl: ").append(toIndentedString(iconUrl)).append("\n");
    sb.append("    score: ").append(toIndentedString(score)).append("\n");
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

