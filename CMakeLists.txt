cmake_minimum_required(VERSION 3.20)

project(structPB)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/protobuf
)

aux_source_directory(${PROJECT_SOURCE_DIR}/protobuf SOURCE_DIR)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURCE_DIR)

add_executable(structPB ${SOURCE_DIR})