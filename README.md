# Description
Cmake-buildable libluasocket for LOVR
Currently only Linux are tested

# Installation
1. git clone this repo to lovr/plugins directory
2. Symlink .so files in build/bin directory
```
$ ln -s libluasocket.so socket.so
$ ln -s libluasocket.so ltn12.so
$ ln -s libluasocket.so mime.so
```
3. Use it as regular luasocket inside LOVR
