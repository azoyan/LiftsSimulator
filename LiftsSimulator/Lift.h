#ifndef LIFT_H
#define LIFT_H
#include <list>
#include <Human.h>
#include <vector>

class Lift
{
public:
    Lift();
    void addHuman(Human* human);
    void setCapacity(int capacity);
    size_t capacity();

    void elevate();
    void moveTo(int storey);

    std::list<Human*> passengers;
    std::list<int> routingList;


    void showRoutingList();
    void busy(bool b);
    bool isBusy();

    enum { Hall = 0 };
    int position();



private:
    int innerPosition;
    size_t innerCapacity;
    bool innerBusy;
};

#endif // LIFT_H
