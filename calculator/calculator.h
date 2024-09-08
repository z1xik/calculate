#pragma once
#include <QObject>

namespace calculator {

class Calculator : public QObject
{
    Q_OBJECT
public:
    explicit Calculator(QObject *parent = nullptr);

    Q_INVOKABLE QString calculate(const QString& input);

};

} // namespace calculator

