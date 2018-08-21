# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.GithubRespositoryContainer do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"_class",
    :"_links",
    :"repositories"
  ]

  @type t :: %__MODULE__{
    :"_class" => String.t,
    :"_links" => GithubRespositoryContainerlinks,
    :"repositories" => GithubRepositories
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.GithubRespositoryContainer do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"_links", :struct, SwaggyJenkins.Model.GithubRespositoryContainerlinks, options)
    |> deserialize(:"repositories", :struct, SwaggyJenkins.Model.GithubRepositories, options)
  end
end

