#ifndef OUTPUTER_H
#define OUTPUTER_H

#include <QString>
#include <QObject>

class Outputer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ get_name WRITE set_name NOTIFY name_changed)

public:
    explicit Outputer(QObject *parent = nullptr);

    QString get_name()
    {
        return name;
    }

    void set_name(QString& new_name)
    {
        name = new_name;
    }

    bool name_changed()
    {
        return true;
    }

    QString name = "Tom";

signals:

};

#endif // OUTPUTER_H
