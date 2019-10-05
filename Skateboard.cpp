#include "Skateboard.h"


Skateboard::Skateboard(string brand, string model, int gearCount) {
    setBrand(brand);
    setModel(model);
    setGearCount(gearCount);
}

Skateboard::~Skateboard() = default;

int Skateboard::getGearCount() {
    return myGearCount;
}

void Skateboard::setGearCount(int gearCount) {
    myGearCount = gearCount;
}

double Skateboard::mileageEstimate(double time) {
    double mileage = 3 * time;
    mileage += mileage * (myGearCount * 0.1);
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString() + "\n\tGears: " +
           to_string(myGearCount);
}
