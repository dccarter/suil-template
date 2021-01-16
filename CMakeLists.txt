cmake_minimum_required(VERSION 3.15)
project(suil-template LANGUAGES C CXX)

set(SUIL_BASE_PATH "" CACHE STRING "The root path when SCF is installed")
if (SUIL_BASE_PATH)
    set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${SUIL_BASE_PATH}/lib/cmake)
endif()

include(Suil)

# Create a suil project
SuilProject(sapp
        SUIL_LIBS Base)

# Create an application target
SuilApp(sapp
    SOURCES   src/main.cpp
    LIBRARIES Suil::Base
    INSTALL   ON)