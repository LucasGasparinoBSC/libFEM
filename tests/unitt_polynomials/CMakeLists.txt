project(unitt_polynomials)

file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set(HEADER_DIR ${CMAKE_CURRENT_LIST_DIR}/headers)
file(GLOB HEADER_FILES ${HEADER_DIR}/*.h)

include_directories(SYSTEM ${HEADER_DIR} ${polynomials_INCLUDE_DIRS})

add_definitions(-D__BUILD_VERSION__="${TEST_VERSION}")

add_executable(${PROJECT_NAME} ${SRC_FILES} ${HEADER_FILES})

target_link_libraries(unitt_polynomials polynomials)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME unitt_geometry VERSION ${TEST_VERSION} SOVERSION ${TEST_VERSION_MAJOR})

add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})