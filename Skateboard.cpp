#include "Skateboard.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);

}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double t) {
    srand(time(NULL));
    std::random_device rd;
    std::default_random_engine generator(rd());
    std::uniform_real_distribution<double> distribution(0.1,0.5);
    double rando = distribution(generator);

    double mileage = rando * t;
    if(t>25 && t<250){
      std::random_device rd;
      std::default_random_engine generator(rd());
      std::uniform_real_distribution<double> distribution(1,t/3);
      double rando2 = distribution(generator);
      mileage += rando2;
    }
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
