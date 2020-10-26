cmake_minimum_required(VERSION 3.14)

set(this Anki)

project(${this} LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(QT_DIR)
find_package(QT NAMES Qt6 Qt5 COMPONENTS
    Core
    Quick
    Widgets

    REQUIRED
)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS
    Core
    Quick
    Widgets

    REQUIRED
)

add_subdirectory(src)

add_executable(${this}
    counter.cpp
    counter.h

    main.cpp
    qml.qrc
)
target_link_libraries(${this}
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Quick
    Qt${QT_VERSION_MAJOR}::Widgets
)

