cmake_minimum_required(VERSION 3.0)
project(TravisReleasePoC VERSION 0.0.2)

#**********************************************************
# C++11
#**********************************************************

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

#**********************************************************
# The library
#**********************************************************

add_library(native SHARED src/lib.cpp)


#**********************************************************
# Package
#**********************************************************

install(TARGETS native
        LIBRARY
        DESTINATION lib)



set(CPACK_GENERATOR ZIP)
set(CPACK_PACKAGE_NAME "native")
set(CPACK_PACKAGE_VERSION_MAJOR 0)
set(CPACK_PACKAGE_VERSION_MINOR 0)
set(CPACK_PACKAGE_VERSION_PATCH 2)
set(CPACK_PACKAGE_VENDOR "Alex FL")

INCLUDE(CPack)