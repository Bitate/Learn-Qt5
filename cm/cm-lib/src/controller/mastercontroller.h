#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QObject>
#include <QString>

namespace cm
{
namespace controllers
{
    class MasterController : public QObject
    {
        Q_OBJECT
        Q_PROPERTY( QString ui_welcomeMessage MEMBER welcomeMessage CONSTANT)
    public:
        explicit MasterController(QObject *parent = nullptr);

        QString welcomeMessage = "This is MasterController to Major Tom";
    signals:

    };
}
}


#endif // MASTERCONTROLLER_H
