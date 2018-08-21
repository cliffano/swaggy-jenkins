# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.GithubOrganizationlinks do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"repositories",
    :"self",
    :"_class"
  ]

  @type t :: %__MODULE__{
    :"repositories" => Link,
    :"self" => Link,
    :"_class" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.GithubOrganizationlinks do
  import SwaggyJenkins.Deserializer
  def decode(value, options) do
    value
    |> deserialize(:"repositories", :struct, SwaggyJenkins.Model.Link, options)
    |> deserialize(:"self", :struct, SwaggyJenkins.Model.Link, options)
  end
end

