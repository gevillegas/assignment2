#ifndef DRIVINGSIMULATOR_UNICYCLE_H
#define DRIVINGSIMULATOR_UNICYCLE_H

#include "Vehicle.h"

class Unicycle : public Vehicle {

public:
    explicit Unicycle(string brand, string model);

    virtual ~Unicycle();

    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif //DRIVINGSIMULATOR_UNICYCLE_H
