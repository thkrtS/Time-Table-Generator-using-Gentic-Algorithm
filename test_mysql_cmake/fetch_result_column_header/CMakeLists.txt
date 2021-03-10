set(SOURCES src/fetchresch.c)

include_directories(src)

execute_process(
	COMMAND
	mysql_config --cflags
	OUTPUT_VARIABLE
	MYSQL_CFLAGS
	OUTPUT_STRIP_TRAILING_WHITESPACE
	)
execute_process(
	COMMAND
	mysql_config --libs
	OUTPUT_VARIABLE
	MYSQL_LIBS
	OUTPUT_STRIP_TRAILING_WHITESPACE
	)

#list(CMAKE_MODULE_PATH APPEND ~/.cache/temp/programming_test/test_mysql_cmake)
#include(FindPkgConfig)
#pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

#foreach(FLAG ${LIBMYSQLCLIENT_CFLAGS_OTHER})
	#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${FLAG}")
#endforeach()

#find_package(MySQL REQUIRED)
add_executable(fetchresch "${SOURCES}")
#include_directories(${MySQL_INCLUDE_DIRS})
#target_link_libraries(main ${MySQL_LIBRARIES})


#link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})

target_compile_options(fetchresch PUBLIC "${MYSQL_CFLAGS}")
target_link_libraries(fetchresch "${MYSQL_LIBS}")
#target_include_directories(main PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
#target_link_libraries(main PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})

configure_file(../my.cnf "${CMAKE_CURRENT_BINARY_DIR}/my.cnf")
