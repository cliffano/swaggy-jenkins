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
pub struct QueueLeftItem {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "actions")]
  actions: Option<Vec<::models::CauseAction>>,
  #[serde(rename = "blocked")]
  blocked: Option<bool>,
  #[serde(rename = "buildable")]
  buildable: Option<bool>,
  #[serde(rename = "id")]
  id: Option<i32>,
  #[serde(rename = "inQueueSince")]
  in_queue_since: Option<i32>,
  #[serde(rename = "params")]
  params: Option<String>,
  #[serde(rename = "stuck")]
  stuck: Option<bool>,
  #[serde(rename = "task")]
  task: Option<::models::FreeStyleProject>,
  #[serde(rename = "url")]
  url: Option<String>,
  #[serde(rename = "why")]
  why: Option<String>,
  #[serde(rename = "cancelled")]
  cancelled: Option<bool>,
  #[serde(rename = "executable")]
  executable: Option<::models::FreeStyleBuild>
}

impl QueueLeftItem {
  pub fn new() -> QueueLeftItem {
    QueueLeftItem {
      _class: None,
      actions: None,
      blocked: None,
      buildable: None,
      id: None,
      in_queue_since: None,
      params: None,
      stuck: None,
      task: None,
      url: None,
      why: None,
      cancelled: None,
      executable: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> QueueLeftItem {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_actions(&mut self, actions: Vec<::models::CauseAction>) {
    self.actions = Some(actions);
  }

  pub fn with_actions(mut self, actions: Vec<::models::CauseAction>) -> QueueLeftItem {
    self.actions = Some(actions);
    self
  }

  pub fn actions(&self) -> Option<&Vec<::models::CauseAction>> {
    self.actions.as_ref()
  }

  pub fn reset_actions(&mut self) {
    self.actions = None;
  }

  pub fn set_blocked(&mut self, blocked: bool) {
    self.blocked = Some(blocked);
  }

  pub fn with_blocked(mut self, blocked: bool) -> QueueLeftItem {
    self.blocked = Some(blocked);
    self
  }

  pub fn blocked(&self) -> Option<&bool> {
    self.blocked.as_ref()
  }

  pub fn reset_blocked(&mut self) {
    self.blocked = None;
  }

  pub fn set_buildable(&mut self, buildable: bool) {
    self.buildable = Some(buildable);
  }

  pub fn with_buildable(mut self, buildable: bool) -> QueueLeftItem {
    self.buildable = Some(buildable);
    self
  }

  pub fn buildable(&self) -> Option<&bool> {
    self.buildable.as_ref()
  }

  pub fn reset_buildable(&mut self) {
    self.buildable = None;
  }

  pub fn set_id(&mut self, id: i32) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: i32) -> QueueLeftItem {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&i32> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_in_queue_since(&mut self, in_queue_since: i32) {
    self.in_queue_since = Some(in_queue_since);
  }

  pub fn with_in_queue_since(mut self, in_queue_since: i32) -> QueueLeftItem {
    self.in_queue_since = Some(in_queue_since);
    self
  }

  pub fn in_queue_since(&self) -> Option<&i32> {
    self.in_queue_since.as_ref()
  }

  pub fn reset_in_queue_since(&mut self) {
    self.in_queue_since = None;
  }

  pub fn set_params(&mut self, params: String) {
    self.params = Some(params);
  }

  pub fn with_params(mut self, params: String) -> QueueLeftItem {
    self.params = Some(params);
    self
  }

  pub fn params(&self) -> Option<&String> {
    self.params.as_ref()
  }

  pub fn reset_params(&mut self) {
    self.params = None;
  }

  pub fn set_stuck(&mut self, stuck: bool) {
    self.stuck = Some(stuck);
  }

  pub fn with_stuck(mut self, stuck: bool) -> QueueLeftItem {
    self.stuck = Some(stuck);
    self
  }

  pub fn stuck(&self) -> Option<&bool> {
    self.stuck.as_ref()
  }

  pub fn reset_stuck(&mut self) {
    self.stuck = None;
  }

  pub fn set_task(&mut self, task: ::models::FreeStyleProject) {
    self.task = Some(task);
  }

  pub fn with_task(mut self, task: ::models::FreeStyleProject) -> QueueLeftItem {
    self.task = Some(task);
    self
  }

  pub fn task(&self) -> Option<&::models::FreeStyleProject> {
    self.task.as_ref()
  }

  pub fn reset_task(&mut self) {
    self.task = None;
  }

  pub fn set_url(&mut self, url: String) {
    self.url = Some(url);
  }

  pub fn with_url(mut self, url: String) -> QueueLeftItem {
    self.url = Some(url);
    self
  }

  pub fn url(&self) -> Option<&String> {
    self.url.as_ref()
  }

  pub fn reset_url(&mut self) {
    self.url = None;
  }

  pub fn set_why(&mut self, why: String) {
    self.why = Some(why);
  }

  pub fn with_why(mut self, why: String) -> QueueLeftItem {
    self.why = Some(why);
    self
  }

  pub fn why(&self) -> Option<&String> {
    self.why.as_ref()
  }

  pub fn reset_why(&mut self) {
    self.why = None;
  }

  pub fn set_cancelled(&mut self, cancelled: bool) {
    self.cancelled = Some(cancelled);
  }

  pub fn with_cancelled(mut self, cancelled: bool) -> QueueLeftItem {
    self.cancelled = Some(cancelled);
    self
  }

  pub fn cancelled(&self) -> Option<&bool> {
    self.cancelled.as_ref()
  }

  pub fn reset_cancelled(&mut self) {
    self.cancelled = None;
  }

  pub fn set_executable(&mut self, executable: ::models::FreeStyleBuild) {
    self.executable = Some(executable);
  }

  pub fn with_executable(mut self, executable: ::models::FreeStyleBuild) -> QueueLeftItem {
    self.executable = Some(executable);
    self
  }

  pub fn executable(&self) -> Option<&::models::FreeStyleBuild> {
    self.executable.as_ref()
  }

  pub fn reset_executable(&mut self) {
    self.executable = None;
  }

}



