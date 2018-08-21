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
pub struct InputStepImpl {
  #[serde(rename = "_class")]
  _class: Option<String>,
  #[serde(rename = "_links")]
  _links: Option<::models::InputStepImpllinks>,
  #[serde(rename = "id")]
  id: Option<String>,
  #[serde(rename = "message")]
  message: Option<String>,
  #[serde(rename = "ok")]
  ok: Option<String>,
  #[serde(rename = "parameters")]
  parameters: Option<Vec<::models::StringParameterDefinition>>,
  #[serde(rename = "submitter")]
  submitter: Option<String>
}

impl InputStepImpl {
  pub fn new() -> InputStepImpl {
    InputStepImpl {
      _class: None,
      _links: None,
      id: None,
      message: None,
      ok: None,
      parameters: None,
      submitter: None
    }
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> InputStepImpl {
    self._class = Some(_class);
    self
  }

  pub fn _class(&self) -> Option<&String> {
    self._class.as_ref()
  }

  pub fn reset__class(&mut self) {
    self._class = None;
  }

  pub fn set__links(&mut self, _links: ::models::InputStepImpllinks) {
    self._links = Some(_links);
  }

  pub fn with__links(mut self, _links: ::models::InputStepImpllinks) -> InputStepImpl {
    self._links = Some(_links);
    self
  }

  pub fn _links(&self) -> Option<&::models::InputStepImpllinks> {
    self._links.as_ref()
  }

  pub fn reset__links(&mut self) {
    self._links = None;
  }

  pub fn set_id(&mut self, id: String) {
    self.id = Some(id);
  }

  pub fn with_id(mut self, id: String) -> InputStepImpl {
    self.id = Some(id);
    self
  }

  pub fn id(&self) -> Option<&String> {
    self.id.as_ref()
  }

  pub fn reset_id(&mut self) {
    self.id = None;
  }

  pub fn set_message(&mut self, message: String) {
    self.message = Some(message);
  }

  pub fn with_message(mut self, message: String) -> InputStepImpl {
    self.message = Some(message);
    self
  }

  pub fn message(&self) -> Option<&String> {
    self.message.as_ref()
  }

  pub fn reset_message(&mut self) {
    self.message = None;
  }

  pub fn set_ok(&mut self, ok: String) {
    self.ok = Some(ok);
  }

  pub fn with_ok(mut self, ok: String) -> InputStepImpl {
    self.ok = Some(ok);
    self
  }

  pub fn ok(&self) -> Option<&String> {
    self.ok.as_ref()
  }

  pub fn reset_ok(&mut self) {
    self.ok = None;
  }

  pub fn set_parameters(&mut self, parameters: Vec<::models::StringParameterDefinition>) {
    self.parameters = Some(parameters);
  }

  pub fn with_parameters(mut self, parameters: Vec<::models::StringParameterDefinition>) -> InputStepImpl {
    self.parameters = Some(parameters);
    self
  }

  pub fn parameters(&self) -> Option<&Vec<::models::StringParameterDefinition>> {
    self.parameters.as_ref()
  }

  pub fn reset_parameters(&mut self) {
    self.parameters = None;
  }

  pub fn set_submitter(&mut self, submitter: String) {
    self.submitter = Some(submitter);
  }

  pub fn with_submitter(mut self, submitter: String) -> InputStepImpl {
    self.submitter = Some(submitter);
    self
  }

  pub fn submitter(&self) -> Option<&String> {
    self.submitter.as_ref()
  }

  pub fn reset_submitter(&mut self) {
    self.submitter = None;
  }

}



