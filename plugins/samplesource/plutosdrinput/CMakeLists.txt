project(plutosdrinput)

set(plutosdrinput_SOURCES
    plutosdrinput.cpp
    plutosdrinputplugin.cpp
    plutosdrinputsettings.cpp
    plutosdrinputwebapiadapter.cpp
    plutosdrinputthread.cpp
)

set(plutosdrinput_HEADERS
    plutosdrinput.h
    plutosdrinputplugin.h
    plutosdrinputsettings.h
    plutosdrinputwebapiadapter.h
    plutosdrinputthread.h
)

include_directories(
    ${CMAKE_SOURCE_DIR}/swagger/sdrangel/code/qt5/client
    ${CMAKE_SOURCE_DIR}/devices
    ${LIBIIO_INCLUDE_DIR}
)

if(NOT SERVER_MODE)
    set(plutosdrinput_SOURCES
        ${plutosdrinput_SOURCES}
        plutosdrinputgui.cpp

        plutosdrinputgui.ui
    )
    set(plutosdrinput_HEADERS
        ${plutosdrinput_HEADERS}
        plutosdrinputgui.h
    )

    set(TARGET_NAME inputplutosdr)
    set(TARGET_LIB "Qt5::Widgets")
    set(TARGET_LIB_GUI "sdrgui")
    set(INSTALL_FOLDER ${INSTALL_PLUGINS_DIR})
else()
    set(TARGET_NAME inputplutosdrsrv)
    set(TARGET_LIB "")
    set(TARGET_LIB_GUI "")
    set(INSTALL_FOLDER ${INSTALL_PLUGINSSRV_DIR})
endif()

add_library(${TARGET_NAME} SHARED
	${plutosdrinput_SOURCES}
)

if(ENABLE_EXTERNAL_LIBRARIES)
    add_dependencies(${TARGET_NAME} libiio)
endif()

target_link_libraries(${TARGET_NAME}
        Qt5::Core
        ${TARGET_LIB}
	sdrbase
	${TARGET_LIB_GUI}
        swagger
        ${LIBIIO_LIBRARIES}
        plutosdrdevice
)

install(TARGETS ${TARGET_NAME} DESTINATION ${INSTALL_FOLDER})
