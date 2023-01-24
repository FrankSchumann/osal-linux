cmake_minimum_required( VERSION 3.15 )

# Set some basic project attributes
project (osal
		VERSION 0.0.0.2
		DESCRIPTION "OSAL Linux")
		
set( CMAKE_BUILD_TYPE Debug )
set( CMAKE_CXX_STANDARD 17 )

file( GLOB_RECURSE PROJECT_SOURCE_FILES "src/*.cpp" )

file( GLOB_RECURSE PROJECT_INCLUDE_FILES "include/*.h" )

add_library( ${PROJECT_NAME} ${PROJECT_INCLUDE_FILES} ${PROJECT_SOURCE_FILES} )

# Create a simple configuration header
configure_file( config.h.in config.h )

include_directories( "${PROJECT_BINARY_DIR}" include )

install( TARGETS ${PROJECT_NAME} )
install( DIRECTORY include/ DESTINATION include )

message( "CMAKE_PROJECT_VERSION = ${CMAKE_PROJECT_VERSION}" )
