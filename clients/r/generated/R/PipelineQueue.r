# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineQueue Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelineQueue <- R6::R6Class(
  'PipelineQueue',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      PipelineQueueObject <- list()

      PipelineQueueObject
    },
    fromJSON = function(PipelineQueueJson) {
      PipelineQueueObject <- jsonlite::fromJSON(PipelineQueueJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(PipelineQueueJson) {
      PipelineQueueObject <- jsonlite::fromJSON(PipelineQueueJson)
    }
  )
)
