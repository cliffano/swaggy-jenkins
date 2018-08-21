# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' PipelineBranchesitempullRequestlinks Class
#'
#' @field self 
#' @field _class 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
PipelineBranchesitempullRequestlinks <- R6::R6Class(
  'PipelineBranchesitempullRequestlinks',
  public = list(
    `self` = NULL,
    `_class` = NULL,
    initialize = function(`self`, `_class`){
      if (!missing(`self`)) {
        stopifnot(is.character(`self`), length(`self`) == 1)
        self$`self` <- `self`
      }
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
    },
    toJSON = function() {
      PipelineBranchesitempullRequestlinksObject <- list()
      if (!is.null(self$`self`)) {
        PipelineBranchesitempullRequestlinksObject[['self']] <- self$`self`
      }
      if (!is.null(self$`_class`)) {
        PipelineBranchesitempullRequestlinksObject[['_class']] <- self$`_class`
      }

      PipelineBranchesitempullRequestlinksObject
    },
    fromJSON = function(PipelineBranchesitempullRequestlinksJson) {
      PipelineBranchesitempullRequestlinksObject <- jsonlite::fromJSON(PipelineBranchesitempullRequestlinksJson)
      if (!is.null(PipelineBranchesitempullRequestlinksObject$`self`)) {
        self$`self` <- PipelineBranchesitempullRequestlinksObject$`self`
      }
      if (!is.null(PipelineBranchesitempullRequestlinksObject$`_class`)) {
        self$`_class` <- PipelineBranchesitempullRequestlinksObject$`_class`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "self": %s,
           "_class": %s
        }',
        self$`self`,
        self$`_class`
      )
    },
    fromJSONString = function(PipelineBranchesitempullRequestlinksJson) {
      PipelineBranchesitempullRequestlinksObject <- jsonlite::fromJSON(PipelineBranchesitempullRequestlinksJson)
      self$`self` <- PipelineBranchesitempullRequestlinksObject$`self`
      self$`_class` <- PipelineBranchesitempullRequestlinksObject$`_class`
    }
  )
)
