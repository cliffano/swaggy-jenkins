{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.BranchImplpermissions exposing (BranchImplpermissions, branchImplpermissionsDecoder, branchImplpermissionsEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias BranchImplpermissions =
    { create : Maybe Bool
    , read : Maybe Bool
    , start : Maybe Bool
    , stop : Maybe Bool
    , class : Maybe String
    }


branchImplpermissionsDecoder : Decoder BranchImplpermissions
branchImplpermissionsDecoder =
    decode BranchImplpermissions
        |> optional "create" (Decode.nullable Decode.bool) Nothing
        |> optional "read" (Decode.nullable Decode.bool) Nothing
        |> optional "start" (Decode.nullable Decode.bool) Nothing
        |> optional "stop" (Decode.nullable Decode.bool) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



branchImplpermissionsEncoder : BranchImplpermissions -> Encode.Value
branchImplpermissionsEncoder model =
    Encode.object
        [ ( "create", withDefault Encode.null (map Encode.bool model.create) )
        , ( "read", withDefault Encode.null (map Encode.bool model.read) )
        , ( "start", withDefault Encode.null (map Encode.bool model.start) )
        , ( "stop", withDefault Encode.null (map Encode.bool model.stop) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]


