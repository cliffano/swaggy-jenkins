# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.SwapSpaceMonitorMemoryUsage2 do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"availablePhysicalMemory",
    :"availableSwapSpace",
    :"totalPhysicalMemory",
    :"totalSwapSpace"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"availablePhysicalMemory" => integer(),
    :"availableSwapSpace" => integer(),
    :"totalPhysicalMemory" => integer(),
    :"totalSwapSpace" => integer()
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.SwapSpaceMonitorMemoryUsage2 do
  def decode(value, _options) do
    value
  end
end

