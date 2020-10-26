#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QQmlProperty>
#include <QObject>
#include <QTime>
#include <QDate>
#include <QTextStream>
#include <QQuickView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollBar>

#include "counter.h"

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    const QUrl url(QStringLiteral("qrc:/main.qml"));

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

    Counter* c1 = new Counter();

    engine.rootContext()->setContextProperty("Counter", c1);

    engine.load(url);
    return app.exec();
}
