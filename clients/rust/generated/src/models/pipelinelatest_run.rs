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
pub struct PipelinelatestRun {
  #[serde(rename = "artifacts")]
  artifacts: Option<Vec<::models::PipelinelatestRunartifacts>>,
  #[serde(rename = "durationInMillis")]
  duration_in_millis: Option<i32>,
  #[serde(rename = "estimatedDurationInMillis")]
  estimated_duration_in_millis: Option<i32>,
  #[serde(rename = "enQueueTime")]
  en_queue_time: Option<String>,
  #[serde(rename = "endTime")]
  end_time: Option<String>,
  #[serde(rename = "id")]
  id: Option<String>,
  #[serde(rename = "organization")]
  organization: Option<String>,
  #[serde(rename = "pipeline")]
  pipeline: Option<String>,
  #[serde(rename = "result")]
  result: Option<String>,
  #[serde(rename = "runSummary")]
  run_summary: Option<String>,
  #[serde(rename = "startTime")]
  start_time: Option<String>,
  #[serde(rename = "state")]
  state: Option<String>,
  #[serde(rename = "type")]
  _type: Option<String>,
  #[serde(rename = "commitId")]
  commit_id: Option<String>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl PipelinelatestRun {
  pub fn new() -> PipelinelatestRun {
    PipelinelatestRun {
      artifacts: None,
      duration_in_millis: None,
      estimated_duration_in_millis: None,
      en_queue_time: None,
      end_time: None,
      id: None,
      organization: None,
      pipeline: None,
      result: None,
      run_summary: None,
      start_time: None,
      state: None,
      _type: None,
      commit_id: None,
      _class: None
    }
  }

  pub fn set_artifacts(&mut self, artifacts: Vec<::models::PipelinelatestRunartifacts>) {
    self.artifacts = Some(artifacts);
  }

  pub fn with_artifacts(mut self, artifacts: Vec<::models::PipelinelatestRunartifacts>) -> PipelinelatestRun {
    self.artifacts = Some(artifacts);
    self
  }

  pub fn artifacts(&self) -> Option<&Vec<::models::PipelinelatestRunartifacts>> {
    self.artifacts.as_ref()
  }

  pub fn reset_artifacts(&mut self) {
    self.artifacts = None;
  }

  pub fn set_duration_in_millis(&mut self, duration_in_millis: i32) {
    self.duration_in_millis = Some(duration_in_millis);
  }

  pub fn with_duration_in_millis(mut self, duration_in_millis: i32) -> PipelinelatestRun {
    self.duration_in_millis = Some(duration_in_millis);
    self
  }

  pub fn duration_in_millis(&self) -> Option<&i32> {
    self.duration_in_millis.as_ref()
  }

  pub fn reset_duration_in_millis(&mut self) {
    self.duration_in_millis = None;
  }

  pub fn set_estimated_duration_in_millis(&mut self, estimated_duration_in_millis: i32) {
    self.estimated_duration_in_millis = Some(estimated_duration_in_millis);
  }

  pub fn with_estimated_duration_in_millis(mut self, estimated_duration_in_millis: i32) -> PipelinelatestRun {
    self.estimated_duration_in_millis = Some(estimated_duration_in_millis);
    self
  }

  pub fn estimated_duration_in_millis(&self) -> Option<&i32> {
    self.estimated_duration_in_millis.as_ref()
  }

  pub fn reset_estimated_duration_in_millis(&mut self) {
    self.estimated_duration_in_millis = None;
  }

  pub fn set_en_queue_time(&mut self, en_queue_time: String) {
    self.en_queue_time = Some(en_queue_time);
  }

  pub fn with_en_queue_time(mut self, en_queue_time: String) -> PipelinelatestRun {
    self.en_queue_time = Some(en_queue_time);
    self
  }

  pub fn en_queue_time(&self) -> Option<&String> {
    self.en_queue_time.as_ref()
  }

  pub fn reset_en_queue_time(&mut self) {
    self.en_queue_time = None;
  }

  pub fn set_end_time(&mut self, end_time: String) {
    self.end_time = Some(end_time);
  }

  pub fn with_end_time(mut self, end_time: String) -> PipelinelatestRun {
    self.end_time = Some(end_time);
    self
  }

  pub fn end_time(&self) -> Option<&String> {
    self.end_time.as_ref()
  }

  pub fn reset_end_time(&mut self) {
    self.end_time = None;
  }

  pub fn set_id(&mut self, id: String) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: String) -> PipelinelatestRun {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&String> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_organization(&mut self, organization: String) {
    self.organization = Some(organization);
  }

  pub fn with_organization(mut self, organization: String) -> PipelinelatestRun {
    self.organization = Some(organization);
    self
  }

  pub fn organization(&self) -> Option<&String> {
    self.organization.as_ref()
  }

  pub fn reset_organization(&mut self) {
    self.organization = None;
  }

  pub fn set_pipeline(&mut self, pipeline: String) {
    self.pipeline = Some(pipeline);
  }

  pub fn with_pipeline(mut self, pipeline: String) -> PipelinelatestRun {
    self.pipeline = Some(pipeline);
    self
  }

  pub fn pipeline(&self) -> Option<&String> {
    self.pipeline.as_ref()
  }

  pub fn reset_pipeline(&mut self) {
    self.pipeline = None;
  }

  pub fn set_result(&mut self, result: String) {
    self.result = Some(result);
  }

  pub fn with_result(mut self, result: String) -> PipelinelatestRun {
    self.result = Some(result);
    self
  }

  pub fn result(&self) -> Option<&String> {
    self.result.as_ref()
  }

  pub fn reset_result(&mut self) {
    self.result = None;
  }

  pub fn set_run_summary(&mut self, run_summary: String) {
    self.run_summary = Some(run_summary);
  }

  pub fn with_run_summary(mut self, run_summary: String) -> PipelinelatestRun {
    self.run_summary = Some(run_summary);
    self
  }

  pub fn run_summary(&self) -> Option<&String> {
    self.run_summary.as_ref()
  }

  pub fn reset_run_summary(&mut self) {
    self.run_summary = None;
  }

  pub fn set_start_time(&mut self, start_time: String) {
    self.start_time = Some(start_time);
  }

  pub fn with_start_time(mut self, start_time: String) -> PipelinelatestRun {
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

  pub fn with_state(mut self, state: String) -> PipelinelatestRun {
    self.state = Some(state);
    self
  }

  pub fn state(&self) -> Option<&String> {
    self.state.as_ref()
  }

  pub fn reset_state(&mut self) {
    self.state = None;
  }

  pub fn set__type(&mut self, _type: String) {
    self._type = Some(_type);
  }

  pub fn with__type(mut self, _type: String) -> PipelinelatestRun {
    self._type = Some(_type);
    self
  }

  pub fn _type(&self) -> Option<&String> {
    self._type.as_ref()
  }

  pub fn reset__type(&mut self) {
    self._type = None;
  }

  pub fn set_commit_id(&mut self, commit_id: String) {
    self.commit_id = Some(commit_id);
  }

  pub fn with_commit_id(mut self, commit_id: String) -> PipelinelatestRun {
    self.commit_id = Some(commit_id);
    self
  }

  pub fn commit_id(&self) -> Option<&String> {
    self.commit_id.as_ref()
  }

  pub fn reset_commit_id(&mut self) {
    self.commit_id = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> PipelinelatestRun {
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



