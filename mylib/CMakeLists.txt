cmake_minimum_required(VERSION 3.10)
project(mylib)

#mylib library
add_library(mylib mylib.h mylib.cpp)
install(FILES mylib.h DESTINATION include)
install(TARGETS mylib DESTINATION lib)
install(FILES mylibConfig.cmake DESTINATION lib/cmake/mylib)
