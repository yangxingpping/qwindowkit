project(QWKExample_MainWindow)

file(GLOB _src *.h *.cpp)

find_package(Qt6 REQUIRED COMPONENTS WebEngineQuick QuickWidgets)

qwk_add_example(${PROJECT_NAME}
    SOURCES ${_src} mainwindow.qrc ../shared/resources/shared.qrc
    QT_LINKS Core Gui Widgets WebEngineQuick QuickWidgets
    LINKS QWKWidgets WidgetFrame
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED TRUE
)
