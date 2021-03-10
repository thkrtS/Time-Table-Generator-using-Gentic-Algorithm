cmake_minimum_required(VERSION 3.0)
project(hello-mysql LANGUAGES C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

add_subdirectory(simpledql)
add_subdirectory(first_example)
add_subdirectory(create_db)
add_subdirectory(show_databases)
add_subdirectory(populate_db)
add_subdirectory(fetch_result_column_header)
add_subdirectory(multiple_select_statement)
add_subdirectory(bind_populate_fetch)
