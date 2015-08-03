cmake_minimum_required(VERSION 2.6)
project(Magick++-Template)
file(GLOB SOURCES src/*.cpp)
add_executable(template ${SOURCES})

find_package(ImageMagick COMPONENTS Magick++)
add_definitions(-DMAGICKCORE_QUANTUM_DEPTH=16)
add_definitions(-DMAGICKCORE_HDRI_ENABLE=1)

include_directories(${ImageMagick_Magick++_INCLUDE_DIRS})
target_link_libraries(template ${ImageMagick_LIBRARIES})

