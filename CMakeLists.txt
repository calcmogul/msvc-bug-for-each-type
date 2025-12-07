cmake_minimum_required(VERSION 3.21)

project(app LANGUAGES CXX)

add_executable(app main.cpp)
if(MSVC)
    target_compile_options(app PUBLIC /std:c++23preview)
else()
    target_compile_options(
        app
        PRIVATE -Wall -Wextra -Wno-unused-parameter -pedantic
    )
    target_compile_features(app PUBLIC cxx_std_23)
endif()
