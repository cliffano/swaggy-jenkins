--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- free_style_projecthealth_report class
local free_style_projecthealth_report = {}
local free_style_projecthealth_report_mt = {
	__name = "free_style_projecthealth_report";
	__index = free_style_projecthealth_report;
}

local function cast_free_style_projecthealth_report(t)
	return setmetatable(t, free_style_projecthealth_report_mt)
end

local function new_free_style_projecthealth_report(description, icon_class_name, icon_url, score, _class)
	return cast_free_style_projecthealth_report({
		["description"] = description;
		["iconClassName"] = icon_class_name;
		["iconUrl"] = icon_url;
		["score"] = score;
		["_class"] = _class;
	})
end

return {
	cast = cast_free_style_projecthealth_report;
	new = new_free_style_projecthealth_report;
}
