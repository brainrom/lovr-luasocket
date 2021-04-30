#include "lua.h"
#include "lualib.h"
#include "luasocket/src/mime.h"

int luaopen_mime(lua_State * L)
{
	#include "luasocket/src/mime.lua.h"
	return 1;
}