--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- queue_item_impl class
local queue_item_impl = {}
local queue_item_impl_mt = {
	__name = "queue_item_impl";
	__index = queue_item_impl;
}

local function cast_queue_item_impl(t)
	return setmetatable(t, queue_item_impl_mt)
end

local function new_queue_item_impl(_class, expected_build_number, id, pipeline, queued_time)
	return cast_queue_item_impl({
		["_class"] = _class;
		["expectedBuildNumber"] = expected_build_number;
		["id"] = id;
		["pipeline"] = pipeline;
		["queuedTime"] = queued_time;
	})
end

return {
	cast = cast_queue_item_impl;
	new = new_queue_item_impl;
}
