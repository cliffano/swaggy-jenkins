# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.1.1
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' FavoriteImpl Class
#'
#' @field _class 
#' @field _links 
#' @field item 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
FavoriteImpl <- R6::R6Class(
  'FavoriteImpl',
  public = list(
    `_class` = NULL,
    `_links` = NULL,
    `item` = NULL,
    initialize = function(`_class`, `_links`, `item`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
      if (!missing(`item`)) {
        stopifnot(R6::is.R6(`item`))
        self$`item` <- `item`
      }
    },
    toJSON = function() {
      FavoriteImplObject <- list()
      if (!is.null(self$`_class`)) {
        FavoriteImplObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`_links`)) {
        FavoriteImplObject[['_links']] <- self$`_links`$toJSON()
      }
      if (!is.null(self$`item`)) {
        FavoriteImplObject[['item']] <- self$`item`$toJSON()
      }

      FavoriteImplObject
    },
    fromJSON = function(FavoriteImplJson) {
      FavoriteImplObject <- jsonlite::fromJSON(FavoriteImplJson)
      if (!is.null(FavoriteImplObject$`_class`)) {
        self$`_class` <- FavoriteImplObject$`_class`
      }
      if (!is.null(FavoriteImplObject$`_links`)) {
        _linksObject <- FavoriteImpllinks$new()
        _linksObject$fromJSON(jsonlite::toJSON(FavoriteImplObject$_links, auto_unbox = TRUE))
        self$`_links` <- _linksObject
      }
      if (!is.null(FavoriteImplObject$`item`)) {
        itemObject <- PipelineImpl$new()
        itemObject$fromJSON(jsonlite::toJSON(FavoriteImplObject$item, auto_unbox = TRUE))
        self$`item` <- itemObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "_links": %s,
           "item": %s
        }',
        self$`_class`,
        self$`_links`$toJSON(),
        self$`item`$toJSON()
      )
    },
    fromJSONString = function(FavoriteImplJson) {
      FavoriteImplObject <- jsonlite::fromJSON(FavoriteImplJson)
      self$`_class` <- FavoriteImplObject$`_class`
      FavoriteImpllinksObject <- FavoriteImpllinks$new()
      self$`_links` <- FavoriteImpllinksObject$fromJSON(jsonlite::toJSON(FavoriteImplObject$_links, auto_unbox = TRUE))
      PipelineImplObject <- PipelineImpl$new()
      self$`item` <- PipelineImplObject$fromJSON(jsonlite::toJSON(FavoriteImplObject$item, auto_unbox = TRUE))
    }
  )
)
