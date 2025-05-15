project(QWKExample_MainWindow)

file(GLOB _src *.h *.cpp)

qwk_add_example(${PROJECT_NAME}
    FEATURES cxx_std_17
    SOURCES ${_src} mainwindow.qrc ../shared/resources/shared.qrc
    QT_LINKS Core Gui Widgets  QuickWidgets# MultimediaWidgets QQuickWidget
    LINKS QWKWidgets WidgetFrame KF6::I18n KF6::GuiAddons KF6::TextEditor KF6::SyntaxHighlighting KF6::Codecs KF6::Completion
)