cmake_minimum_required(VERSION 2.8.3)
project(TravisReleasePoC)

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
set(CPACK_PACKAGE_VENDOR "Alex FL")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "test")
set(CPACK_PACKAGE_VERSION "1.0.0")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "output")

INCLUDE(CPack)