cmake_minimum_required(VERSION 3.1.0)
project(luasocket)

if(WIN32) 
set ("LUASOCKET_SOCKET" "luasocket/src/wsocket.c")
endif()
if(UNIX OR ANDROID) 
set ("LUASOCKET_SOCKET" "luasocket/src/usocket.c")
endif()


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
