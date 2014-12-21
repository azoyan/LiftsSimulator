#ifndef BUILDING_H
#define BUILDING_H

#include "Lift.h"

class Building
{
public:
    Building(int storeys, int liftsCount);
    int storeysCount();
    int liftsCount();


    Lift lift;
    std::list<Lift> lifts;
    void createLifts(int count);
    void addHumanInLifts(Human* human);

private:
    int innerStoreys;
};

#endif // BUILDING_H
