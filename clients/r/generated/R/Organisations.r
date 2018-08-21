# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' Organisations Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Organisations <- R6::R6Class(
  'Organisations',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      OrganisationsObject <- list()

      OrganisationsObject
    },
    fromJSON = function(OrganisationsJson) {
      OrganisationsObject <- jsonlite::fromJSON(OrganisationsJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(OrganisationsJson) {
      OrganisationsObject <- jsonlite::fromJSON(OrganisationsJson)
    }
  )
)
