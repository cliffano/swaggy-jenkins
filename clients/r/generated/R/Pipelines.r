# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' Pipelines Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Pipelines <- R6::R6Class(
  'Pipelines',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      PipelinesObject <- list()

      PipelinesObject
    },
    fromJSON = function(PipelinesJson) {
      PipelinesObject <- jsonlite::fromJSON(PipelinesJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(PipelinesJson) {
      PipelinesObject <- jsonlite::fromJSON(PipelinesJson)
    }
  )
)
