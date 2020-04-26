# Minima version de CMake (https://cmake.org/) requerida para compilar este proyecto
cmake_minimum_required(VERSION 3.5)
# El nombre del proyecto
project(bisestos)

# Para especificarle a CMake que queremos usar el estandar de C++11
set(CMAKE_CXX_STANDARD 11)

# Algunos flags para pasar al compilador (gnu++11 en vez de c++11 para que sea cross-plat)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=gnu++11 -ggdb3 -g -Wall")

# Leemos todos los archivos fuentes en ./src
file(GLOB SOURCE_FILES src/*.cpp src/*.h)

# Leemos todos los archivos de test en ./tests
file(GLOB TEST_FILES tests/*.cpp)

# Agregamos las bibliotecas de GTest para poder ejecutar los tests
SET(BUILD_GMOCK OFF)
SET(BUILD_GTEST ON)
add_library(gtest STATIC tests/gtest-1.8.1/gtest-all.cc)
add_library(gtest_main STATIC tests/gtest-1.8.1/gtest_main.cc)

# Creamos el ejecutable con los archivos fuentes y los de tests
add_executable(correrTests ${SOURCE_FILES} ${TEST_FILES})

# Necesitamos asociar los archivos del framework de testing GTest
target_link_libraries(correrTests gtest gtest_main)

# Test suites a ejecutar
add_test(correrTests bisiesto_test)