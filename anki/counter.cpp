#include "counter.h"

Counter::Counter(QObject *parent) : QObject(parent)
{

}

void Counter::set_value(int value)
{
    if(value != m_value)
    {
        m_value = value;

        emit value_changed(value);
    }
}

void Counter::display_to_screen()
{

}
