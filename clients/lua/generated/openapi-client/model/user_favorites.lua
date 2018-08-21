--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- user_favorites class
local user_favorites = {}
local user_favorites_mt = {
	__name = "user_favorites";
	__index = user_favorites;
}

local function cast_user_favorites(t)
	return setmetatable(t, user_favorites_mt)
end

local function new_user_favorites()
	return cast_user_favorites({
	})
end

return {
	cast = cast_user_favorites;
	new = new_user_favorites;
}
