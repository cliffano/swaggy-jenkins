/* 
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct GithubOrganizationlinks {
  #[serde(rename = "repositories")]
  repositories: Option<::models::Link>,
  #[serde(rename = "self")]
  _self: Option<::models::Link>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl GithubOrganizationlinks {
  pub fn new() -> GithubOrganizationlinks {
    GithubOrganizationlinks {
      repositories: None,
      _self: None,
      _class: None
    }
  }

  pub fn set_repositories(&mut self, repositories: ::models::Link) {
    self.repositories = Some(repositories);
  }

  pub fn with_repositories(mut self, repositories: ::models::Link) -> GithubOrganizationlinks {
    self.repositories = Some(repositories);
    self
  }

  pub fn repositories(&self) -> Option<&::models::Link> {
    self.repositories.as_ref()
  }

  pub fn reset_repositories(&mut self) {
    self.repositories = None;
  }

  pub fn set__self(&mut self, _self: ::models::Link) {
    self._self = Some(_self);
  }

  pub fn with__self(mut self, _self: ::models::Link) -> GithubOrganizationlinks {
    self._self = Some(_self);
    self
  }

  pub fn _self(&self) -> Option<&::models::Link> {
    self._self.as_ref()
  }

  pub fn reset__self(&mut self) {
    self._self = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> GithubOrganizationlinks {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

}



