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

Jet::Jet(string brand, string model, string fuelType, string engineSize, int engines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
    numberOfEngines = engines;
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
  //source for randomly generated numbers: https://stackoverflow.com/questions/7560114/random-number-c-in-some-range
  srand(time(NULL));
  int rando = 40 + rand() % ((100 + 1) -40);

    double mileage =  rando * t;
    if (this->RocketBoost() == true) {
        mileage += mileage * 0.05;
    }
    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}

bool Jet::RocketBoost(){
  if(this->getFuelType() == "Rocket" && this->numberOfEngines>2){
    return true;
  }
  else{
    return false;
  }
}
