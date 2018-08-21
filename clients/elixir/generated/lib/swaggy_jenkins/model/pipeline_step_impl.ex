# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.PipelineStepImpl do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"_links",
    :"displayName",
    :"durationInMillis",
    :"id",
    :"input",
    :"result",
    :"startTime",
    :"state"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"_links" => PipelineStepImpllinks,
    :"displayName" => String.t,
    :"durationInMillis" => integer(),
    :"id" => String.t,
    :"input" => InputStepImpl,
    :"result" => String.t,
    :"startTime" => String.t,
    :"state" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.PipelineStepImpl do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"_links", :struct, SwaggyJenkins.Model.PipelineStepImpllinks, options)
    |> deserialize(:"input", :struct, SwaggyJenkins.Model.InputStepImpl, options)
  end
end

