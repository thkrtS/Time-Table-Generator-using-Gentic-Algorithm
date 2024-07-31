cmake_minimum_required(VERSION 3.15)
project(tigen LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCES
	src/extras/extra_util.cpp
	src/extras/exception_util.cpp
	src/data.cpp
	src/room.cpp
	src/course.cpp
	src/driver.cpp
	src/schedule.cpp
	src/sec_class.cpp
	src/class_time.cpp
	src/department.cpp
	src/instructor.cpp
	src/population.cpp
	src/genetic_algo.cpp
	src/main.cpp
	)

add_executable(tigen "${SOURCES}")

include_directories(tigen inc src)
#target_include_directories(tigen PRIVATE pprint/include)
