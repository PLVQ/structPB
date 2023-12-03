cmake_minimum_required(VERSION 3.20)

project(structPB)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_BUILD_TYPE Debug)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(
    ${PROJECT_SOURCE_DIR}/proto
    ${PROJECT_SOURCE_DIR}/res
    ${PROJECT_SOURCE_DIR}/third
    ${PROJECT_SOURCE_DIR}/third/ylt/thirdparty
    ${PROJECT_SOURCE_DIR}/src/base
    ${PROJECT_SOURCE_DIR}/src/config
)

aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURCE_DIR)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/config SOURCE_DIR)
aux_source_directory(${PROJECT_SOURCE_DIR}/src/base SOURCE_DIR)
aux_source_directory(${PROJECT_SOURCE_DIR}/proto SOURCE_DIR)
aux_source_directory(${PROJECT_SOURCE_DIR}/res SOURCE_DIR)


add_executable(StructPB ${SOURCE_DIR})

target_link_libraries(StructPB
        "protobuf"
)

add_definitions( -DPROJECT_SOURCE_DIR=\"${PROJECT_SOURCE_DIR}\")