// Copyright (C) 2023-2024 Stdware Collections (https://www.github.com/stdware)
// Copyright (C) 2021-2023 wangwenx190 (Yuhang Zhao)
// SPDX-License-Identifier: Apache-2.0

#include <QtWidgets/QApplication>
#include <QtWebEngineQuick>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
    qputenv("QT_WIN_DEBUG_CONSOLE", "attach");
    qputenv("QSG_INFO", "1");
#if 0
    qputenv("QT_WIDGETS_RHI", "1");
    qputenv("QSG_RHI_BACKEND", "d3d12");
    qputenv("QSG_RHI_HDR", "scrgb");
    qputenv("QT_QPA_DISABLE_REDIRECTION_SURFACE", "1");
    
    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(
        Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);
#endif
    QtWebEngineQuick::initialize();
    QApplication a(argc, argv);
    

#if 0 && defined(Q_OS_WINDOWS) && QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QApplication::setFont([]() {
        QFont f("Microsoft YaHei");
        f.setStyleStrategy(QFont::PreferAntialias);
        f.setPixelSize(15);
        return f;
    }());
#endif

    MainWindow w;
    w.show();
    return a.exec();
}