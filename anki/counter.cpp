#include "counter.h"

Counter::Counter(QObject *parent) : QObject(parent)
{

}


QString Counter::display_initialization_info()
{
    return "I'm initializing the C++ Counter class\n"
            "-------------------------------------\n"
            "OK, I got it :)\n";
}
