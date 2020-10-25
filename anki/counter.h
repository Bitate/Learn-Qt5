#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QString>

class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);
    void set_value(int value);
    Q_INVOKABLE QString display_initialization_info();


signals:

private:
    int m_value;
};

#endif // COUNTER_H
