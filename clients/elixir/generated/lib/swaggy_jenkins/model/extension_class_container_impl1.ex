# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.ExtensionClassContainerImpl1 do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"_links",
    :"map"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"_links" => ExtensionClassContainerImpl1links,
    :"map" => ExtensionClassContainerImpl1map
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.ExtensionClassContainerImpl1 do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"_links", :struct, SwaggyJenkins.Model.ExtensionClassContainerImpl1links, options)
    |> deserialize(:"map", :struct, SwaggyJenkins.Model.ExtensionClassContainerImpl1map, options)
  end
end

