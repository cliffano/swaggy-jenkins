# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' FreeStyleProject Class
#'
#' @field _class 
#' @field name 
#' @field url 
#' @field color 
#' @field actions 
#' @field description 
#' @field displayName 
#' @field displayNameOrNull 
#' @field fullDisplayName 
#' @field fullName 
#' @field buildable 
#' @field builds 
#' @field firstBuild 
#' @field healthReport 
#' @field inQueue 
#' @field keepDependencies 
#' @field lastBuild 
#' @field lastCompletedBuild 
#' @field lastFailedBuild 
#' @field lastStableBuild 
#' @field lastSuccessfulBuild 
#' @field lastUnstableBuild 
#' @field lastUnsuccessfulBuild 
#' @field nextBuildNumber 
#' @field queueItem 
#' @field concurrentBuild 
#' @field scm 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
FreeStyleProject <- R6::R6Class(
  'FreeStyleProject',
  public = list(
    `_class` = NULL,
    `name` = NULL,
    `url` = NULL,
    `color` = NULL,
    `actions` = NULL,
    `description` = NULL,
    `displayName` = NULL,
    `displayNameOrNull` = NULL,
    `fullDisplayName` = NULL,
    `fullName` = NULL,
    `buildable` = NULL,
    `builds` = NULL,
    `firstBuild` = NULL,
    `healthReport` = NULL,
    `inQueue` = NULL,
    `keepDependencies` = NULL,
    `lastBuild` = NULL,
    `lastCompletedBuild` = NULL,
    `lastFailedBuild` = NULL,
    `lastStableBuild` = NULL,
    `lastSuccessfulBuild` = NULL,
    `lastUnstableBuild` = NULL,
    `lastUnsuccessfulBuild` = NULL,
    `nextBuildNumber` = NULL,
    `queueItem` = NULL,
    `concurrentBuild` = NULL,
    `scm` = NULL,
    initialize = function(`_class`, `name`, `url`, `color`, `actions`, `description`, `displayName`, `displayNameOrNull`, `fullDisplayName`, `fullName`, `buildable`, `builds`, `firstBuild`, `healthReport`, `inQueue`, `keepDependencies`, `lastBuild`, `lastCompletedBuild`, `lastFailedBuild`, `lastStableBuild`, `lastSuccessfulBuild`, `lastUnstableBuild`, `lastUnsuccessfulBuild`, `nextBuildNumber`, `queueItem`, `concurrentBuild`, `scm`){
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
      if (!missing(`color`)) {
        stopifnot(is.character(`color`), length(`color`) == 1)
        self$`color` <- `color`
      }
      if (!missing(`actions`)) {
        stopifnot(is.list(`actions`), length(`actions`) != 0)
        lapply(`actions`, function(x) stopifnot(R6::is.R6(x)))
        self$`actions` <- `actions`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`displayName`)) {
        stopifnot(is.character(`displayName`), length(`displayName`) == 1)
        self$`displayName` <- `displayName`
      }
      if (!missing(`displayNameOrNull`)) {
        stopifnot(is.character(`displayNameOrNull`), length(`displayNameOrNull`) == 1)
        self$`displayNameOrNull` <- `displayNameOrNull`
      }
      if (!missing(`fullDisplayName`)) {
        stopifnot(is.character(`fullDisplayName`), length(`fullDisplayName`) == 1)
        self$`fullDisplayName` <- `fullDisplayName`
      }
      if (!missing(`fullName`)) {
        stopifnot(is.character(`fullName`), length(`fullName`) == 1)
        self$`fullName` <- `fullName`
      }
      if (!missing(`buildable`)) {
        self$`buildable` <- `buildable`
      }
      if (!missing(`builds`)) {
        stopifnot(is.list(`builds`), length(`builds`) != 0)
        lapply(`builds`, function(x) stopifnot(R6::is.R6(x)))
        self$`builds` <- `builds`
      }
      if (!missing(`firstBuild`)) {
        stopifnot(R6::is.R6(`firstBuild`))
        self$`firstBuild` <- `firstBuild`
      }
      if (!missing(`healthReport`)) {
        stopifnot(is.list(`healthReport`), length(`healthReport`) != 0)
        lapply(`healthReport`, function(x) stopifnot(R6::is.R6(x)))
        self$`healthReport` <- `healthReport`
      }
      if (!missing(`inQueue`)) {
        self$`inQueue` <- `inQueue`
      }
      if (!missing(`keepDependencies`)) {
        self$`keepDependencies` <- `keepDependencies`
      }
      if (!missing(`lastBuild`)) {
        stopifnot(R6::is.R6(`lastBuild`))
        self$`lastBuild` <- `lastBuild`
      }
      if (!missing(`lastCompletedBuild`)) {
        stopifnot(R6::is.R6(`lastCompletedBuild`))
        self$`lastCompletedBuild` <- `lastCompletedBuild`
      }
      if (!missing(`lastFailedBuild`)) {
        stopifnot(is.character(`lastFailedBuild`), length(`lastFailedBuild`) == 1)
        self$`lastFailedBuild` <- `lastFailedBuild`
      }
      if (!missing(`lastStableBuild`)) {
        stopifnot(R6::is.R6(`lastStableBuild`))
        self$`lastStableBuild` <- `lastStableBuild`
      }
      if (!missing(`lastSuccessfulBuild`)) {
        stopifnot(R6::is.R6(`lastSuccessfulBuild`))
        self$`lastSuccessfulBuild` <- `lastSuccessfulBuild`
      }
      if (!missing(`lastUnstableBuild`)) {
        stopifnot(is.character(`lastUnstableBuild`), length(`lastUnstableBuild`) == 1)
        self$`lastUnstableBuild` <- `lastUnstableBuild`
      }
      if (!missing(`lastUnsuccessfulBuild`)) {
        stopifnot(is.character(`lastUnsuccessfulBuild`), length(`lastUnsuccessfulBuild`) == 1)
        self$`lastUnsuccessfulBuild` <- `lastUnsuccessfulBuild`
      }
      if (!missing(`nextBuildNumber`)) {
        stopifnot(is.numeric(`nextBuildNumber`), length(`nextBuildNumber`) == 1)
        self$`nextBuildNumber` <- `nextBuildNumber`
      }
      if (!missing(`queueItem`)) {
        stopifnot(is.character(`queueItem`), length(`queueItem`) == 1)
        self$`queueItem` <- `queueItem`
      }
      if (!missing(`concurrentBuild`)) {
        self$`concurrentBuild` <- `concurrentBuild`
      }
      if (!missing(`scm`)) {
        stopifnot(R6::is.R6(`scm`))
        self$`scm` <- `scm`
      }
    },
    toJSON = function() {
      FreeStyleProjectObject <- list()
      if (!is.null(self$`_class`)) {
        FreeStyleProjectObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`name`)) {
        FreeStyleProjectObject[['name']] <- self$`name`
      }
      if (!is.null(self$`url`)) {
        FreeStyleProjectObject[['url']] <- self$`url`
      }
      if (!is.null(self$`color`)) {
        FreeStyleProjectObject[['color']] <- self$`color`
      }
      if (!is.null(self$`actions`)) {
        FreeStyleProjectObject[['actions']] <- lapply(self$`actions`, function(x) x$toJSON())
      }
      if (!is.null(self$`description`)) {
        FreeStyleProjectObject[['description']] <- self$`description`
      }
      if (!is.null(self$`displayName`)) {
        FreeStyleProjectObject[['displayName']] <- self$`displayName`
      }
      if (!is.null(self$`displayNameOrNull`)) {
        FreeStyleProjectObject[['displayNameOrNull']] <- self$`displayNameOrNull`
      }
      if (!is.null(self$`fullDisplayName`)) {
        FreeStyleProjectObject[['fullDisplayName']] <- self$`fullDisplayName`
      }
      if (!is.null(self$`fullName`)) {
        FreeStyleProjectObject[['fullName']] <- self$`fullName`
      }
      if (!is.null(self$`buildable`)) {
        FreeStyleProjectObject[['buildable']] <- self$`buildable`
      }
      if (!is.null(self$`builds`)) {
        FreeStyleProjectObject[['builds']] <- lapply(self$`builds`, function(x) x$toJSON())
      }
      if (!is.null(self$`firstBuild`)) {
        FreeStyleProjectObject[['firstBuild']] <- self$`firstBuild`$toJSON()
      }
      if (!is.null(self$`healthReport`)) {
        FreeStyleProjectObject[['healthReport']] <- lapply(self$`healthReport`, function(x) x$toJSON())
      }
      if (!is.null(self$`inQueue`)) {
        FreeStyleProjectObject[['inQueue']] <- self$`inQueue`
      }
      if (!is.null(self$`keepDependencies`)) {
        FreeStyleProjectObject[['keepDependencies']] <- self$`keepDependencies`
      }
      if (!is.null(self$`lastBuild`)) {
        FreeStyleProjectObject[['lastBuild']] <- self$`lastBuild`$toJSON()
      }
      if (!is.null(self$`lastCompletedBuild`)) {
        FreeStyleProjectObject[['lastCompletedBuild']] <- self$`lastCompletedBuild`$toJSON()
      }
      if (!is.null(self$`lastFailedBuild`)) {
        FreeStyleProjectObject[['lastFailedBuild']] <- self$`lastFailedBuild`
      }
      if (!is.null(self$`lastStableBuild`)) {
        FreeStyleProjectObject[['lastStableBuild']] <- self$`lastStableBuild`$toJSON()
      }
      if (!is.null(self$`lastSuccessfulBuild`)) {
        FreeStyleProjectObject[['lastSuccessfulBuild']] <- self$`lastSuccessfulBuild`$toJSON()
      }
      if (!is.null(self$`lastUnstableBuild`)) {
        FreeStyleProjectObject[['lastUnstableBuild']] <- self$`lastUnstableBuild`
      }
      if (!is.null(self$`lastUnsuccessfulBuild`)) {
        FreeStyleProjectObject[['lastUnsuccessfulBuild']] <- self$`lastUnsuccessfulBuild`
      }
      if (!is.null(self$`nextBuildNumber`)) {
        FreeStyleProjectObject[['nextBuildNumber']] <- self$`nextBuildNumber`
      }
      if (!is.null(self$`queueItem`)) {
        FreeStyleProjectObject[['queueItem']] <- self$`queueItem`
      }
      if (!is.null(self$`concurrentBuild`)) {
        FreeStyleProjectObject[['concurrentBuild']] <- self$`concurrentBuild`
      }
      if (!is.null(self$`scm`)) {
        FreeStyleProjectObject[['scm']] <- self$`scm`$toJSON()
      }

      FreeStyleProjectObject
    },
    fromJSON = function(FreeStyleProjectJson) {
      FreeStyleProjectObject <- jsonlite::fromJSON(FreeStyleProjectJson)
      if (!is.null(FreeStyleProjectObject$`_class`)) {
        self$`_class` <- FreeStyleProjectObject$`_class`
      }
      if (!is.null(FreeStyleProjectObject$`name`)) {
        self$`name` <- FreeStyleProjectObject$`name`
      }
      if (!is.null(FreeStyleProjectObject$`url`)) {
        self$`url` <- FreeStyleProjectObject$`url`
      }
      if (!is.null(FreeStyleProjectObject$`color`)) {
        self$`color` <- FreeStyleProjectObject$`color`
      }
      if (!is.null(FreeStyleProjectObject$`actions`)) {
        self$`actions` <- lapply(FreeStyleProjectObject$`actions`, function(x) {
          actionsObject <- FreeStyleProjectactions$new()
          actionsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          actionsObject
        })
      }
      if (!is.null(FreeStyleProjectObject$`description`)) {
        self$`description` <- FreeStyleProjectObject$`description`
      }
      if (!is.null(FreeStyleProjectObject$`displayName`)) {
        self$`displayName` <- FreeStyleProjectObject$`displayName`
      }
      if (!is.null(FreeStyleProjectObject$`displayNameOrNull`)) {
        self$`displayNameOrNull` <- FreeStyleProjectObject$`displayNameOrNull`
      }
      if (!is.null(FreeStyleProjectObject$`fullDisplayName`)) {
        self$`fullDisplayName` <- FreeStyleProjectObject$`fullDisplayName`
      }
      if (!is.null(FreeStyleProjectObject$`fullName`)) {
        self$`fullName` <- FreeStyleProjectObject$`fullName`
      }
      if (!is.null(FreeStyleProjectObject$`buildable`)) {
        self$`buildable` <- FreeStyleProjectObject$`buildable`
      }
      if (!is.null(FreeStyleProjectObject$`builds`)) {
        self$`builds` <- lapply(FreeStyleProjectObject$`builds`, function(x) {
          buildsObject <- FreeStyleBuild$new()
          buildsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          buildsObject
        })
      }
      if (!is.null(FreeStyleProjectObject$`firstBuild`)) {
        firstBuildObject <- FreeStyleBuild$new()
        firstBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$firstBuild, auto_unbox = TRUE))
        self$`firstBuild` <- firstBuildObject
      }
      if (!is.null(FreeStyleProjectObject$`healthReport`)) {
        self$`healthReport` <- lapply(FreeStyleProjectObject$`healthReport`, function(x) {
          healthReportObject <- FreeStyleProjecthealthReport$new()
          healthReportObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          healthReportObject
        })
      }
      if (!is.null(FreeStyleProjectObject$`inQueue`)) {
        self$`inQueue` <- FreeStyleProjectObject$`inQueue`
      }
      if (!is.null(FreeStyleProjectObject$`keepDependencies`)) {
        self$`keepDependencies` <- FreeStyleProjectObject$`keepDependencies`
      }
      if (!is.null(FreeStyleProjectObject$`lastBuild`)) {
        lastBuildObject <- FreeStyleBuild$new()
        lastBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastBuild, auto_unbox = TRUE))
        self$`lastBuild` <- lastBuildObject
      }
      if (!is.null(FreeStyleProjectObject$`lastCompletedBuild`)) {
        lastCompletedBuildObject <- FreeStyleBuild$new()
        lastCompletedBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastCompletedBuild, auto_unbox = TRUE))
        self$`lastCompletedBuild` <- lastCompletedBuildObject
      }
      if (!is.null(FreeStyleProjectObject$`lastFailedBuild`)) {
        self$`lastFailedBuild` <- FreeStyleProjectObject$`lastFailedBuild`
      }
      if (!is.null(FreeStyleProjectObject$`lastStableBuild`)) {
        lastStableBuildObject <- FreeStyleBuild$new()
        lastStableBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastStableBuild, auto_unbox = TRUE))
        self$`lastStableBuild` <- lastStableBuildObject
      }
      if (!is.null(FreeStyleProjectObject$`lastSuccessfulBuild`)) {
        lastSuccessfulBuildObject <- FreeStyleBuild$new()
        lastSuccessfulBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastSuccessfulBuild, auto_unbox = TRUE))
        self$`lastSuccessfulBuild` <- lastSuccessfulBuildObject
      }
      if (!is.null(FreeStyleProjectObject$`lastUnstableBuild`)) {
        self$`lastUnstableBuild` <- FreeStyleProjectObject$`lastUnstableBuild`
      }
      if (!is.null(FreeStyleProjectObject$`lastUnsuccessfulBuild`)) {
        self$`lastUnsuccessfulBuild` <- FreeStyleProjectObject$`lastUnsuccessfulBuild`
      }
      if (!is.null(FreeStyleProjectObject$`nextBuildNumber`)) {
        self$`nextBuildNumber` <- FreeStyleProjectObject$`nextBuildNumber`
      }
      if (!is.null(FreeStyleProjectObject$`queueItem`)) {
        self$`queueItem` <- FreeStyleProjectObject$`queueItem`
      }
      if (!is.null(FreeStyleProjectObject$`concurrentBuild`)) {
        self$`concurrentBuild` <- FreeStyleProjectObject$`concurrentBuild`
      }
      if (!is.null(FreeStyleProjectObject$`scm`)) {
        scmObject <- NullSCM$new()
        scmObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$scm, auto_unbox = TRUE))
        self$`scm` <- scmObject
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "name": %s,
           "url": %s,
           "color": %s,
           "actions": [%s],
           "description": %s,
           "displayName": %s,
           "displayNameOrNull": %s,
           "fullDisplayName": %s,
           "fullName": %s,
           "buildable": %s,
           "builds": [%s],
           "firstBuild": %s,
           "healthReport": [%s],
           "inQueue": %s,
           "keepDependencies": %s,
           "lastBuild": %s,
           "lastCompletedBuild": %s,
           "lastFailedBuild": %s,
           "lastStableBuild": %s,
           "lastSuccessfulBuild": %s,
           "lastUnstableBuild": %s,
           "lastUnsuccessfulBuild": %s,
           "nextBuildNumber": %d,
           "queueItem": %s,
           "concurrentBuild": %s,
           "scm": %s
        }',
        self$`_class`,
        self$`name`,
        self$`url`,
        self$`color`,
        lapply(self$`actions`, function(x) paste(x$toJSON(), sep=",")),
        self$`description`,
        self$`displayName`,
        self$`displayNameOrNull`,
        self$`fullDisplayName`,
        self$`fullName`,
        self$`buildable`,
        lapply(self$`builds`, function(x) paste(x$toJSON(), sep=",")),
        self$`firstBuild`$toJSON(),
        lapply(self$`healthReport`, function(x) paste(x$toJSON(), sep=",")),
        self$`inQueue`,
        self$`keepDependencies`,
        self$`lastBuild`$toJSON(),
        self$`lastCompletedBuild`$toJSON(),
        self$`lastFailedBuild`,
        self$`lastStableBuild`$toJSON(),
        self$`lastSuccessfulBuild`$toJSON(),
        self$`lastUnstableBuild`,
        self$`lastUnsuccessfulBuild`,
        self$`nextBuildNumber`,
        self$`queueItem`,
        self$`concurrentBuild`,
        self$`scm`$toJSON()
      )
    },
    fromJSONString = function(FreeStyleProjectJson) {
      FreeStyleProjectObject <- jsonlite::fromJSON(FreeStyleProjectJson)
      self$`_class` <- FreeStyleProjectObject$`_class`
      self$`name` <- FreeStyleProjectObject$`name`
      self$`url` <- FreeStyleProjectObject$`url`
      self$`color` <- FreeStyleProjectObject$`color`
      self$`actions` <- lapply(FreeStyleProjectObject$`actions`, function(x) FreeStyleProjectactions$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      self$`description` <- FreeStyleProjectObject$`description`
      self$`displayName` <- FreeStyleProjectObject$`displayName`
      self$`displayNameOrNull` <- FreeStyleProjectObject$`displayNameOrNull`
      self$`fullDisplayName` <- FreeStyleProjectObject$`fullDisplayName`
      self$`fullName` <- FreeStyleProjectObject$`fullName`
      self$`buildable` <- FreeStyleProjectObject$`buildable`
      self$`builds` <- lapply(FreeStyleProjectObject$`builds`, function(x) FreeStyleBuild$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      FreeStyleBuildObject <- FreeStyleBuild$new()
      self$`firstBuild` <- FreeStyleBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$firstBuild, auto_unbox = TRUE))
      self$`healthReport` <- lapply(FreeStyleProjectObject$`healthReport`, function(x) FreeStyleProjecthealthReport$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      self$`inQueue` <- FreeStyleProjectObject$`inQueue`
      self$`keepDependencies` <- FreeStyleProjectObject$`keepDependencies`
      FreeStyleBuildObject <- FreeStyleBuild$new()
      self$`lastBuild` <- FreeStyleBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastBuild, auto_unbox = TRUE))
      FreeStyleBuildObject <- FreeStyleBuild$new()
      self$`lastCompletedBuild` <- FreeStyleBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastCompletedBuild, auto_unbox = TRUE))
      self$`lastFailedBuild` <- FreeStyleProjectObject$`lastFailedBuild`
      FreeStyleBuildObject <- FreeStyleBuild$new()
      self$`lastStableBuild` <- FreeStyleBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastStableBuild, auto_unbox = TRUE))
      FreeStyleBuildObject <- FreeStyleBuild$new()
      self$`lastSuccessfulBuild` <- FreeStyleBuildObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$lastSuccessfulBuild, auto_unbox = TRUE))
      self$`lastUnstableBuild` <- FreeStyleProjectObject$`lastUnstableBuild`
      self$`lastUnsuccessfulBuild` <- FreeStyleProjectObject$`lastUnsuccessfulBuild`
      self$`nextBuildNumber` <- FreeStyleProjectObject$`nextBuildNumber`
      self$`queueItem` <- FreeStyleProjectObject$`queueItem`
      self$`concurrentBuild` <- FreeStyleProjectObject$`concurrentBuild`
      NullSCMObject <- NullSCM$new()
      self$`scm` <- NullSCMObject$fromJSON(jsonlite::toJSON(FreeStyleProjectObject$scm, auto_unbox = TRUE))
    }
  )
)
