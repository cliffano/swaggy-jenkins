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
pub struct HudsonMasterComputerexecutors {
  #[serde(rename = "currentExecutable")]
  current_executable: Option<::models::FreeStyleBuild>,
  #[serde(rename = "idle")]
  idle: Option<bool>,
  #[serde(rename = "likelyStuck")]
  likely_stuck: Option<bool>,
  #[serde(rename = "number")]
  number: Option<i32>,
  #[serde(rename = "progress")]
  progress: Option<i32>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl HudsonMasterComputerexecutors {
  pub fn new() -> HudsonMasterComputerexecutors {
    HudsonMasterComputerexecutors {
      current_executable: None,
      idle: None,
      likely_stuck: None,
      number: None,
      progress: None,
      _class: None
    }
  }

  pub fn set_current_executable(&mut self, current_executable: ::models::FreeStyleBuild) {
    self.current_executable = Some(current_executable);
  }

  pub fn with_current_executable(mut self, current_executable: ::models::FreeStyleBuild) -> HudsonMasterComputerexecutors {
    self.current_executable = Some(current_executable);
    self
  }

  pub fn current_executable(&self) -> Option<&::models::FreeStyleBuild> {
    self.current_executable.as_ref()
  }

  pub fn reset_current_executable(&mut self) {
    self.current_executable = None;
  }

  pub fn set_idle(&mut self, idle: bool) {
    self.idle = Some(idle);
  }

  pub fn with_idle(mut self, idle: bool) -> HudsonMasterComputerexecutors {
    self.idle = Some(idle);
    self
  }

  pub fn idle(&self) -> Option<&bool> {
    self.idle.as_ref()
  }

  pub fn reset_idle(&mut self) {
    self.idle = None;
  }

  pub fn set_likely_stuck(&mut self, likely_stuck: bool) {
    self.likely_stuck = Some(likely_stuck);
  }

  pub fn with_likely_stuck(mut self, likely_stuck: bool) -> HudsonMasterComputerexecutors {
    self.likely_stuck = Some(likely_stuck);
    self
  }

  pub fn likely_stuck(&self) -> Option<&bool> {
    self.likely_stuck.as_ref()
  }

  pub fn reset_likely_stuck(&mut self) {
    self.likely_stuck = None;
  }

  pub fn set_number(&mut self, number: i32) {
    self.number = Some(number);
  }

  pub fn with_number(mut self, number: i32) -> HudsonMasterComputerexecutors {
    self.number = Some(number);
    self
  }

  pub fn number(&self) -> Option<&i32> {
    self.number.as_ref()
  }

  pub fn reset_number(&mut self) {
    self.number = None;
  }

  pub fn set_progress(&mut self, progress: i32) {
    self.progress = Some(progress);
  }

  pub fn with_progress(mut self, progress: i32) -> HudsonMasterComputerexecutors {
    self.progress = Some(progress);
    self
  }

  pub fn progress(&self) -> Option<&i32> {
    self.progress.as_ref()
  }

  pub fn reset_progress(&mut self) {
    self.progress = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> HudsonMasterComputerexecutors {
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



