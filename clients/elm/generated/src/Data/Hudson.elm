{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.1
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.Hudson exposing (Hudson, hudsonDecoder, hudsonEncoder)

import Data.HudsonassignedLabels exposing (HudsonassignedLabels, hudsonassignedLabelsDecoder, hudsonassignedLabelsEncoder)
import Data.FreeStyleProject exposing (FreeStyleProject, freeStyleProjectDecoder, freeStyleProjectEncoder)
import Data.AllView exposing (AllView, allViewDecoder, allViewEncoder)
import Data.UnlabeledLoadStatistics exposing (UnlabeledLoadStatistics, unlabeledLoadStatisticsDecoder, unlabeledLoadStatisticsEncoder)
import Data.AllView exposing (AllView, allViewDecoder, allViewEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias Hudson =
    { class : Maybe String
    , assignedLabels : Maybe (List HudsonassignedLabels)
    , mode : Maybe String
    , nodeDescription : Maybe String
    , nodeName : Maybe String
    , numExecutors : Maybe Int
    , description : Maybe String
    , jobs : Maybe (List FreeStyleProject)
    , primaryView : Maybe AllView
    , quietingDown : Maybe Bool
    , slaveAgentPort : Maybe Int
    , unlabeledLoad : Maybe UnlabeledLoadStatistics
    , useCrumbs : Maybe Bool
    , useSecurity : Maybe Bool
    , views : Maybe (List AllView)
    }


hudsonDecoder : Decoder Hudson
hudsonDecoder =
    decode Hudson
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "assignedLabels" (Decode.nullable (Decode.list hudsonassignedLabelsDecoder)) Nothing
        |> optional "mode" (Decode.nullable Decode.string) Nothing
        |> optional "nodeDescription" (Decode.nullable Decode.string) Nothing
        |> optional "nodeName" (Decode.nullable Decode.string) Nothing
        |> optional "numExecutors" (Decode.nullable Decode.int) Nothing
        |> optional "description" (Decode.nullable Decode.string) Nothing
        |> optional "jobs" (Decode.nullable (Decode.list freeStyleProjectDecoder)) Nothing
        |> optional "primaryView" (Decode.nullable allViewDecoder) Nothing
        |> optional "quietingDown" (Decode.nullable Decode.bool) Nothing
        |> optional "slaveAgentPort" (Decode.nullable Decode.int) Nothing
        |> optional "unlabeledLoad" (Decode.nullable unlabeledLoadStatisticsDecoder) Nothing
        |> optional "useCrumbs" (Decode.nullable Decode.bool) Nothing
        |> optional "useSecurity" (Decode.nullable Decode.bool) Nothing
        |> optional "views" (Decode.nullable (Decode.list allViewDecoder)) Nothing



hudsonEncoder : Hudson -> Encode.Value
hudsonEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "assignedLabels", withDefault Encode.null (map (Encode.list << List.map hudsonassignedLabelsEncoder) model.assignedLabels) )
        , ( "mode", withDefault Encode.null (map Encode.string model.mode) )
        , ( "nodeDescription", withDefault Encode.null (map Encode.string model.nodeDescription) )
        , ( "nodeName", withDefault Encode.null (map Encode.string model.nodeName) )
        , ( "numExecutors", withDefault Encode.null (map Encode.int model.numExecutors) )
        , ( "description", withDefault Encode.null (map Encode.string model.description) )
        , ( "jobs", withDefault Encode.null (map (Encode.list << List.map freeStyleProjectEncoder) model.jobs) )
        , ( "primaryView", withDefault Encode.null (map allViewEncoder model.primaryView) )
        , ( "quietingDown", withDefault Encode.null (map Encode.bool model.quietingDown) )
        , ( "slaveAgentPort", withDefault Encode.null (map Encode.int model.slaveAgentPort) )
        , ( "unlabeledLoad", withDefault Encode.null (map unlabeledLoadStatisticsEncoder model.unlabeledLoad) )
        , ( "useCrumbs", withDefault Encode.null (map Encode.bool model.useCrumbs) )
        , ( "useSecurity", withDefault Encode.null (map Encode.bool model.useSecurity) )
        , ( "views", withDefault Encode.null (map (Encode.list << List.map allViewEncoder) model.views) )
        ]


