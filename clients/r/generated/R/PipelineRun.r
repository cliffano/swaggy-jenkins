# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineRun Class
#'
#' @field _class 
#' @field artifacts 
#' @field durationInMillis 
#' @field estimatedDurationInMillis 
#' @field enQueueTime 
#' @field endTime 
#' @field id 
#' @field organization 
#' @field pipeline 
#' @field result 
#' @field runSummary 
#' @field startTime 
#' @field state 
#' @field type 
#' @field commitId 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelineRun <- R6::R6Class(
  'PipelineRun',
  public = list(
    `_class` = NULL,
    `artifacts` = NULL,
    `durationInMillis` = NULL,
    `estimatedDurationInMillis` = NULL,
    `enQueueTime` = NULL,
    `endTime` = NULL,
    `id` = NULL,
    `organization` = NULL,
    `pipeline` = NULL,
    `result` = NULL,
    `runSummary` = NULL,
    `startTime` = NULL,
    `state` = NULL,
    `type` = NULL,
    `commitId` = NULL,
    initialize = function(`_class`, `artifacts`, `durationInMillis`, `estimatedDurationInMillis`, `enQueueTime`, `endTime`, `id`, `organization`, `pipeline`, `result`, `runSummary`, `startTime`, `state`, `type`, `commitId`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`artifacts`)) {
        stopifnot(is.list(`artifacts`), length(`artifacts`) != 0)
        lapply(`artifacts`, function(x) stopifnot(R6::is.R6(x)))
        self$`artifacts` <- `artifacts`
      }
      if (!missing(`durationInMillis`)) {
        stopifnot(is.numeric(`durationInMillis`), length(`durationInMillis`) == 1)
        self$`durationInMillis` <- `durationInMillis`
      }
      if (!missing(`estimatedDurationInMillis`)) {
        stopifnot(is.numeric(`estimatedDurationInMillis`), length(`estimatedDurationInMillis`) == 1)
        self$`estimatedDurationInMillis` <- `estimatedDurationInMillis`
      }
      if (!missing(`enQueueTime`)) {
        stopifnot(is.character(`enQueueTime`), length(`enQueueTime`) == 1)
        self$`enQueueTime` <- `enQueueTime`
      }
      if (!missing(`endTime`)) {
        stopifnot(is.character(`endTime`), length(`endTime`) == 1)
        self$`endTime` <- `endTime`
      }
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`organization`)) {
        stopifnot(is.character(`organization`), length(`organization`) == 1)
        self$`organization` <- `organization`
      }
      if (!missing(`pipeline`)) {
        stopifnot(is.character(`pipeline`), length(`pipeline`) == 1)
        self$`pipeline` <- `pipeline`
      }
      if (!missing(`result`)) {
        stopifnot(is.character(`result`), length(`result`) == 1)
        self$`result` <- `result`
      }
      if (!missing(`runSummary`)) {
        stopifnot(is.character(`runSummary`), length(`runSummary`) == 1)
        self$`runSummary` <- `runSummary`
      }
      if (!missing(`startTime`)) {
        stopifnot(is.character(`startTime`), length(`startTime`) == 1)
        self$`startTime` <- `startTime`
      }
      if (!missing(`state`)) {
        stopifnot(is.character(`state`), length(`state`) == 1)
        self$`state` <- `state`
      }
      if (!missing(`type`)) {
        stopifnot(is.character(`type`), length(`type`) == 1)
        self$`type` <- `type`
      }
      if (!missing(`commitId`)) {
        stopifnot(is.character(`commitId`), length(`commitId`) == 1)
        self$`commitId` <- `commitId`
      }
    },
    toJSON = function() {
      PipelineRunObject <- list()
      if (!is.null(self$`_class`)) {
        PipelineRunObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`artifacts`)) {
        PipelineRunObject[['artifacts']] <- lapply(self$`artifacts`, function(x) x$toJSON())
      }
      if (!is.null(self$`durationInMillis`)) {
        PipelineRunObject[['durationInMillis']] <- self$`durationInMillis`
      }
      if (!is.null(self$`estimatedDurationInMillis`)) {
        PipelineRunObject[['estimatedDurationInMillis']] <- self$`estimatedDurationInMillis`
      }
      if (!is.null(self$`enQueueTime`)) {
        PipelineRunObject[['enQueueTime']] <- self$`enQueueTime`
      }
      if (!is.null(self$`endTime`)) {
        PipelineRunObject[['endTime']] <- self$`endTime`
      }
      if (!is.null(self$`id`)) {
        PipelineRunObject[['id']] <- self$`id`
      }
      if (!is.null(self$`organization`)) {
        PipelineRunObject[['organization']] <- self$`organization`
      }
      if (!is.null(self$`pipeline`)) {
        PipelineRunObject[['pipeline']] <- self$`pipeline`
      }
      if (!is.null(self$`result`)) {
        PipelineRunObject[['result']] <- self$`result`
      }
      if (!is.null(self$`runSummary`)) {
        PipelineRunObject[['runSummary']] <- self$`runSummary`
      }
      if (!is.null(self$`startTime`)) {
        PipelineRunObject[['startTime']] <- self$`startTime`
      }
      if (!is.null(self$`state`)) {
        PipelineRunObject[['state']] <- self$`state`
      }
      if (!is.null(self$`type`)) {
        PipelineRunObject[['type']] <- self$`type`
      }
      if (!is.null(self$`commitId`)) {
        PipelineRunObject[['commitId']] <- self$`commitId`
      }

      PipelineRunObject
    },
    fromJSON = function(PipelineRunJson) {
      PipelineRunObject <- jsonlite::fromJSON(PipelineRunJson)
      if (!is.null(PipelineRunObject$`_class`)) {
        self$`_class` <- PipelineRunObject$`_class`
      }
      if (!is.null(PipelineRunObject$`artifacts`)) {
        self$`artifacts` <- lapply(PipelineRunObject$`artifacts`, function(x) {
          artifactsObject <- PipelineRunartifacts$new()
          artifactsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          artifactsObject
        })
      }
      if (!is.null(PipelineRunObject$`durationInMillis`)) {
        self$`durationInMillis` <- PipelineRunObject$`durationInMillis`
      }
      if (!is.null(PipelineRunObject$`estimatedDurationInMillis`)) {
        self$`estimatedDurationInMillis` <- PipelineRunObject$`estimatedDurationInMillis`
      }
      if (!is.null(PipelineRunObject$`enQueueTime`)) {
        self$`enQueueTime` <- PipelineRunObject$`enQueueTime`
      }
      if (!is.null(PipelineRunObject$`endTime`)) {
        self$`endTime` <- PipelineRunObject$`endTime`
      }
      if (!is.null(PipelineRunObject$`id`)) {
        self$`id` <- PipelineRunObject$`id`
      }
      if (!is.null(PipelineRunObject$`organization`)) {
        self$`organization` <- PipelineRunObject$`organization`
      }
      if (!is.null(PipelineRunObject$`pipeline`)) {
        self$`pipeline` <- PipelineRunObject$`pipeline`
      }
      if (!is.null(PipelineRunObject$`result`)) {
        self$`result` <- PipelineRunObject$`result`
      }
      if (!is.null(PipelineRunObject$`runSummary`)) {
        self$`runSummary` <- PipelineRunObject$`runSummary`
      }
      if (!is.null(PipelineRunObject$`startTime`)) {
        self$`startTime` <- PipelineRunObject$`startTime`
      }
      if (!is.null(PipelineRunObject$`state`)) {
        self$`state` <- PipelineRunObject$`state`
      }
      if (!is.null(PipelineRunObject$`type`)) {
        self$`type` <- PipelineRunObject$`type`
      }
      if (!is.null(PipelineRunObject$`commitId`)) {
        self$`commitId` <- PipelineRunObject$`commitId`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "artifacts": [%s],
           "durationInMillis": %d,
           "estimatedDurationInMillis": %d,
           "enQueueTime": %s,
           "endTime": %s,
           "id": %s,
           "organization": %s,
           "pipeline": %s,
           "result": %s,
           "runSummary": %s,
           "startTime": %s,
           "state": %s,
           "type": %s,
           "commitId": %s
        }',
        self$`_class`,
        lapply(self$`artifacts`, function(x) paste(x$toJSON(), sep=",")),
        self$`durationInMillis`,
        self$`estimatedDurationInMillis`,
        self$`enQueueTime`,
        self$`endTime`,
        self$`id`,
        self$`organization`,
        self$`pipeline`,
        self$`result`,
        self$`runSummary`,
        self$`startTime`,
        self$`state`,
        self$`type`,
        self$`commitId`
      )
    },
    fromJSONString = function(PipelineRunJson) {
      PipelineRunObject <- jsonlite::fromJSON(PipelineRunJson)
      self$`_class` <- PipelineRunObject$`_class`
      self$`artifacts` <- lapply(PipelineRunObject$`artifacts`, function(x) PipelineRunartifacts$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      self$`durationInMillis` <- PipelineRunObject$`durationInMillis`
      self$`estimatedDurationInMillis` <- PipelineRunObject$`estimatedDurationInMillis`
      self$`enQueueTime` <- PipelineRunObject$`enQueueTime`
      self$`endTime` <- PipelineRunObject$`endTime`
      self$`id` <- PipelineRunObject$`id`
      self$`organization` <- PipelineRunObject$`organization`
      self$`pipeline` <- PipelineRunObject$`pipeline`
      self$`result` <- PipelineRunObject$`result`
      self$`runSummary` <- PipelineRunObject$`runSummary`
      self$`startTime` <- PipelineRunObject$`startTime`
      self$`state` <- PipelineRunObject$`state`
      self$`type` <- PipelineRunObject$`type`
      self$`commitId` <- PipelineRunObject$`commitId`
    }
  )
)
