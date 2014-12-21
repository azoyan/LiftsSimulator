#ifndef LIFTSSIMULATOR_H
#define LIFTSSIMULATOR_H

#include <QtGui/QWidget>
#include "Building.h"
#include "Lift.h"
#include "Human.h"

class LiftsSimulator : public QWidget
{
    Q_OBJECT

public:
    LiftsSimulator(QWidget *parent = 0);
    ~LiftsSimulator();

    void generateHumans(int count);
    void addHumanInBuildings(Human human);

private:
    Building building;
    Human* bufferHuman;
};

#endif // LIFTSSIMULATOR_H
