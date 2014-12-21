#include "LiftsSimulator.h"
#include <QDebug>

LiftsSimulator::LiftsSimulator(QWidget *parent)
  : QWidget(parent),
    building(8, 1),
    bufferHuman(0) {
    generateHumans(10);
}

LiftsSimulator::~LiftsSimulator() {

}

void LiftsSimulator::generateHumans(int count) {
    for (int i = 0; i < count; ++i) {
        bufferHuman = new Human(building.storeysCount());
        building.addHumanInLifts(bufferHuman);
    }
}
