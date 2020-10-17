add_library(cm-lib STATIC
    src/controller/mastercontroller.cpp
    src/controller/mastercontroller.h
    src/models/client.cpp
    src/models/client.h
)

target_link_libraries(cm-lib PRIVATE 
  Qt${QT_VERSION_MAJOR}::Core
)
