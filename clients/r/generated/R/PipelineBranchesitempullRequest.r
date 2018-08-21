# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineBranchesitempullRequest Class
#'
#' @field _links 
#' @field author 
#' @field id 
#' @field title 
#' @field url 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelineBranchesitempullRequest <- R6::R6Class(
  'PipelineBranchesitempullRequest',
  public = list(
    `_links` = NULL,
    `author` = NULL,
    `id` = NULL,
    `title` = NULL,
    `url` = NULL,
    `_class` = NULL,
    initialize = function(`_links`, `author`, `id`, `title`, `url`, `_class`){
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
      if (!missing(`author`)) {
        stopifnot(is.character(`author`), length(`author`) == 1)
        self$`author` <- `author`
      }
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`title`)) {
        stopifnot(is.character(`title`), length(`title`) == 1)
        self$`title` <- `title`
      }
      if (!missing(`url`)) {
        stopifnot(is.character(`url`), length(`url`) == 1)
        self$`url` <- `url`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      PipelineBranchesitempullRequestObject <- list()
      if (!is.null(self$`_links`)) {
        PipelineBranchesitempullRequestObject[['_links']] <- self$`_links`$toJSON()
      }
      if (!is.null(self$`author`)) {
        PipelineBranchesitempullRequestObject[['author']] <- self$`author`
      }
      if (!is.null(self$`id`)) {
        PipelineBranchesitempullRequestObject[['id']] <- self$`id`
      }
      if (!is.null(self$`title`)) {
        PipelineBranchesitempullRequestObject[['title']] <- self$`title`
      }
      if (!is.null(self$`url`)) {
        PipelineBranchesitempullRequestObject[['url']] <- self$`url`
      }
      if (!is.null(self$`_class`)) {
        PipelineBranchesitempullRequestObject[['_class']] <- self$`_class`
      }

      PipelineBranchesitempullRequestObject
    },
    fromJSON = function(PipelineBranchesitempullRequestJson) {
      PipelineBranchesitempullRequestObject <- jsonlite::fromJSON(PipelineBranchesitempullRequestJson)
      if (!is.null(PipelineBranchesitempullRequestObject$`_links`)) {
        _linksObject <- PipelineBranchesitempullRequestlinks$new()
        _linksObject$fromJSON(jsonlite::toJSON(PipelineBranchesitempullRequestObject$_links, auto_unbox = TRUE))
        self$`_links` <- _linksObject
      }
      if (!is.null(PipelineBranchesitempullRequestObject$`author`)) {
        self$`author` <- PipelineBranchesitempullRequestObject$`author`
      }
      if (!is.null(PipelineBranchesitempullRequestObject$`id`)) {
        self$`id` <- PipelineBranchesitempullRequestObject$`id`
      }
      if (!is.null(PipelineBranchesitempullRequestObject$`title`)) {
        self$`title` <- PipelineBranchesitempullRequestObject$`title`
      }
      if (!is.null(PipelineBranchesitempullRequestObject$`url`)) {
        self$`url` <- PipelineBranchesitempullRequestObject$`url`
      }
      if (!is.null(PipelineBranchesitempullRequestObject$`_class`)) {
        self$`_class` <- PipelineBranchesitempullRequestObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_links": %s,
           "author": %s,
           "id": %s,
           "title": %s,
           "url": %s,
           "_class": %s
        }',
        self$`_links`$toJSON(),
        self$`author`,
        self$`id`,
        self$`title`,
        self$`url`,
        self$`_class`
      )
    },
    fromJSONString = function(PipelineBranchesitempullRequestJson) {
      PipelineBranchesitempullRequestObject <- jsonlite::fromJSON(PipelineBranchesitempullRequestJson)
      PipelineBranchesitempullRequestlinksObject <- PipelineBranchesitempullRequestlinks$new()
      self$`_links` <- PipelineBranchesitempullRequestlinksObject$fromJSON(jsonlite::toJSON(PipelineBranchesitempullRequestObject$_links, auto_unbox = TRUE))
      self$`author` <- PipelineBranchesitempullRequestObject$`author`
      self$`id` <- PipelineBranchesitempullRequestObject$`id`
      self$`title` <- PipelineBranchesitempullRequestObject$`title`
      self$`url` <- PipelineBranchesitempullRequestObject$`url`
      self$`_class` <- PipelineBranchesitempullRequestObject$`_class`
    }
  )
)
