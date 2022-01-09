#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

int luaopen_ltn12(lua_State * L)
{
	#include "luasocket/src/ltn12.lua.h"
	return 1;
}
