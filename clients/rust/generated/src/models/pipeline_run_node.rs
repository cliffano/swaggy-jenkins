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
pub struct PipelineRunNode {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "displayName")]
  display_name: Option<String>,
  #[serde(rename = "durationInMillis")]
  duration_in_millis: Option<i32>,
  #[serde(rename = "edges")]
  edges: Option<Vec<::models::PipelineRunNodeedges>>,
  #[serde(rename = "id")]
  id: Option<String>,
  #[serde(rename = "result")]
  result: Option<String>,
  #[serde(rename = "startTime")]
  start_time: Option<String>,
  #[serde(rename = "state")]
  state: Option<String>
}

impl PipelineRunNode {
  pub fn new() -> PipelineRunNode {
    PipelineRunNode {
      _class: None,
      display_name: None,
      duration_in_millis: None,
      edges: None,
      id: None,
      result: None,
      start_time: None,
      state: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> PipelineRunNode {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set_display_name(&mut self, display_name: String) {
    self.display_name = Some(display_name);
  }

  pub fn with_display_name(mut self, display_name: String) -> PipelineRunNode {
    self.display_name = Some(display_name);
    self
  }

  pub fn display_name(&self) -> Option<&String> {
    self.display_name.as_ref()
  }

  pub fn reset_display_name(&mut self) {
    self.display_name = None;
  }

  pub fn set_duration_in_millis(&mut self, duration_in_millis: i32) {
    self.duration_in_millis = Some(duration_in_millis);
  }

  pub fn with_duration_in_millis(mut self, duration_in_millis: i32) -> PipelineRunNode {
    self.duration_in_millis = Some(duration_in_millis);
    self
  }

  pub fn duration_in_millis(&self) -> Option<&i32> {
    self.duration_in_millis.as_ref()
  }

  pub fn reset_duration_in_millis(&mut self) {
    self.duration_in_millis = None;
  }

  pub fn set_edges(&mut self, edges: Vec<::models::PipelineRunNodeedges>) {
    self.edges = Some(edges);
  }

  pub fn with_edges(mut self, edges: Vec<::models::PipelineRunNodeedges>) -> PipelineRunNode {
    self.edges = Some(edges);
    self
  }

  pub fn edges(&self) -> Option<&Vec<::models::PipelineRunNodeedges>> {
    self.edges.as_ref()
  }

  pub fn reset_edges(&mut self) {
    self.edges = None;
  }

  pub fn set_id(&mut self, id: String) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: String) -> PipelineRunNode {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&String> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_result(&mut self, result: String) {
    self.result = Some(result);
  }

  pub fn with_result(mut self, result: String) -> PipelineRunNode {
    self.result = Some(result);
    self
  }

  pub fn result(&self) -> Option<&String> {
    self.result.as_ref()
  }

  pub fn reset_result(&mut self) {
    self.result = None;
  }

  pub fn set_start_time(&mut self, start_time: String) {
    self.start_time = Some(start_time);
  }

  pub fn with_start_time(mut self, start_time: String) -> PipelineRunNode {
    self.start_time = Some(start_time);
    self
  }

  pub fn start_time(&self) -> Option<&String> {
    self.start_time.as_ref()
  }

  pub fn reset_start_time(&mut self) {
    self.start_time = None;
  }

  pub fn set_state(&mut self, state: String) {
    self.state = Some(state);
  }

  pub fn with_state(mut self, state: String) -> PipelineRunNode {
    self.state = Some(state);
    self
  }

  pub fn state(&self) -> Option<&String> {
    self.state.as_ref()
  }

  pub fn reset_state(&mut self) {
    self.state = None;
  }

}



