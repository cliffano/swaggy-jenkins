# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.PipelinelatestRunartifacts do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"name",
    :"size",
    :"url",
    :"_class"
  ]

  @type t :: %__MODULE__{
    :"name" => String.t,
    :"size" => integer(),
    :"url" => String.t,
    :"_class" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.PipelinelatestRunartifacts do
  def decode(value, _options) do
    value
  end
end

