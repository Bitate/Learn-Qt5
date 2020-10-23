#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QObject>
#include <QTime>
#include <QDate>
#include <QTextStream>

#include <iostream>

#include "outputer.h"
#include "counter.h"

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<Outputer>("Myclass", 1, 0, "Outputer");

    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:main.qml"));

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection
    );

    engine.load(url);

    Counter c1;
    c1.set_value(100);
    c1.display_to_screen();

    return app.exec();
}
