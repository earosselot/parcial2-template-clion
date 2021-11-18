cmake_minimum_required(VERSION 3.20)
project(parcial2_clion)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)

file(GLOB DIR_TESTS_EN "test/*.cpp")

set(SOURCE_FILES
        main.cpp ejercicios/ejercicio1.cpp ejercicios/ejercicio1.h ejercicios/ejercicio2.cpp ejercicios/ejercicio2.h ejercicios/ejercicio3.cpp ejercicios/ejercicio3.h ejercicios/ejercicio4.cpp ejercicios/ejercicio4.h test/ejercicio1TEST.cpp test/ejercicio2TEST.cpp test/ejercicio3TEST.cpp test/ejercicio4TEST.cpp)

add_executable(
        parcial2_clion
        ${SOURCE_FILES}
        ${DIR_TESTS_EN})

set(CMAKE_CXX_FLAGS "-g --coverage")
set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake-build-debug)

target_link_libraries(parcial2_clion gtest gtest_main)
