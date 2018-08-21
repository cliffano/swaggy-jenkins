# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' BranchImpl Class
#'
#' @field _class 
#' @field displayName 
#' @field estimatedDurationInMillis 
#' @field fullDisplayName 
#' @field fullName 
#' @field name 
#' @field organization 
#' @field parameters 
#' @field permissions 
#' @field weatherScore 
#' @field pullRequest 
#' @field _links 
#' @field latestRun 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BranchImpl <- R6::R6Class(
  'BranchImpl',
  public = list(
    `_class` = NULL,
    `displayName` = NULL,
    `estimatedDurationInMillis` = NULL,
    `fullDisplayName` = NULL,
    `fullName` = NULL,
    `name` = NULL,
    `organization` = NULL,
    `parameters` = NULL,
    `permissions` = NULL,
    `weatherScore` = NULL,
    `pullRequest` = NULL,
    `_links` = NULL,
    `latestRun` = NULL,
    initialize = function(`_class`, `displayName`, `estimatedDurationInMillis`, `fullDisplayName`, `fullName`, `name`, `organization`, `parameters`, `permissions`, `weatherScore`, `pullRequest`, `_links`, `latestRun`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`displayName`)) {
        stopifnot(is.character(`displayName`), length(`displayName`) == 1)
        self$`displayName` <- `displayName`
      }
      if (!missing(`estimatedDurationInMillis`)) {
        stopifnot(is.numeric(`estimatedDurationInMillis`), length(`estimatedDurationInMillis`) == 1)
        self$`estimatedDurationInMillis` <- `estimatedDurationInMillis`
      }
      if (!missing(`fullDisplayName`)) {
        stopifnot(is.character(`fullDisplayName`), length(`fullDisplayName`) == 1)
        self$`fullDisplayName` <- `fullDisplayName`
      }
      if (!missing(`fullName`)) {
        stopifnot(is.character(`fullName`), length(`fullName`) == 1)
        self$`fullName` <- `fullName`
      }
      if (!missing(`name`)) {
        stopifnot(is.character(`name`), length(`name`) == 1)
        self$`name` <- `name`
      }
      if (!missing(`organization`)) {
        stopifnot(is.character(`organization`), length(`organization`) == 1)
        self$`organization` <- `organization`
      }
      if (!missing(`parameters`)) {
        stopifnot(is.list(`parameters`), length(`parameters`) != 0)
        lapply(`parameters`, function(x) stopifnot(R6::is.R6(x)))
        self$`parameters` <- `parameters`
      }
      if (!missing(`permissions`)) {
        stopifnot(R6::is.R6(`permissions`))
        self$`permissions` <- `permissions`
      }
      if (!missing(`weatherScore`)) {
        stopifnot(is.numeric(`weatherScore`), length(`weatherScore`) == 1)
        self$`weatherScore` <- `weatherScore`
      }
      if (!missing(`pullRequest`)) {
        stopifnot(is.character(`pullRequest`), length(`pullRequest`) == 1)
        self$`pullRequest` <- `pullRequest`
      }
      if (!missing(`_links`)) {
        stopifnot(R6::is.R6(`_links`))
        self$`_links` <- `_links`
      }
      if (!missing(`latestRun`)) {
        stopifnot(R6::is.R6(`latestRun`))
        self$`latestRun` <- `latestRun`
      }
    },
    toJSON = function() {
      BranchImplObject <- list()
      if (!is.null(self$`_class`)) {
        BranchImplObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`displayName`)) {
        BranchImplObject[['displayName']] <- self$`displayName`
      }
      if (!is.null(self$`estimatedDurationInMillis`)) {
        BranchImplObject[['estimatedDurationInMillis']] <- self$`estimatedDurationInMillis`
      }
      if (!is.null(self$`fullDisplayName`)) {
        BranchImplObject[['fullDisplayName']] <- self$`fullDisplayName`
      }
      if (!is.null(self$`fullName`)) {
        BranchImplObject[['fullName']] <- self$`fullName`
      }
      if (!is.null(self$`name`)) {
        BranchImplObject[['name']] <- self$`name`
      }
      if (!is.null(self$`organization`)) {
        BranchImplObject[['organization']] <- self$`organization`
      }
      if (!is.null(self$`parameters`)) {
        BranchImplObject[['parameters']] <- lapply(self$`parameters`, function(x) x$toJSON())
      }
      if (!is.null(self$`permissions`)) {
        BranchImplObject[['permissions']] <- self$`permissions`$toJSON()
      }
      if (!is.null(self$`weatherScore`)) {
        BranchImplObject[['weatherScore']] <- self$`weatherScore`
      }
      if (!is.null(self$`pullRequest`)) {
        BranchImplObject[['pullRequest']] <- self$`pullRequest`
      }
      if (!is.null(self$`_links`)) {
        BranchImplObject[['_links']] <- self$`_links`$toJSON()
      }
      if (!is.null(self$`latestRun`)) {
        BranchImplObject[['latestRun']] <- self$`latestRun`$toJSON()
      }

      BranchImplObject
    },
    fromJSON = function(BranchImplJson) {
      BranchImplObject <- jsonlite::fromJSON(BranchImplJson)
      if (!is.null(BranchImplObject$`_class`)) {
        self$`_class` <- BranchImplObject$`_class`
      }
      if (!is.null(BranchImplObject$`displayName`)) {
        self$`displayName` <- BranchImplObject$`displayName`
      }
      if (!is.null(BranchImplObject$`estimatedDurationInMillis`)) {
        self$`estimatedDurationInMillis` <- BranchImplObject$`estimatedDurationInMillis`
      }
      if (!is.null(BranchImplObject$`fullDisplayName`)) {
        self$`fullDisplayName` <- BranchImplObject$`fullDisplayName`
      }
      if (!is.null(BranchImplObject$`fullName`)) {
        self$`fullName` <- BranchImplObject$`fullName`
      }
      if (!is.null(BranchImplObject$`name`)) {
        self$`name` <- BranchImplObject$`name`
      }
      if (!is.null(BranchImplObject$`organization`)) {
        self$`organization` <- BranchImplObject$`organization`
      }
      if (!is.null(BranchImplObject$`parameters`)) {
        self$`parameters` <- lapply(BranchImplObject$`parameters`, function(x) {
          parametersObject <- StringParameterDefinition$new()
          parametersObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          parametersObject
        })
      }
      if (!is.null(BranchImplObject$`permissions`)) {
        permissionsObject <- BranchImplpermissions$new()
        permissionsObject$fromJSON(jsonlite::toJSON(BranchImplObject$permissions, auto_unbox = TRUE))
        self$`permissions` <- permissionsObject
      }
      if (!is.null(BranchImplObject$`weatherScore`)) {
        self$`weatherScore` <- BranchImplObject$`weatherScore`
      }
      if (!is.null(BranchImplObject$`pullRequest`)) {
        self$`pullRequest` <- BranchImplObject$`pullRequest`
      }
      if (!is.null(BranchImplObject$`_links`)) {
        _linksObject <- BranchImpllinks$new()
        _linksObject$fromJSON(jsonlite::toJSON(BranchImplObject$_links, auto_unbox = TRUE))
        self$`_links` <- _linksObject
      }
      if (!is.null(BranchImplObject$`latestRun`)) {
        latestRunObject <- PipelineRunImpl$new()
        latestRunObject$fromJSON(jsonlite::toJSON(BranchImplObject$latestRun, auto_unbox = TRUE))
        self$`latestRun` <- latestRunObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "displayName": %s,
           "estimatedDurationInMillis": %d,
           "fullDisplayName": %s,
           "fullName": %s,
           "name": %s,
           "organization": %s,
           "parameters": [%s],
           "permissions": %s,
           "weatherScore": %d,
           "pullRequest": %s,
           "_links": %s,
           "latestRun": %s
        }',
        self$`_class`,
        self$`displayName`,
        self$`estimatedDurationInMillis`,
        self$`fullDisplayName`,
        self$`fullName`,
        self$`name`,
        self$`organization`,
        lapply(self$`parameters`, function(x) paste(x$toJSON(), sep=",")),
        self$`permissions`$toJSON(),
        self$`weatherScore`,
        self$`pullRequest`,
        self$`_links`$toJSON(),
        self$`latestRun`$toJSON()
      )
    },
    fromJSONString = function(BranchImplJson) {
      BranchImplObject <- jsonlite::fromJSON(BranchImplJson)
      self$`_class` <- BranchImplObject$`_class`
      self$`displayName` <- BranchImplObject$`displayName`
      self$`estimatedDurationInMillis` <- BranchImplObject$`estimatedDurationInMillis`
      self$`fullDisplayName` <- BranchImplObject$`fullDisplayName`
      self$`fullName` <- BranchImplObject$`fullName`
      self$`name` <- BranchImplObject$`name`
      self$`organization` <- BranchImplObject$`organization`
      self$`parameters` <- lapply(BranchImplObject$`parameters`, function(x) StringParameterDefinition$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      BranchImplpermissionsObject <- BranchImplpermissions$new()
      self$`permissions` <- BranchImplpermissionsObject$fromJSON(jsonlite::toJSON(BranchImplObject$permissions, auto_unbox = TRUE))
      self$`weatherScore` <- BranchImplObject$`weatherScore`
      self$`pullRequest` <- BranchImplObject$`pullRequest`
      BranchImpllinksObject <- BranchImpllinks$new()
      self$`_links` <- BranchImpllinksObject$fromJSON(jsonlite::toJSON(BranchImplObject$_links, auto_unbox = TRUE))
      PipelineRunImplObject <- PipelineRunImpl$new()
      self$`latestRun` <- PipelineRunImplObject$fromJSON(jsonlite::toJSON(BranchImplObject$latestRun, auto_unbox = TRUE))
    }
  )
)
