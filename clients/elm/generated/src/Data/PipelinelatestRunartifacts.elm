{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.PipelinelatestRunartifacts exposing (PipelinelatestRunartifacts, pipelinelatestRunartifactsDecoder, pipelinelatestRunartifactsEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias PipelinelatestRunartifacts =
    { name : Maybe String
    , size : Maybe Int
    , url : Maybe String
    , class : Maybe String
    }


pipelinelatestRunartifactsDecoder : Decoder PipelinelatestRunartifacts
pipelinelatestRunartifactsDecoder =
    decode PipelinelatestRunartifacts
        |> optional "name" (Decode.nullable Decode.string) Nothing
        |> optional "size" (Decode.nullable Decode.int) Nothing
        |> optional "url" (Decode.nullable Decode.string) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



pipelinelatestRunartifactsEncoder : PipelinelatestRunartifacts -> Encode.Value
pipelinelatestRunartifactsEncoder model =
    Encode.object
        [ ( "name", withDefault Encode.null (map Encode.string model.name) )
        , ( "size", withDefault Encode.null (map Encode.int model.size) )
        , ( "url", withDefault Encode.null (map Encode.string model.url) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]


