cmake_minimum_required (VERSION 3.12)

project (program)

set (CMAKE_CXX_STANDARD 14)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

set (SOURCE_FILES
    src/main.cpp
    src/menu.cpp
    src/user.cpp
    src/role.cpp
    src/permission_user.cpp
    src/permission.cpp
)

set (HEADER_FILES
    include/menu.h
    include/user.h
    include/role.h
    include/permission_user.h
    include/permission.h
)

file(GLOB DATABASE_FILES
    "database/*.txt"
)

file(COPY ${DATABASE_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
add_executable(program ${SOURCE_FILES} ${HEADER_FILES})