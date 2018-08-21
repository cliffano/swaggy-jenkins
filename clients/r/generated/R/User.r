# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' User Class
#'
#' @field _class 
#' @field id 
#' @field fullName 
#' @field email 
#' @field name 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
User <- R6::R6Class(
  'User',
  public = list(
    `_class` = NULL,
    `id` = NULL,
    `fullName` = NULL,
    `email` = NULL,
    `name` = NULL,
    initialize = function(`_class`, `id`, `fullName`, `email`, `name`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`fullName`)) {
        stopifnot(is.character(`fullName`), length(`fullName`) == 1)
        self$`fullName` <- `fullName`
      }
      if (!missing(`email`)) {
        stopifnot(is.character(`email`), length(`email`) == 1)
        self$`email` <- `email`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
    },
    toJSON = function() {
      UserObject <- list()
      if (!is.null(self$`_class`)) {
        UserObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`id`)) {
        UserObject[['id']] <- self$`id`
      }
      if (!is.null(self$`fullName`)) {
        UserObject[['fullName']] <- self$`fullName`
      }
      if (!is.null(self$`email`)) {
        UserObject[['email']] <- self$`email`
      }
      if (!is.null(self$`name`)) {
        UserObject[['name']] <- self$`name`
      }

      UserObject
    },
    fromJSON = function(UserJson) {
      UserObject <- jsonlite::fromJSON(UserJson)
      if (!is.null(UserObject$`_class`)) {
        self$`_class` <- UserObject$`_class`
      }
      if (!is.null(UserObject$`id`)) {
        self$`id` <- UserObject$`id`
      }
      if (!is.null(UserObject$`fullName`)) {
        self$`fullName` <- UserObject$`fullName`
      }
      if (!is.null(UserObject$`email`)) {
        self$`email` <- UserObject$`email`
      }
      if (!is.null(UserObject$`name`)) {
        self$`name` <- UserObject$`name`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "id": %s,
           "fullName": %s,
           "email": %s,
           "name": %s
        }',
        self$`_class`,
        self$`id`,
        self$`fullName`,
        self$`email`,
        self$`name`
      )
    },
    fromJSONString = function(UserJson) {
      UserObject <- jsonlite::fromJSON(UserJson)
      self$`_class` <- UserObject$`_class`
      self$`id` <- UserObject$`id`
      self$`fullName` <- UserObject$`fullName`
      self$`email` <- UserObject$`email`
      self$`name` <- UserObject$`name`
    }
  )
)
