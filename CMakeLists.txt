cmake_minimum_required(VERSION 3.29)
project(legimi_gui)

set(CMAKE_CXX_STANDARD 20 )

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
        GIT_TAG dd967cb48ea6bcbad9f1da5ada0db8ac0d532c06)
FetchContent_MakeAvailable(cpr)

add_executable(legimi_gui
    src/main.cpp)

target_link_libraries(legimi_gui PRIVATE cpr::cpr)
