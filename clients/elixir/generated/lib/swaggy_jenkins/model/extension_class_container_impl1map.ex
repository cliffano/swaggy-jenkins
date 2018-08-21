# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.ExtensionClassContainerImpl1map do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"io.jenkins.blueocean.service.embedded.rest.PipelineImpl",
    :"io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl",
    :"_class"
  ]

  @type t :: %__MODULE__{
    :"io.jenkins.blueocean.service.embedded.rest.PipelineImpl" => ExtensionClassImpl,
    :"io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl" => ExtensionClassImpl,
    :"_class" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.ExtensionClassContainerImpl1map do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"io.jenkins.blueocean.service.embedded.rest.PipelineImpl", :struct, SwaggyJenkins.Model.ExtensionClassImpl, options)
    |> deserialize(:"io.jenkins.blueocean.service.embedded.rest.MultiBranchPipelineImpl", :struct, SwaggyJenkins.Model.ExtensionClassImpl, options)
  end
end

