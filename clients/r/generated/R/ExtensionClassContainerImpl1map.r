# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' ExtensionClassContainerImpl1map Class
#'
#' @field io.jenkins.blueocean.service.embedded.rest.PipelineImpl 
#' @field io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ExtensionClassContainerImpl1map <- R6::R6Class(
  'ExtensionClassContainerImpl1map',
  public = list(
    `io.jenkins.blueocean.service.embedded.rest.PipelineImpl` = NULL,
    `io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl` = NULL,
    `_class` = NULL,
    initialize = function(`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`, `io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`, `_class`){
      if (!missing(`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`)) {
        stopifnot(R6::is.R6(`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`))
        self$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl` <- `io.jenkins.blueocean.service.embedded.rest.PipelineImpl`
      }
      if (!missing(`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`)) {
        stopifnot(R6::is.R6(`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`))
        self$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl` <- `io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      ExtensionClassContainerImpl1mapObject <- list()
      if (!is.null(self$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`)) {
        ExtensionClassContainerImpl1mapObject[['io.jenkins.blueocean.service.embedded.rest.PipelineImpl']] <- self$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`$toJSON()
      }
      if (!is.null(self$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`)) {
        ExtensionClassContainerImpl1mapObject[['io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl']] <- self$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`$toJSON()
      }
      if (!is.null(self$`_class`)) {
        ExtensionClassContainerImpl1mapObject[['_class']] <- self$`_class`
      }

      ExtensionClassContainerImpl1mapObject
    },
    fromJSON = function(ExtensionClassContainerImpl1mapJson) {
      ExtensionClassContainerImpl1mapObject <- jsonlite::fromJSON(ExtensionClassContainerImpl1mapJson)
      if (!is.null(ExtensionClassContainerImpl1mapObject$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`)) {
        io.jenkins.blueocean.service.embedded.rest.PipelineImplObject <- ExtensionClassImpl$new()
        io.jenkins.blueocean.service.embedded.rest.PipelineImplObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1mapObject$io.jenkins.blueocean.service.embedded.rest.PipelineImpl, auto_unbox = TRUE))
        self$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl` <- io.jenkins.blueocean.service.embedded.rest.PipelineImplObject
      }
      if (!is.null(ExtensionClassContainerImpl1mapObject$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`)) {
        io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImplObject <- ExtensionClassImpl$new()
        io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImplObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1mapObject$io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl, auto_unbox = TRUE))
        self$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl` <- io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImplObject
      }
      if (!is.null(ExtensionClassContainerImpl1mapObject$`_class`)) {
        self$`_class` <- ExtensionClassContainerImpl1mapObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "io.jenkins.blueocean.service.embedded.rest.PipelineImpl": %s,
           "io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl": %s,
           "_class": %s
        }',
        self$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl`$toJSON(),
        self$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl`$toJSON(),
        self$`_class`
      )
    },
    fromJSONString = function(ExtensionClassContainerImpl1mapJson) {
      ExtensionClassContainerImpl1mapObject <- jsonlite::fromJSON(ExtensionClassContainerImpl1mapJson)
      ExtensionClassImplObject <- ExtensionClassImpl$new()
      self$`io.jenkins.blueocean.service.embedded.rest.PipelineImpl` <- ExtensionClassImplObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1mapObject$io.jenkins.blueocean.service.embedded.rest.PipelineImpl, auto_unbox = TRUE))
      ExtensionClassImplObject <- ExtensionClassImpl$new()
      self$`io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl` <- ExtensionClassImplObject$fromJSON(jsonlite::toJSON(ExtensionClassContainerImpl1mapObject$io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl, auto_unbox = TRUE))
      self$`_class` <- ExtensionClassContainerImpl1mapObject$`_class`
    }
  )
)
