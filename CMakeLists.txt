cmake_minimum_required(VERSION 3.10)

project(mxtk)

find_package(Qt5 COMPONENTS OpenGL REQUIRED)

file(GLOB SOURCES_COMMON ${PROJECT_SOURCE_DIR}/src/common/*.cpp)
if(WIN32)
	file(GLOB SOURCES_PLATFORM ${PROJECT_SOURCE_DIR}/src/win32/*.cpp)
else()
	file(GLOB SOURCES_PLATFORM ${PROJECT_SOURCE_DIR}/src/qt/*.cpp)
endif()

add_library(mxtk STATIC ${SOURCES_COMMON} ${SOURCES_PLATFORM})

target_include_directories(mxtk PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(mxtk PRIVATE Qt5::OpenGL)
