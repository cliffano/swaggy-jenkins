--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pipeline_branchesitempull_requestlinks class
local pipeline_branchesitempull_requestlinks = {}
local pipeline_branchesitempull_requestlinks_mt = {
	__name = "pipeline_branchesitempull_requestlinks";
	__index = pipeline_branchesitempull_requestlinks;
}

local function cast_pipeline_branchesitempull_requestlinks(t)
	return setmetatable(t, pipeline_branchesitempull_requestlinks_mt)
end

local function new_pipeline_branchesitempull_requestlinks(self, _class)
	return cast_pipeline_branchesitempull_requestlinks({
		["self"] = self;
		["_class"] = _class;
	})
end

return {
	cast = cast_pipeline_branchesitempull_requestlinks;
	new = new_pipeline_branchesitempull_requestlinks;
}