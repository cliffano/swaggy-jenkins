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

package org.openapitools.client;

public class Pair {
  private String name = "";
  private String value = "";

  public Pair(String name, String value) {
    setName(name);
    setValue(value);
  }

  private void setName(String name) {
    if (!isValidString(name)) return;

    this.name = name;
  }

  private void setValue(String value) {
    if (!isValidString(value)) return;

    this.value = value;
  }

  public String getName() {
    return this.name;
  }

  public String getValue() {
    return this.value;
  }

  private boolean isValidString(String arg) {
    if (arg == null) return false;
    if (arg.trim().isEmpty()) return false;

    return true;
  }
}
