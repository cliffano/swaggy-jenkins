{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.1.1
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.CauseAction exposing (CauseAction, causeActionDecoder, causeActionEncoder)

import Data.CauseUserIdCause exposing (CauseUserIdCause, causeUserIdCauseDecoder, causeUserIdCauseEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias CauseAction =
    { class : Maybe String
    , causes : Maybe (List CauseUserIdCause)
    }


causeActionDecoder : Decoder CauseAction
causeActionDecoder =
    decode CauseAction
        |> optional "_class" (Decode.nullable Decode.string) Nothing
        |> optional "causes" (Decode.nullable (Decode.list causeUserIdCauseDecoder)) Nothing



causeActionEncoder : CauseAction -> Encode.Value
causeActionEncoder model =
    Encode.object
        [ ( "_class", withDefault Encode.null (map Encode.string model.class) )
        , ( "causes", withDefault Encode.null (map (Encode.list << List.map causeUserIdCauseEncoder) model.causes) )
        ]


