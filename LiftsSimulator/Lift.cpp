#include "Lift.h"
#include <QDebug>

Lift::Lift() : innerCapacity(8) {
    busy(false);
    moveTo(Hall);
}

void Lift::setCapacity(int capacity) {
    innerCapacity = capacity;
}

size_t Lift::capacity() {
    return innerCapacity;
}

void Lift::addHuman(Human* human) {
    //    qDebug() << "Passengers in lift (count): " << passengers.size();
    if (passengers.size() < capacity()) {
        passengers.push_back(human);
    }
    else {
        busy(true);
        elevate();
    }
}

void Lift::elevate() {
    for(std::list<Human*>::iterator i = passengers.begin(); i != passengers.end(); ++i) {
        Human* bufferHuman = *i;
        routingList.push_back(bufferHuman->neededStorey());
    }
    routingList.sort();

    for (std::list<int>::iterator i = routingList.begin(); i != routingList.end(); ++i) {
        moveTo(*i);
        passengers.pop_back();
    }
}

void Lift::busy(bool b) {
    innerBusy = b;
}

void Lift::moveTo(int storey) {
    innerPosition = storey;
    qDebug() << position();
}

bool Lift::isBusy() {
    return innerBusy;
}

int Lift::position() {
    return innerPosition;
}
