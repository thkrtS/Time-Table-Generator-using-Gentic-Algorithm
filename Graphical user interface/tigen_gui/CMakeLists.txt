cmake_minimum_required(VERSION 3.5)

project(tigen_gui VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
find_package(Qt6Sql REQUIRED)
find_package(Qt6Core REQUIRED)


set(FORMS_DIR "${CMAKE_SOURCE_DIR}/ui")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/inc")
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

include_directories(${FORMS_DIR})
include_directories(${INCLUDE_DIR})
include_directories(${SOURCE_DIR})

file(GLOB_RECURSE PROJECT_SOURCES
        "${INCLUDE_DIR}/*.h"
        "${SOURCE_DIR}/*.cpp"
        "${FORMS_DIR}/*.ui"
        "${CMAKE_SOURCE_DIR}/*.qrc"
)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_AUTOUIC_SEARCH_PATHS} ${FORMS_DIR})

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(tigen_gui
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET imagedemo APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(tigen_gui SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(tigen_gui
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_include_directories(tigen_gui PRIVATE ${FORMS_DIR})
target_include_directories(tigen_gui PRIVATE ${INCLUDE_DIR})
target_include_directories(tigen_gui PRIVATE ${SOURCE_DIR})

target_link_libraries(tigen_gui PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(tigen_gui PRIVATE Qt${QT_VERSION_MAJOR}::Sql)


set_target_properties(tigen_gui PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(tigen_gui)
endif()
