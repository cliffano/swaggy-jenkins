# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' Pipeline Class
#'
#' @field _class 
#' @field organization 
#' @field name 
#' @field displayName 
#' @field fullName 
#' @field weatherScore 
#' @field estimatedDurationInMillis 
#' @field latestRun 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Pipeline <- R6::R6Class(
  'Pipeline',
  public = list(
    `_class` = NULL,
    `organization` = NULL,
    `name` = NULL,
    `displayName` = NULL,
    `fullName` = NULL,
    `weatherScore` = NULL,
    `estimatedDurationInMillis` = NULL,
    `latestRun` = NULL,
    initialize = function(`_class`, `organization`, `name`, `displayName`, `fullName`, `weatherScore`, `estimatedDurationInMillis`, `latestRun`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`organization`)) {
        stopifnot(is.character(`organization`), length(`organization`) == 1)
        self$`organization` <- `organization`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`displayName`)) {
        stopifnot(is.character(`displayName`), length(`displayName`) == 1)
        self$`displayName` <- `displayName`
      }
      if (!missing(`fullName`)) {
        stopifnot(is.character(`fullName`), length(`fullName`) == 1)
        self$`fullName` <- `fullName`
      }
      if (!missing(`weatherScore`)) {
        stopifnot(is.numeric(`weatherScore`), length(`weatherScore`) == 1)
        self$`weatherScore` <- `weatherScore`
      }
      if (!missing(`estimatedDurationInMillis`)) {
        stopifnot(is.numeric(`estimatedDurationInMillis`), length(`estimatedDurationInMillis`) == 1)
        self$`estimatedDurationInMillis` <- `estimatedDurationInMillis`
      }
      if (!missing(`latestRun`)) {
        stopifnot(R6::is.R6(`latestRun`))
        self$`latestRun` <- `latestRun`
      }
    },
    toJSON = function() {
      PipelineObject <- list()
      if (!is.null(self$`_class`)) {
        PipelineObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`organization`)) {
        PipelineObject[['organization']] <- self$`organization`
      }
      if (!is.null(self$`name`)) {
        PipelineObject[['name']] <- self$`name`
      }
      if (!is.null(self$`displayName`)) {
        PipelineObject[['displayName']] <- self$`displayName`
      }
      if (!is.null(self$`fullName`)) {
        PipelineObject[['fullName']] <- self$`fullName`
      }
      if (!is.null(self$`weatherScore`)) {
        PipelineObject[['weatherScore']] <- self$`weatherScore`
      }
      if (!is.null(self$`estimatedDurationInMillis`)) {
        PipelineObject[['estimatedDurationInMillis']] <- self$`estimatedDurationInMillis`
      }
      if (!is.null(self$`latestRun`)) {
        PipelineObject[['latestRun']] <- self$`latestRun`$toJSON()
      }

      PipelineObject
    },
    fromJSON = function(PipelineJson) {
      PipelineObject <- jsonlite::fromJSON(PipelineJson)
      if (!is.null(PipelineObject$`_class`)) {
        self$`_class` <- PipelineObject$`_class`
      }
      if (!is.null(PipelineObject$`organization`)) {
        self$`organization` <- PipelineObject$`organization`
      }
      if (!is.null(PipelineObject$`name`)) {
        self$`name` <- PipelineObject$`name`
      }
      if (!is.null(PipelineObject$`displayName`)) {
        self$`displayName` <- PipelineObject$`displayName`
      }
      if (!is.null(PipelineObject$`fullName`)) {
        self$`fullName` <- PipelineObject$`fullName`
      }
      if (!is.null(PipelineObject$`weatherScore`)) {
        self$`weatherScore` <- PipelineObject$`weatherScore`
      }
      if (!is.null(PipelineObject$`estimatedDurationInMillis`)) {
        self$`estimatedDurationInMillis` <- PipelineObject$`estimatedDurationInMillis`
      }
      if (!is.null(PipelineObject$`latestRun`)) {
        latestRunObject <- PipelinelatestRun$new()
        latestRunObject$fromJSON(jsonlite::toJSON(PipelineObject$latestRun, auto_unbox = TRUE))
        self$`latestRun` <- latestRunObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "organization": %s,
           "name": %s,
           "displayName": %s,
           "fullName": %s,
           "weatherScore": %d,
           "estimatedDurationInMillis": %d,
           "latestRun": %s
        }',
        self$`_class`,
        self$`organization`,
        self$`name`,
        self$`displayName`,
        self$`fullName`,
        self$`weatherScore`,
        self$`estimatedDurationInMillis`,
        self$`latestRun`$toJSON()
      )
    },
    fromJSONString = function(PipelineJson) {
      PipelineObject <- jsonlite::fromJSON(PipelineJson)
      self$`_class` <- PipelineObject$`_class`
      self$`organization` <- PipelineObject$`organization`
      self$`name` <- PipelineObject$`name`
      self$`displayName` <- PipelineObject$`displayName`
      self$`fullName` <- PipelineObject$`fullName`
      self$`weatherScore` <- PipelineObject$`weatherScore`
      self$`estimatedDurationInMillis` <- PipelineObject$`estimatedDurationInMillis`
      PipelinelatestRunObject <- PipelinelatestRun$new()
      self$`latestRun` <- PipelinelatestRunObject$fromJSON(jsonlite::toJSON(PipelineObject$latestRun, auto_unbox = TRUE))
    }
  )
)