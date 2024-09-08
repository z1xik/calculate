#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <calculator/calculator.h>
#include <QQmlEngine>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<calculator::Calculator>("Test.My", 1,0,"Calculator");
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("calculate", "Main");

    return app.exec();
}
