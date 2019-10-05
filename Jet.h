#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    string myEngineSize;
protected:
  int numberOfEngines = 1;
public:
    Jet();


    explicit Jet(string brand, string model, string fuelType,
                 string engineSize, int engines);

    virtual ~Jet();
    string getEngineSize();
    void setEngineSize(string engineSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
    bool RocketBoost();
};


#endif //DRIVINGSIMULATOR_Jet_H
