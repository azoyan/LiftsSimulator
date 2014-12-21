#include "Human.h"
#include <stdlib.h>
#include <time.h>
Human::Human(int storeysCount) : maxStorey(storeysCount) {
    srand(time(0));
}

int Human::neededStorey() {
    return rand() % maxStorey;
}
