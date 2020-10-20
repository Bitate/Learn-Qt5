#ifndef OUTPUTER_H
#define OUTPUTER_H

#include <QString>
#include <QObject>

class Outputer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ get_name WRITE set_name)

public:
    explicit Outputer(QObject *parent = nullptr);

    Q_INVOKABLE QString get_name()
    {
        return name;
    }

    Q_INVOKABLE void set_name(QString& new_name)
    {
        name = new_name;
    }

    void name_changed()
    {
        return;
    }

    QString name = "Tom";

signals:

};

#endif // OUTPUTER_H
