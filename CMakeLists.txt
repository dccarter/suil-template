cmake_minimum_required(VERSION 3.15)
project(hello-word VERSION 0.1.0 LANGUAGES C CXX)

set(SUIL_BASE_PATH "" CACHE STRING "The root path when SCF is installed")
if (SUIL_BASE_PATH)
    set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${SUIL_BASE_PATH}/lib/cmake)
endif()

# Provides Suil* functions
include(Suil)

# Start a suil project
SuilStartProject(hello-world
        EXPORTS ON)

# Create an application target
SuilApp(hello-world
    SOURCES   src/main.cpp
    LIBRARIES Suil::Base
    INSTALL   ON)

# Needed for installation to work
SuilEndProject()