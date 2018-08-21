{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.DefaultCrumbIssuer exposing (DefaultCrumbIssuer, defaultCrumbIssuerDecoder, defaultCrumbIssuerEncoder)

import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias DefaultCrumbIssuer =
    { class : Maybe String
    , crumb : Maybe String
    , crumbRequestField : Maybe String
    }


defaultCrumbIssuerDecoder : Decoder DefaultCrumbIssuer
defaultCrumbIssuerDecoder =
    decode DefaultCrumbIssuer
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "crumb" (Decode.nullable Decode.string) Nothing
        |> optional "crumbRequestField" (Decode.nullable Decode.string) Nothing



defaultCrumbIssuerEncoder : DefaultCrumbIssuer -> Encode.Value
defaultCrumbIssuerEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "crumb", withDefault Encode.null (map Encode.string model.crumb) )
        , ( "crumbRequestField", withDefault Encode.null (map Encode.string model.crumbRequestField) )
        ]


