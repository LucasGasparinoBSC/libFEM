project(geometry)

file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)
set(HEADER_DIR ${CMAKE_CURRENT_LIST_DIR}/headers)
file(GLOB HEADER_FILES ${HEADER_DIR}/*.h)

include_directories(${HEADER_DIR} ${polynomials_INCLUDE_DIRS})

add_library(${PROJECT_NAME} ${LIBRARY_TYPE} ${SRC_FILES} ${HEADER_FILES})

target_link_libraries(geometry polynomials)

add_definitions(-D__BUILD_VERSION__="${TEST_VERSION}")

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${TEST_VERSION} SOVERSION ${TEST_VERSION_MAJOR})
set_target_properties(${PROJECT_NAME} PROPERTIES POSITION_INDEPENDENT_CODE ON)

set(${PROJECT_NAME}_INCLUDE_DIRS ${HEADER_DIR} CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(FILES ${HEADER_FILES} DESTINATION include)
