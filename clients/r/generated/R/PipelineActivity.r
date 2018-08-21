# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineActivity Class
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
PipelineActivity <- R6::R6Class(
  'PipelineActivity',
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
      PipelineActivityObject <- list()
      if (!is.null(self$`_class`)) {
        PipelineActivityObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`artifacts`)) {
        PipelineActivityObject[['artifacts']] <- lapply(self$`artifacts`, function(x) x$toJSON())
      }
      if (!is.null(self$`durationInMillis`)) {
        PipelineActivityObject[['durationInMillis']] <- self$`durationInMillis`
      }
      if (!is.null(self$`estimatedDurationInMillis`)) {
        PipelineActivityObject[['estimatedDurationInMillis']] <- self$`estimatedDurationInMillis`
      }
      if (!is.null(self$`enQueueTime`)) {
        PipelineActivityObject[['enQueueTime']] <- self$`enQueueTime`
      }
      if (!is.null(self$`endTime`)) {
        PipelineActivityObject[['endTime']] <- self$`endTime`
      }
      if (!is.null(self$`id`)) {
        PipelineActivityObject[['id']] <- self$`id`
      }
      if (!is.null(self$`organization`)) {
        PipelineActivityObject[['organization']] <- self$`organization`
      }
      if (!is.null(self$`pipeline`)) {
        PipelineActivityObject[['pipeline']] <- self$`pipeline`
      }
      if (!is.null(self$`result`)) {
        PipelineActivityObject[['result']] <- self$`result`
      }
      if (!is.null(self$`runSummary`)) {
        PipelineActivityObject[['runSummary']] <- self$`runSummary`
      }
      if (!is.null(self$`startTime`)) {
        PipelineActivityObject[['startTime']] <- self$`startTime`
      }
      if (!is.null(self$`state`)) {
        PipelineActivityObject[['state']] <- self$`state`
      }
      if (!is.null(self$`type`)) {
        PipelineActivityObject[['type']] <- self$`type`
      }
      if (!is.null(self$`commitId`)) {
        PipelineActivityObject[['commitId']] <- self$`commitId`
      }

      PipelineActivityObject
    },
    fromJSON = function(PipelineActivityJson) {
      PipelineActivityObject <- jsonlite::fromJSON(PipelineActivityJson)
      if (!is.null(PipelineActivityObject$`_class`)) {
        self$`_class` <- PipelineActivityObject$`_class`
      }
      if (!is.null(PipelineActivityObject$`artifacts`)) {
        self$`artifacts` <- lapply(PipelineActivityObject$`artifacts`, function(x) {
          artifactsObject <- PipelineActivityartifacts$new()
          artifactsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          artifactsObject
        })
      }
      if (!is.null(PipelineActivityObject$`durationInMillis`)) {
        self$`durationInMillis` <- PipelineActivityObject$`durationInMillis`
      }
      if (!is.null(PipelineActivityObject$`estimatedDurationInMillis`)) {
        self$`estimatedDurationInMillis` <- PipelineActivityObject$`estimatedDurationInMillis`
      }
      if (!is.null(PipelineActivityObject$`enQueueTime`)) {
        self$`enQueueTime` <- PipelineActivityObject$`enQueueTime`
      }
      if (!is.null(PipelineActivityObject$`endTime`)) {
        self$`endTime` <- PipelineActivityObject$`endTime`
      }
      if (!is.null(PipelineActivityObject$`id`)) {
        self$`id` <- PipelineActivityObject$`id`
      }
      if (!is.null(PipelineActivityObject$`organization`)) {
        self$`organization` <- PipelineActivityObject$`organization`
      }
      if (!is.null(PipelineActivityObject$`pipeline`)) {
        self$`pipeline` <- PipelineActivityObject$`pipeline`
      }
      if (!is.null(PipelineActivityObject$`result`)) {
        self$`result` <- PipelineActivityObject$`result`
      }
      if (!is.null(PipelineActivityObject$`runSummary`)) {
        self$`runSummary` <- PipelineActivityObject$`runSummary`
      }
      if (!is.null(PipelineActivityObject$`startTime`)) {
        self$`startTime` <- PipelineActivityObject$`startTime`
      }
      if (!is.null(PipelineActivityObject$`state`)) {
        self$`state` <- PipelineActivityObject$`state`
      }
      if (!is.null(PipelineActivityObject$`type`)) {
        self$`type` <- PipelineActivityObject$`type`
      }
      if (!is.null(PipelineActivityObject$`commitId`)) {
        self$`commitId` <- PipelineActivityObject$`commitId`
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
    fromJSONString = function(PipelineActivityJson) {
      PipelineActivityObject <- jsonlite::fromJSON(PipelineActivityJson)
      self$`_class` <- PipelineActivityObject$`_class`
      self$`artifacts` <- lapply(PipelineActivityObject$`artifacts`, function(x) PipelineActivityartifacts$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      self$`durationInMillis` <- PipelineActivityObject$`durationInMillis`
      self$`estimatedDurationInMillis` <- PipelineActivityObject$`estimatedDurationInMillis`
      self$`enQueueTime` <- PipelineActivityObject$`enQueueTime`
      self$`endTime` <- PipelineActivityObject$`endTime`
      self$`id` <- PipelineActivityObject$`id`
      self$`organization` <- PipelineActivityObject$`organization`
      self$`pipeline` <- PipelineActivityObject$`pipeline`
      self$`result` <- PipelineActivityObject$`result`
      self$`runSummary` <- PipelineActivityObject$`runSummary`
      self$`startTime` <- PipelineActivityObject$`startTime`
      self$`state` <- PipelineActivityObject$`state`
      self$`type` <- PipelineActivityObject$`type`
      self$`commitId` <- PipelineActivityObject$`commitId`
    }
  )
)