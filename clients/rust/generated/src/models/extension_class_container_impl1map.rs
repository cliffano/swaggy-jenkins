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
pub struct ExtensionClassContainerImpl1map {
  #[serde(rename = "io.jenkins.blueocean.service.embedded.rest.PipelineImpl")]
  io_jenkins_blueocean_service_embedded_rest_pipeline_impl: Option<::models::ExtensionClassImpl>,
  #[serde(rename = "io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl")]
  io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: Option<::models::ExtensionClassImpl>,
  #[serde(rename = "_class")]
  _class: Option<String>
}

impl ExtensionClassContainerImpl1map {
  pub fn new() -> ExtensionClassContainerImpl1map {
    ExtensionClassContainerImpl1map {
      io_jenkins_blueocean_service_embedded_rest_pipeline_impl: None,
      io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: None,
      _class: None
    }
  }

  pub fn set_io_jenkins_blueocean_service_embedded_rest_pipeline_impl(&mut self, io_jenkins_blueocean_service_embedded_rest_pipeline_impl: ::models::ExtensionClassImpl) {
    self.io_jenkins_blueocean_service_embedded_rest_pipeline_impl = Some(io_jenkins_blueocean_service_embedded_rest_pipeline_impl);
  }

  pub fn with_io_jenkins_blueocean_service_embedded_rest_pipeline_impl(mut self, io_jenkins_blueocean_service_embedded_rest_pipeline_impl: ::models::ExtensionClassImpl) -> ExtensionClassContainerImpl1map {
    self.io_jenkins_blueocean_service_embedded_rest_pipeline_impl = Some(io_jenkins_blueocean_service_embedded_rest_pipeline_impl);
    self
  }

  pub fn io_jenkins_blueocean_service_embedded_rest_pipeline_impl(&self) -> Option<&::models::ExtensionClassImpl> {
    self.io_jenkins_blueocean_service_embedded_rest_pipeline_impl.as_ref()
  }

  pub fn reset_io_jenkins_blueocean_service_embedded_rest_pipeline_impl(&mut self) {
    self.io_jenkins_blueocean_service_embedded_rest_pipeline_impl = None;
  }

  pub fn set_io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl(&mut self, io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: ::models::ExtensionClassImpl) {
    self.io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = Some(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl);
  }

  pub fn with_io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl(mut self, io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl: ::models::ExtensionClassImpl) -> ExtensionClassContainerImpl1map {
    self.io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = Some(io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl);
    self
  }

  pub fn io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl(&self) -> Option<&::models::ExtensionClassImpl> {
    self.io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl.as_ref()
  }

  pub fn reset_io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl(&mut self) {
    self.io_jenkins_blueocean_service_embedded_rest_multi_branch_pipeline_impl = None;
  }

  pub fn set__class(&mut self, _class: String) {
    self._class = Some(_class);
  }

  pub fn with__class(mut self, _class: String) -> ExtensionClassContainerImpl1map {
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



