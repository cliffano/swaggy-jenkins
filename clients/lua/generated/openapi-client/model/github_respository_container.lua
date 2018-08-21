--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- github_respository_container class
local github_respository_container = {}
local github_respository_container_mt = {
	__name = "github_respository_container";
	__index = github_respository_container;
}

local function cast_github_respository_container(t)
	return setmetatable(t, github_respository_container_mt)
end

local function new_github_respository_container(_class, _links, repositories)
	return cast_github_respository_container({
		["_class"] = _class;
		["_links"] = _links;
		["repositories"] = repositories;
	})
end

return {
	cast = cast_github_respository_container;
	new = new_github_respository_container;
}
