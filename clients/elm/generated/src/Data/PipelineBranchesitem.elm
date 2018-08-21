{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.PipelineBranchesitem exposing (PipelineBranchesitem, pipelineBranchesitemDecoder, pipelineBranchesitemEncoder)

import Data.PipelineBranchesitemlatestRun exposing (PipelineBranchesitemlatestRun, pipelineBranchesitemlatestRunDecoder, pipelineBranchesitemlatestRunEncoder)
import Data.PipelineBranchesitempullRequest exposing (PipelineBranchesitempullRequest, pipelineBranchesitempullRequestDecoder, pipelineBranchesitempullRequestEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias PipelineBranchesitem =
    { displayName : Maybe String
    , estimatedDurationInMillis : Maybe Int
    , name : Maybe String
    , weatherScore : Maybe Int
    , latestRun : Maybe PipelineBranchesitemlatestRun
    , organization : Maybe String
    , pullRequest : Maybe PipelineBranchesitempullRequest
    , totalNumberOfPullRequests : Maybe Int
    , class : Maybe String
    }


pipelineBranchesitemDecoder : Decoder PipelineBranchesitem
pipelineBranchesitemDecoder =
    decode PipelineBranchesitem
        |> optional "displayName" (Decode.nullable Decode.string) Nothing
        |> optional "estimatedDurationInMillis" (Decode.nullable Decode.int) Nothing
        |> optional "name" (Decode.nullable Decode.string) Nothing
        |> optional "weatherScore" (Decode.nullable Decode.int) Nothing
        |> optional "latestRun" (Decode.nullable pipelineBranchesitemlatestRunDecoder) Nothing
        |> optional "organization" (Decode.nullable Decode.string) Nothing
        |> optional "pullRequest" (Decode.nullable pipelineBranchesitempullRequestDecoder) Nothing
        |> optional "totalNumberOfPullRequests" (Decode.nullable Decode.int) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



pipelineBranchesitemEncoder : PipelineBranchesitem -> Encode.Value
pipelineBranchesitemEncoder model =
    Encode.object
        [ ( "displayName", withDefault Encode.null (map Encode.string model.displayName) )
        , ( "estimatedDurationInMillis", withDefault Encode.null (map Encode.int model.estimatedDurationInMillis) )
        , ( "name", withDefault Encode.null (map Encode.string model.name) )
        , ( "weatherScore", withDefault Encode.null (map Encode.int model.weatherScore) )
        , ( "latestRun", withDefault Encode.null (map pipelineBranchesitemlatestRunEncoder model.latestRun) )
        , ( "organization", withDefault Encode.null (map Encode.string model.organization) )
        , ( "pullRequest", withDefault Encode.null (map pipelineBranchesitempullRequestEncoder model.pullRequest) )
        , ( "totalNumberOfPullRequests", withDefault Encode.null (map Encode.int model.totalNumberOfPullRequests) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]


