# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' AllView Class
#'
#' @field _class 
#' @field name 
#' @field url 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AllView <- R6::R6Class(
  'AllView',
  public = list(
    `_class` = NULL,
    `name` = NULL,
    `url` = NULL,
    initialize = function(`_class`, `name`, `url`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`url`)) {
        stopifnot(is.character(`url`), length(`url`) == 1)
        self$`url` <- `url`
      }
    },
    toJSON = function() {
      AllViewObject <- list()
      if (!is.null(self$`_class`)) {
        AllViewObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`name`)) {
        AllViewObject[['name']] <- self$`name`
      }
      if (!is.null(self$`url`)) {
        AllViewObject[['url']] <- self$`url`
      }

      AllViewObject
    },
    fromJSON = function(AllViewJson) {
      AllViewObject <- jsonlite::fromJSON(AllViewJson)
      if (!is.null(AllViewObject$`_class`)) {
        self$`_class` <- AllViewObject$`_class`
      }
      if (!is.null(AllViewObject$`name`)) {
        self$`name` <- AllViewObject$`name`
      }
      if (!is.null(AllViewObject$`url`)) {
        self$`url` <- AllViewObject$`url`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "name": %s,
           "url": %s
        }',
        self$`_class`,
        self$`name`,
        self$`url`
      )
    },
    fromJSONString = function(AllViewJson) {
      AllViewObject <- jsonlite::fromJSON(AllViewJson)
      self$`_class` <- AllViewObject$`_class`
      self$`name` <- AllViewObject$`name`
      self$`url` <- AllViewObject$`url`
    }
  )
)
