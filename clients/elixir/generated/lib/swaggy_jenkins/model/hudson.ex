# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.Hudson do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"assignedLabels",
    :"mode",
    :"nodeDescription",
    :"nodeName",
    :"numExecutors",
    :"description",
    :"jobs",
    :"primaryView",
    :"quietingDown",
    :"slaveAgentPort",
    :"unlabeledLoad",
    :"useCrumbs",
    :"useSecurity",
    :"views"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"assignedLabels" => [HudsonassignedLabels],
    :"mode" => String.t,
    :"nodeDescription" => String.t,
    :"nodeName" => String.t,
    :"numExecutors" => integer(),
    :"description" => String.t,
    :"jobs" => [FreeStyleProject],
    :"primaryView" => AllView,
    :"quietingDown" => boolean(),
    :"slaveAgentPort" => integer(),
    :"unlabeledLoad" => UnlabeledLoadStatistics,
    :"useCrumbs" => boolean(),
    :"useSecurity" => boolean(),
    :"views" => [AllView]
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.Hudson do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"assignedLabels", :list, SwaggyJenkins.Model.HudsonassignedLabels, options)
    |> deserialize(:"jobs", :list, SwaggyJenkins.Model.FreeStyleProject, options)
    |> deserialize(:"primaryView", :struct, SwaggyJenkins.Model.AllView, options)
    |> deserialize(:"unlabeledLoad", :struct, SwaggyJenkins.Model.UnlabeledLoadStatistics, options)
    |> deserialize(:"views", :list, SwaggyJenkins.Model.AllView, options)
  end
end

