--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- clock_difference class
local clock_difference = {}
local clock_difference_mt = {
	__name = "clock_difference";
	__index = clock_difference;
}

local function cast_clock_difference(t)
	return setmetatable(t, clock_difference_mt)
end

local function new_clock_difference(_class, diff)
	return cast_clock_difference({
		["_class"] = _class;
		["diff"] = diff;
	})
end

return {
	cast = cast_clock_difference;
	new = new_clock_difference;
}
