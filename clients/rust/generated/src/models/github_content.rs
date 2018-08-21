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
pub struct GithubContent {
  #[serde(rename = "name")]
  name: Option<String>,
  #[serde(rename = "sha")]
  sha: Option<String>,
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "repo")]
  repo: Option<String>,
  #[serde(rename = "size")]
  size: Option<i32>,
  #[serde(rename = "owner")]
  owner: Option<String>,
  #[serde(rename = "path")]
  path: Option<String>,
  #[serde(rename = "base64Data")]
  base64_data: Option<String>
}

impl GithubContent {
  pub fn new() -> GithubContent {
    GithubContent {
      name: None,
      sha: None,
      _class: None,
      repo: None,
      size: None,
      owner: None,
      path: None,
      base64_data: None
    }
  }

  pub fn set_name(&mut self, name: String) {
    self.name = Some(name);
  }

  pub fn with_name(mut self, name: String) -> GithubContent {
    self.name = Some(name);
    self
  }

  pub fn name(&self) -> Option<&String> {
    self.name.as_ref()
  }

  pub fn reset_name(&mut self) {
    self.name = None;
  }

  pub fn set_sha(&mut self, sha: String) {
    self.sha = Some(sha);
  }

  pub fn with_sha(mut self, sha: String) -> GithubContent {
    self.sha = Some(sha);
    self
  }

  pub fn sha(&self) -> Option<&String> {
    self.sha.as_ref()
  }

  pub fn reset_sha(&mut self) {
    self.sha = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> GithubContent {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_repo(&mut self, repo: String) {
    self.repo = Some(repo);
  }

  pub fn with_repo(mut self, repo: String) -> GithubContent {
    self.repo = Some(repo);
    self
  }

  pub fn repo(&self) -> Option<&String> {
    self.repo.as_ref()
  }

  pub fn reset_repo(&mut self) {
    self.repo = None;
  }

  pub fn set_size(&mut self, size: i32) {
    self.size = Some(size);
  }

  pub fn with_size(mut self, size: i32) -> GithubContent {
    self.size = Some(size);
    self
  }

  pub fn size(&self) -> Option<&i32> {
    self.size.as_ref()
  }

  pub fn reset_size(&mut self) {
    self.size = None;
  }

  pub fn set_owner(&mut self, owner: String) {
    self.owner = Some(owner);
  }

  pub fn with_owner(mut self, owner: String) -> GithubContent {
    self.owner = Some(owner);
    self
  }

  pub fn owner(&self) -> Option<&String> {
    self.owner.as_ref()
  }

  pub fn reset_owner(&mut self) {
    self.owner = None;
  }

  pub fn set_path(&mut self, path: String) {
    self.path = Some(path);
  }

  pub fn with_path(mut self, path: String) -> GithubContent {
    self.path = Some(path);
    self
  }

  pub fn path(&self) -> Option<&String> {
    self.path.as_ref()
  }

  pub fn reset_path(&mut self) {
    self.path = None;
  }

  pub fn set_base64_data(&mut self, base64_data: String) {
    self.base64_data = Some(base64_data);
  }

  pub fn with_base64_data(mut self, base64_data: String) -> GithubContent {
    self.base64_data = Some(base64_data);
    self
  }

  pub fn base64_data(&self) -> Option<&String> {
    self.base64_data.as_ref()
  }

  pub fn reset_base64_data(&mut self) {
    self.base64_data = None;
  }

}



