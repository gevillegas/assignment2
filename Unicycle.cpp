#include "Unicycle.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <random>

Unicycle::Unicycle(string brand, string model) {
    setBrand(brand);
    setModel(model);

}

Unicycle::~Unicycle() = default;

double Unicycle::mileageEstimate(double t) {
  double mileage = 3 * t;
  return mileage;
}

string Unicycle::toString() {
    string s = "-> Unicycle\n\t";
    return "-> Unicycle\n" + Vehicle::toString();
}
