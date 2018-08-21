{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.GithubRepository exposing (GithubRepository, githubRepositoryDecoder, githubRepositoryEncoder)

import Data.GithubRepositorylinks exposing (GithubRepositorylinks, githubRepositorylinksDecoder, githubRepositorylinksEncoder)
import Data.GithubRepositorypermissions exposing (GithubRepositorypermissions, githubRepositorypermissionsDecoder, githubRepositorypermissionsEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias GithubRepository =
    { class : Maybe String
    , links : Maybe GithubRepositorylinks
    , defaultBranch : Maybe String
    , description : Maybe String
    , name : Maybe String
    , permissions : Maybe GithubRepositorypermissions
    , private : Maybe Bool
    , fullName : Maybe String
    }


githubRepositoryDecoder : Decoder GithubRepository
githubRepositoryDecoder =
    decode GithubRepository
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "_links" (Decode.nullable githubRepositorylinksDecoder) Nothing
        |> optional "defaultBranch" (Decode.nullable Decode.string) Nothing
        |> optional "description" (Decode.nullable Decode.string) Nothing
        |> optional "name" (Decode.nullable Decode.string) Nothing
        |> optional "permissions" (Decode.nullable githubRepositorypermissionsDecoder) Nothing
        |> optional "private" (Decode.nullable Decode.bool) Nothing
        |> optional "fullName" (Decode.nullable Decode.string) Nothing



githubRepositoryEncoder : GithubRepository -> Encode.Value
githubRepositoryEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "_links", withDefault Encode.null (map githubRepositorylinksEncoder model.links) )
        , ( "defaultBranch", withDefault Encode.null (map Encode.string model.defaultBranch) )
        , ( "description", withDefault Encode.null (map Encode.string model.description) )
        , ( "name", withDefault Encode.null (map Encode.string model.name) )
        , ( "permissions", withDefault Encode.null (map githubRepositorypermissionsEncoder model.permissions) )
        , ( "private", withDefault Encode.null (map Encode.bool model.private) )
        , ( "fullName", withDefault Encode.null (map Encode.string model.fullName) )
        ]


