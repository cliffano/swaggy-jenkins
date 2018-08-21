# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.QueueLeftItem do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"actions",
    :"blocked",
    :"buildable",
    :"id",
    :"inQueueSince",
    :"params",
    :"stuck",
    :"task",
    :"url",
    :"why",
    :"cancelled",
    :"executable"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"actions" => [CauseAction],
    :"blocked" => boolean(),
    :"buildable" => boolean(),
    :"id" => integer(),
    :"inQueueSince" => integer(),
    :"params" => String.t,
    :"stuck" => boolean(),
    :"task" => FreeStyleProject,
    :"url" => String.t,
    :"why" => String.t,
    :"cancelled" => boolean(),
    :"executable" => FreeStyleBuild
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.QueueLeftItem do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"actions", :list, SwaggyJenkins.Model.CauseAction, options)
    |> deserialize(:"task", :struct, SwaggyJenkins.Model.FreeStyleProject, options)
    |> deserialize(:"executable", :struct, SwaggyJenkins.Model.FreeStyleBuild, options)
  end
end

