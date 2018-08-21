# Swaggy Jenkins
#
# Jenkins API clients generated from Swagger / Open API specification
#
# OpenAPI spec version: 1.0.0
# Contact: blah@cliffano.com
# Generated by: https://openapi-generator.tech


#' Hudson Class
#'
#' @field _class 
#' @field assignedLabels 
#' @field mode 
#' @field nodeDescription 
#' @field nodeName 
#' @field numExecutors 
#' @field description 
#' @field jobs 
#' @field primaryView 
#' @field quietingDown 
#' @field slaveAgentPort 
#' @field unlabeledLoad 
#' @field useCrumbs 
#' @field useSecurity 
#' @field views 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
Hudson <- R6::R6Class(
  'Hudson',
  public = list(
    `_class` = NULL,
    `assignedLabels` = NULL,
    `mode` = NULL,
    `nodeDescription` = NULL,
    `nodeName` = NULL,
    `numExecutors` = NULL,
    `description` = NULL,
    `jobs` = NULL,
    `primaryView` = NULL,
    `quietingDown` = NULL,
    `slaveAgentPort` = NULL,
    `unlabeledLoad` = NULL,
    `useCrumbs` = NULL,
    `useSecurity` = NULL,
    `views` = NULL,
    initialize = function(`_class`, `assignedLabels`, `mode`, `nodeDescription`, `nodeName`, `numExecutors`, `description`, `jobs`, `primaryView`, `quietingDown`, `slaveAgentPort`, `unlabeledLoad`, `useCrumbs`, `useSecurity`, `views`){
      if (!missing(`_class`)) {
        stopifnot(is.character(`_class`), length(`_class`) == 1)
        self$`_class` <- `_class`
      }
      if (!missing(`assignedLabels`)) {
        stopifnot(is.list(`assignedLabels`), length(`assignedLabels`) != 0)
        lapply(`assignedLabels`, function(x) stopifnot(R6::is.R6(x)))
        self$`assignedLabels` <- `assignedLabels`
      }
      if (!missing(`mode`)) {
        stopifnot(is.character(`mode`), length(`mode`) == 1)
        self$`mode` <- `mode`
      }
      if (!missing(`nodeDescription`)) {
        stopifnot(is.character(`nodeDescription`), length(`nodeDescription`) == 1)
        self$`nodeDescription` <- `nodeDescription`
      }
      if (!missing(`nodeName`)) {
        stopifnot(is.character(`nodeName`), length(`nodeName`) == 1)
        self$`nodeName` <- `nodeName`
      }
      if (!missing(`numExecutors`)) {
        stopifnot(is.numeric(`numExecutors`), length(`numExecutors`) == 1)
        self$`numExecutors` <- `numExecutors`
      }
      if (!missing(`description`)) {
        stopifnot(is.character(`description`), length(`description`) == 1)
        self$`description` <- `description`
      }
      if (!missing(`jobs`)) {
        stopifnot(is.list(`jobs`), length(`jobs`) != 0)
        lapply(`jobs`, function(x) stopifnot(R6::is.R6(x)))
        self$`jobs` <- `jobs`
      }
      if (!missing(`primaryView`)) {
        stopifnot(R6::is.R6(`primaryView`))
        self$`primaryView` <- `primaryView`
      }
      if (!missing(`quietingDown`)) {
        self$`quietingDown` <- `quietingDown`
      }
      if (!missing(`slaveAgentPort`)) {
        stopifnot(is.numeric(`slaveAgentPort`), length(`slaveAgentPort`) == 1)
        self$`slaveAgentPort` <- `slaveAgentPort`
      }
      if (!missing(`unlabeledLoad`)) {
        stopifnot(R6::is.R6(`unlabeledLoad`))
        self$`unlabeledLoad` <- `unlabeledLoad`
      }
      if (!missing(`useCrumbs`)) {
        self$`useCrumbs` <- `useCrumbs`
      }
      if (!missing(`useSecurity`)) {
        self$`useSecurity` <- `useSecurity`
      }
      if (!missing(`views`)) {
        stopifnot(is.list(`views`), length(`views`) != 0)
        lapply(`views`, function(x) stopifnot(R6::is.R6(x)))
        self$`views` <- `views`
      }
    },
    toJSON = function() {
      HudsonObject <- list()
      if (!is.null(self$`_class`)) {
        HudsonObject[['_class']] <- self$`_class`
      }
      if (!is.null(self$`assignedLabels`)) {
        HudsonObject[['assignedLabels']] <- lapply(self$`assignedLabels`, function(x) x$toJSON())
      }
      if (!is.null(self$`mode`)) {
        HudsonObject[['mode']] <- self$`mode`
      }
      if (!is.null(self$`nodeDescription`)) {
        HudsonObject[['nodeDescription']] <- self$`nodeDescription`
      }
      if (!is.null(self$`nodeName`)) {
        HudsonObject[['nodeName']] <- self$`nodeName`
      }
      if (!is.null(self$`numExecutors`)) {
        HudsonObject[['numExecutors']] <- self$`numExecutors`
      }
      if (!is.null(self$`description`)) {
        HudsonObject[['description']] <- self$`description`
      }
      if (!is.null(self$`jobs`)) {
        HudsonObject[['jobs']] <- lapply(self$`jobs`, function(x) x$toJSON())
      }
      if (!is.null(self$`primaryView`)) {
        HudsonObject[['primaryView']] <- self$`primaryView`$toJSON()
      }
      if (!is.null(self$`quietingDown`)) {
        HudsonObject[['quietingDown']] <- self$`quietingDown`
      }
      if (!is.null(self$`slaveAgentPort`)) {
        HudsonObject[['slaveAgentPort']] <- self$`slaveAgentPort`
      }
      if (!is.null(self$`unlabeledLoad`)) {
        HudsonObject[['unlabeledLoad']] <- self$`unlabeledLoad`$toJSON()
      }
      if (!is.null(self$`useCrumbs`)) {
        HudsonObject[['useCrumbs']] <- self$`useCrumbs`
      }
      if (!is.null(self$`useSecurity`)) {
        HudsonObject[['useSecurity']] <- self$`useSecurity`
      }
      if (!is.null(self$`views`)) {
        HudsonObject[['views']] <- lapply(self$`views`, function(x) x$toJSON())
      }

      HudsonObject
    },
    fromJSON = function(HudsonJson) {
      HudsonObject <- jsonlite::fromJSON(HudsonJson)
      if (!is.null(HudsonObject$`_class`)) {
        self$`_class` <- HudsonObject$`_class`
      }
      if (!is.null(HudsonObject$`assignedLabels`)) {
        self$`assignedLabels` <- lapply(HudsonObject$`assignedLabels`, function(x) {
          assignedLabelsObject <- HudsonassignedLabels$new()
          assignedLabelsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          assignedLabelsObject
        })
      }
      if (!is.null(HudsonObject$`mode`)) {
        self$`mode` <- HudsonObject$`mode`
      }
      if (!is.null(HudsonObject$`nodeDescription`)) {
        self$`nodeDescription` <- HudsonObject$`nodeDescription`
      }
      if (!is.null(HudsonObject$`nodeName`)) {
        self$`nodeName` <- HudsonObject$`nodeName`
      }
      if (!is.null(HudsonObject$`numExecutors`)) {
        self$`numExecutors` <- HudsonObject$`numExecutors`
      }
      if (!is.null(HudsonObject$`description`)) {
        self$`description` <- HudsonObject$`description`
      }
      if (!is.null(HudsonObject$`jobs`)) {
        self$`jobs` <- lapply(HudsonObject$`jobs`, function(x) {
          jobsObject <- FreeStyleProject$new()
          jobsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          jobsObject
        })
      }
      if (!is.null(HudsonObject$`primaryView`)) {
        primaryViewObject <- AllView$new()
        primaryViewObject$fromJSON(jsonlite::toJSON(HudsonObject$primaryView, auto_unbox = TRUE))
        self$`primaryView` <- primaryViewObject
      }
      if (!is.null(HudsonObject$`quietingDown`)) {
        self$`quietingDown` <- HudsonObject$`quietingDown`
      }
      if (!is.null(HudsonObject$`slaveAgentPort`)) {
        self$`slaveAgentPort` <- HudsonObject$`slaveAgentPort`
      }
      if (!is.null(HudsonObject$`unlabeledLoad`)) {
        unlabeledLoadObject <- UnlabeledLoadStatistics$new()
        unlabeledLoadObject$fromJSON(jsonlite::toJSON(HudsonObject$unlabeledLoad, auto_unbox = TRUE))
        self$`unlabeledLoad` <- unlabeledLoadObject
      }
      if (!is.null(HudsonObject$`useCrumbs`)) {
        self$`useCrumbs` <- HudsonObject$`useCrumbs`
      }
      if (!is.null(HudsonObject$`useSecurity`)) {
        self$`useSecurity` <- HudsonObject$`useSecurity`
      }
      if (!is.null(HudsonObject$`views`)) {
        self$`views` <- lapply(HudsonObject$`views`, function(x) {
          viewsObject <- AllView$new()
          viewsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          viewsObject
        })
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "_class": %s,
           "assignedLabels": [%s],
           "mode": %s,
           "nodeDescription": %s,
           "nodeName": %s,
           "numExecutors": %d,
           "description": %s,
           "jobs": [%s],
           "primaryView": %s,
           "quietingDown": %s,
           "slaveAgentPort": %d,
           "unlabeledLoad": %s,
           "useCrumbs": %s,
           "useSecurity": %s,
           "views": [%s]
        }',
        self$`_class`,
        lapply(self$`assignedLabels`, function(x) paste(x$toJSON(), sep=",")),
        self$`mode`,
        self$`nodeDescription`,
        self$`nodeName`,
        self$`numExecutors`,
        self$`description`,
        lapply(self$`jobs`, function(x) paste(x$toJSON(), sep=",")),
        self$`primaryView`$toJSON(),
        self$`quietingDown`,
        self$`slaveAgentPort`,
        self$`unlabeledLoad`$toJSON(),
        self$`useCrumbs`,
        self$`useSecurity`,
        lapply(self$`views`, function(x) paste(x$toJSON(), sep=","))
      )
    },
    fromJSONString = function(HudsonJson) {
      HudsonObject <- jsonlite::fromJSON(HudsonJson)
      self$`_class` <- HudsonObject$`_class`
      self$`assignedLabels` <- lapply(HudsonObject$`assignedLabels`, function(x) HudsonassignedLabels$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      self$`mode` <- HudsonObject$`mode`
      self$`nodeDescription` <- HudsonObject$`nodeDescription`
      self$`nodeName` <- HudsonObject$`nodeName`
      self$`numExecutors` <- HudsonObject$`numExecutors`
      self$`description` <- HudsonObject$`description`
      self$`jobs` <- lapply(HudsonObject$`jobs`, function(x) FreeStyleProject$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      AllViewObject <- AllView$new()
      self$`primaryView` <- AllViewObject$fromJSON(jsonlite::toJSON(HudsonObject$primaryView, auto_unbox = TRUE))
      self$`quietingDown` <- HudsonObject$`quietingDown`
      self$`slaveAgentPort` <- HudsonObject$`slaveAgentPort`
      UnlabeledLoadStatisticsObject <- UnlabeledLoadStatistics$new()
      self$`unlabeledLoad` <- UnlabeledLoadStatisticsObject$fromJSON(jsonlite::toJSON(HudsonObject$unlabeledLoad, auto_unbox = TRUE))
      self$`useCrumbs` <- HudsonObject$`useCrumbs`
      self$`useSecurity` <- HudsonObject$`useSecurity`
      self$`views` <- lapply(HudsonObject$`views`, function(x) AllView$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
    }
  )
)
