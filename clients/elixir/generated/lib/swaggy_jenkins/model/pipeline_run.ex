# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.PipelineRun do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"artifacts",
    :"durationInMillis",
    :"estimatedDurationInMillis",
    :"enQueueTime",
    :"endTime",
    :"id",
    :"organization",
    :"pipeline",
    :"result",
    :"runSummary",
    :"startTime",
    :"state",
    :"type",
    :"commitId"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"artifacts" => [PipelineRunartifacts],
    :"durationInMillis" => integer(),
    :"estimatedDurationInMillis" => integer(),
    :"enQueueTime" => String.t,
    :"endTime" => String.t,
    :"id" => String.t,
    :"organization" => String.t,
    :"pipeline" => String.t,
    :"result" => String.t,
    :"runSummary" => String.t,
    :"startTime" => String.t,
    :"state" => String.t,
    :"type" => String.t,
    :"commitId" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.PipelineRun do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"artifacts", :list, SwaggyJenkins.Model.PipelineRunartifacts, options)
  end
end

