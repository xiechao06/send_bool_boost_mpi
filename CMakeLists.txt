cmake_minimum_required(VERSION 3.0.0)
project(send_bool VERSION 0.1.0 LANGUAGES C CXX)

find_package(MPI REQUIRED)
find_package(spdlog REQUIRED)
find_package(Boost REQUIRED COMPONENTS MPI)

add_executable(send_bool main.cpp)
target_link_libraries(send_bool PRIVATE MPI::MPI_CXX)
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    target_compile_options(send_bool PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()
target_link_libraries(send_bool PRIVATE Boost::mpi)
include(FindMPI)

