# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.PipelineRunImpl do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"_links",
    :"durationInMillis",
    :"enQueueTime",
    :"endTime",
    :"estimatedDurationInMillis",
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
    :"_links" => PipelineRunImpllinks,
    :"durationInMillis" => integer(),
    :"enQueueTime" => String.t,
    :"endTime" => String.t,
    :"estimatedDurationInMillis" => integer(),
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

defimpl Poison.Decoder, for: SwaggyJenkins.Model.PipelineRunImpl do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"_links", :struct, SwaggyJenkins.Model.PipelineRunImpllinks, options)
  end
end

