{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.1
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.InputStepImpl exposing (InputStepImpl, inputStepImplDecoder, inputStepImplEncoder)

import Data.InputStepImpllinks exposing (InputStepImpllinks, inputStepImpllinksDecoder, inputStepImpllinksEncoder)
import Data.StringParameterDefinition exposing (StringParameterDefinition, stringParameterDefinitionDecoder, stringParameterDefinitionEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias InputStepImpl =
    { class : Maybe String
    , links : Maybe InputStepImpllinks
    , id : Maybe String
    , message : Maybe String
    , ok : Maybe String
    , parameters : Maybe (List StringParameterDefinition)
    , submitter : Maybe String
    }


inputStepImplDecoder : Decoder InputStepImpl
inputStepImplDecoder =
    decode InputStepImpl
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "_links" (Decode.nullable inputStepImpllinksDecoder) Nothing
        |> optional "id" (Decode.nullable Decode.string) Nothing
        |> optional "message" (Decode.nullable Decode.string) Nothing
        |> optional "ok" (Decode.nullable Decode.string) Nothing
        |> optional "parameters" (Decode.nullable (Decode.list stringParameterDefinitionDecoder)) Nothing
        |> optional "submitter" (Decode.nullable Decode.string) Nothing



inputStepImplEncoder : InputStepImpl -> Encode.Value
inputStepImplEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "_links", withDefault Encode.null (map inputStepImpllinksEncoder model.links) )
        , ( "id", withDefault Encode.null (map Encode.string model.id) )
        , ( "message", withDefault Encode.null (map Encode.string model.message) )
        , ( "ok", withDefault Encode.null (map Encode.string model.ok) )
        , ( "parameters", withDefault Encode.null (map (Encode.list << List.map stringParameterDefinitionEncoder) model.parameters) )
        , ( "submitter", withDefault Encode.null (map Encode.string model.submitter) )
        ]


