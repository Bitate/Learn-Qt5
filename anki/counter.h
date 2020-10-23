#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT
    Q_PROPERTY(Q_INT)
public:
    explicit Counter(QObject *parent = nullptr);

    int get_value() const { return m_value; }
    void set_value(int value);
    void display_to_screen();

signals:
    void value_changed(int new_value);
private:
    int m_value;
};

#endif // COUNTER_H
