# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' Link Class
#'
#' @field _class 
#' @field href 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Link <- R6::R6Class(
  'Link',
  public = list(
    `_class` = NULL,
    `href` = NULL,
    initialize = function(`_class`, `href`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`href`)) {
        stopifnot(is.character(`href`), length(`href`) == 1)
        self$`href` <- `href`
      }
    },
    toJSON = function() {
      LinkObject <- list()
      if (!is.null(self$`_class`)) {
        LinkObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`href`)) {
        LinkObject[['href']] <- self$`href`
      }

      LinkObject
    },
    fromJSON = function(LinkJson) {
      LinkObject <- jsonlite::fromJSON(LinkJson)
      if (!is.null(LinkObject$`_class`)) {
        self$`_class` <- LinkObject$`_class`
      }
      if (!is.null(LinkObject$`href`)) {
        self$`href` <- LinkObject$`href`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "href": %s
        }',
        self$`_class`,
        self$`href`
      )
    },
    fromJSONString = function(LinkJson) {
      LinkObject <- jsonlite::fromJSON(LinkJson)
      self$`_class` <- LinkObject$`_class`
      self$`href` <- LinkObject$`href`
    }
  )
)
