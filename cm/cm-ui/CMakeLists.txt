include_directories(${CMAKE_SOURCE_DIR}/cm-lib/src/controller)

add_executable(cm-ui
  src/main.cpp
  qml.qrc
)

target_link_libraries(cm-ui PRIVATE 
  Qt${QT_VERSION_MAJOR}::Core 
  Qt${QT_VERSION_MAJOR}::Quick
  cm-lib
)
