// LuaSocket
#include "luasocket.h"
#include "luasocket/src/mime.h"


int luaopen_socket(lua_State * L)
{
	#include "luasocket/src/socket.lua.h"
	return 1;
}

int luaopen_socket_ftp(lua_State * L)
{
	#include "luasocket/src/ftp.lua.h"
	return 1;
}

int luaopen_socket_http(lua_State * L)
{
	#include "luasocket/src/http.lua.h"
	return 1;
}

int luaopen_ltn12(lua_State * L)
{
	#include "luasocket/src/ltn12.lua.h"
	return 1;
}

int luaopen_mime(lua_State * L)
{
	#include "luasocket/src/mime.lua.h"
	return 1;
}

int luaopen_socket_smtp(lua_State * L)
{
	#include "luasocket/src/smtp.lua.h"
	return 1;
}

int luaopen_socket_tp(lua_State * L)
{
	#include "luasocket/src/tp.lua.h"
	return 1;
}

int luaopen_socket_url(lua_State * L)
{
	#include "luasocket/src/url.lua.h"
	return 1;
}

int luaopen_socket_headers(lua_State * L)
{
	#include "luasocket/src/headers.lua.h"
	return 1;
}

int luaopen_socket_mbox(lua_State * L)
{
	#include "luasocket/src/mbox.lua.h"
	return 1;
}
