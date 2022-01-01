cmake_minimum_required(VERSION 3.21)
project(clox LANGUAGES C VERSION 1.0)

set(CMAKE_C_STANDARD 11)

configure_file(./include/CloxConfig.h.in CloxConfig.h)

add_executable(clox src/main.c src/chunk.c src/memory.c src/debug.c src/value.c)

target_include_directories(clox PUBLIC
    "${PROJECT_BINARY_DIR}"
    ./include
)
