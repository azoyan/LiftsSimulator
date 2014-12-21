#include "Building.h"
#include <QDebug>

Building::Building(int storeys, int liftsCount) : innerStoreys(storeys) {
    createLifts(liftsCount);
}

int Building::storeysCount() {
    return innerStoreys;
}

int Building::liftsCount() {
    return lifts.size();
}


void Building::createLifts(int count) {
        lift = Lift();
}

void Building::addHumanInLifts(Human* human) {
    if ( lift.isBusy() == false ) {
        lift.addHuman(human);
//        qDebug("human added");

    }

}
