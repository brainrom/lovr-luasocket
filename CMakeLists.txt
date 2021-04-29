cmake_minimum_required(VERSION 3.1.0)
project(luasocket)

if(WIN32) 
set ("LUASOCKET_SOCKET" "luasocket/src/wsocket.c")
endif()
if(UNIX OR ANDROID) 
set ("LUASOCKET_SOCKET" "luasocket/src/usocket.c")
endif()

file(GLOB LUA_LIBS "luasocket/src/*.lua")
foreach(path ${LUA_LIBS})

  #Get exact filename for code generation
  get_filename_component(LUAFILENAME path NAME)
  
  # Read the file and turn the bytes into comma-separated hex literals
  file(READ ${path} data HEX)
  string(REGEX REPLACE "([0-9a-f][0-9a-f])" "0x\\1," data ${data})

  # Generate the output filename by adding .h to the input filename
  string(CONCAT output ${path} ".h")

  #Write bin2c-like header
  file(WRITE ${output} "{\nstatic const unsigned char B1[] = {${data}};\n\nif (luaL_loadbuffer(L,(const char*)B1,sizeof(B1),\"${LUAFILENAME}\")==0) lua_call(L, 0, LUA_MULTRET);\n}")
endforeach()


add_library(luasocket MODULE 
luasocket.c
luasocket/src/auxiliar.c
luasocket/src/buffer.c
luasocket/src/compat.c
luasocket/src/except.c
luasocket/src/inet.c
luasocket/src/io.c
luasocket/src/luasocket.c
luasocket/src/mime.c
luasocket/src/options.c
luasocket/src/select.c
luasocket/src/serial.c
luasocket/src/tcp.c
luasocket/src/timeout.c
luasocket/src/udp.c
luasocket/src/unix.c
luasocket/src/unixdgram.c
luasocket/src/unixstream.c
${LUASOCKET_SOCKET}
)

set_target_properties(luasocket PROPERTIES POSITION_INDEPENDENT_CODE TRUE)
set_target_properties(luasocket PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
