cmake_minimum_required(VERSION 3.3)


set(LIB_NAME Hello)


set(SOURCES
	Hello.h
	Hello.cpp
)


add_library(${LIB_NAME} SHARED
	${SOURCES}
)
set_target_properties(${LIB_NAME} PROPERTIES
    OUTPUT_NAME ${LIB_NAME}
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/libs
)
