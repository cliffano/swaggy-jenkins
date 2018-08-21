{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.PipelineBranchesitemlatestRun exposing (PipelineBranchesitemlatestRun, pipelineBranchesitemlatestRunDecoder, pipelineBranchesitemlatestRunEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias PipelineBranchesitemlatestRun =
    { durationInMillis : Maybe Int
    , estimatedDurationInMillis : Maybe Int
    , enQueueTime : Maybe String
    , endTime : Maybe String
    , id : Maybe String
    , organization : Maybe String
    , pipeline : Maybe String
    , result : Maybe String
    , runSummary : Maybe String
    , startTime : Maybe String
    , state : Maybe String
    , type_ : Maybe String
    , commitId : Maybe String
    , class : Maybe String
    }


pipelineBranchesitemlatestRunDecoder : Decoder PipelineBranchesitemlatestRun
pipelineBranchesitemlatestRunDecoder =
    decode PipelineBranchesitemlatestRun
        |> optional "durationInMillis" (Decode.nullable Decode.int) Nothing
        |> optional "estimatedDurationInMillis" (Decode.nullable Decode.int) Nothing
        |> optional "enQueueTime" (Decode.nullable Decode.string) Nothing
        |> optional "endTime" (Decode.nullable Decode.string) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "organization" (Decode.nullable Decode.string) Nothing
        |> optional "pipeline" (Decode.nullable Decode.string) Nothing
        |> optional "result" (Decode.nullable Decode.string) Nothing
        |> optional "runSummary" (Decode.nullable Decode.string) Nothing
        |> optional "startTime" (Decode.nullable Decode.string) Nothing
        |> optional "state" (Decode.nullable Decode.string) Nothing
        |> optional "type" (Decode.nullable Decode.string) Nothing
        |> optional "commitId" (Decode.nullable Decode.string) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



pipelineBranchesitemlatestRunEncoder : PipelineBranchesitemlatestRun -> Encode.Value
pipelineBranchesitemlatestRunEncoder model =
    Encode.object
        [ ( "durationInMillis", withDefault Encode.null (map Encode.int model.durationInMillis) )
        , ( "estimatedDurationInMillis", withDefault Encode.null (map Encode.int model.estimatedDurationInMillis) )
        , ( "enQueueTime", withDefault Encode.null (map Encode.string model.enQueueTime) )
        , ( "endTime", withDefault Encode.null (map Encode.string model.endTime) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "organization", withDefault Encode.null (map Encode.string model.organization) )
        , ( "pipeline", withDefault Encode.null (map Encode.string model.pipeline) )
        , ( "result", withDefault Encode.null (map Encode.string model.result) )
        , ( "runSummary", withDefault Encode.null (map Encode.string model.runSummary) )
        , ( "startTime", withDefault Encode.null (map Encode.string model.startTime) )
        , ( "state", withDefault Encode.null (map Encode.string model.state) )
        , ( "type", withDefault Encode.null (map Encode.string model.type_) )
        , ( "commitId", withDefault Encode.null (map Encode.string model.commitId) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]


