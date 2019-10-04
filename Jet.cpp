#include "Jet.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Jet::Jet() {
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, string engineSize) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Jet::~Jet() = default;

string Jet::getEngineSize() {
    return myEngineSize;
}

void Jet::setEngineSize(string engineSize) {
    if (engineSize == "unknown" || engineSize == "small" ||
        engineSize == "medium" || engineSize == "grande") {
        myEngineSize = engineSize;
    } else {
        myEngineSize = "unknown";
    }

}

double Jet::mileageEstimate(double t) {
  srand(time(NULL));
  int rando = 40 + rand() % ((100 + 1) -40);
  // std::cout << endl << "random:" <<  rando << endl << endl;

    double mileage =  rando * t;
    if (fuelType == "electricity") {
        mileage += mileage * 0.05;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
