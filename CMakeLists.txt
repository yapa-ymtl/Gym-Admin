cmake_minimum_required(VERSION 3.16)

project(GymAdmin VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON) # does not produce the json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON CACHE INTERNAL "") # works

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

include_directories(
    ${CMAKE_SOURCE_DIR}/Utilities/include
    ${CMAKE_SOURCE_DIR}/Mgr/include
    ${CMAKE_SOURCE_DIR}/GUIMgr/include
    )

set(PROJECT_SOURCES
        main.cpp
        Mgr/src/mainwindow.cpp
        Mgr/include/mainwindow.h
        Mgr/src/mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(GymAdmin
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        Mgr/include/person.h Mgr/src/person.cpp
        Utilities/include/debugLogger.h Utilities/src/debugLogger.cpp
        Mgr/src/maintabwidget.h Mgr/src/maintabwidget.cpp Mgr/src/maintabwidget.ui
        GUIMgr/homepage.h GUIMgr/homepage.cpp GUIMgr/homepage.ui
        GUIMgr/memberspage.h GUIMgr/memberspage.cpp GUIMgr/memberspage.ui

    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET GymAdmin APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(GymAdmin SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(GymAdmin
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(GymAdmin PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.GymAdmin)
endif()
set_target_properties(GymAdmin PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS GymAdmin
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(GymAdmin)
endif()
