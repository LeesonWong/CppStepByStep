cmake_minimum_required(VERSION 3.28)
project(grammer_test)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-fno-elide-constructors")

file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

foreach (file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file} high_6_template_public/high_6_template_public.cpp)
endforeach ()
