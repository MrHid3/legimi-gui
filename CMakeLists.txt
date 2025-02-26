cmake_minimum_required(VERSION 3.29)
project(legimi_gui)

set(CMAKE_CXX_STANDARD 20 )

add_executable(legimi_gui
    src/main.cpp)

link_libraries(find_package(ws2_32.lib))