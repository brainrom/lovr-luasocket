
#include "luasocket.h"

// LuaSocket
#include "luasocket.h"
#include "luasocket/src/mime.h"


int luaopen_luasocket(lua_State * L)
{

	// Preload code from LuaSocket.
    lua_getglobal(L, "package"); \
	lua_getfield(L, -1, "preload"); \
	lua_pushcfunction(L, luaopen_socket_core); \
	lua_setfield(L, -2, "socket.core"); \
	lua_pop(L, 2);
 
	return 0;
}


int __open_luasocket_socket(lua_State * L)
{
	#include "luasocket/src/socket.lua.h"
	return 1;
}

int __open_luasocket_ftp(lua_State * L)
{
	#include "luasocket/src/ftp.lua.h"
	return 1;
}

int __open_luasocket_http(lua_State * L)
{
	#include "luasocket/src/http.lua.h"
	return 1;
}

int __open_luasocket_ltn12(lua_State * L)
{
	#include "luasocket/src/ltn12.lua.h"
	return 1;
}

int __open_luasocket_mime(lua_State * L)
{
	#include "luasocket/src/mime.lua.h"
	return 1;
}

int __open_luasocket_smtp(lua_State * L)
{
	#include "luasocket/src/smtp.lua.h"
	return 1;
}

int __open_luasocket_tp(lua_State * L)
{
	#include "luasocket/src/tp.lua.h"
	return 1;
}

int __open_luasocket_url(lua_State * L)
{
	#include "luasocket/src/url.lua.h"
	return 1;
}

int __open_luasocket_headers(lua_State * L)
{
	#include "luasocket/src/headers.lua.h"
	return 1;
}

int __open_luasocket_mbox(lua_State * L)
{
	#include "luasocket/src/mbox.lua.h"
	return 1;
}
