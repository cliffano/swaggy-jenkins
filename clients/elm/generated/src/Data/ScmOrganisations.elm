{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ScmOrganisations exposing (ScmOrganisations, scmOrganisationsDecoder, scmOrganisationsEncoder)

import Data.GithubOrganization exposing (GithubOrganization, githubOrganizationDecoder, githubOrganizationEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias ScmOrganisations =
    List GithubOrganization


scmOrganisationsDecoder : Decoder ScmOrganisations
scmOrganisationsDecoder =
    Decode.list githubOrganizationDecoder


scmOrganisationsEncoder : ScmOrganisations -> Encode.Value
scmOrganisationsEncoder model =
    Encode.list (List.map githubOrganizationEncoder model)

