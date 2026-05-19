// Catring.cpp
#include <iostream>
using namespace std;

#include "Catring.h"

Catring::Catring(int num): Service(0, 0.0, false) {
    num_of_people = num;
}

double Catring::calculatePrice() {
    switch (num_of_people) {
        case 1: return 100;
        case 2: return 130;
        case 3: return 150;
        default: return 0;
    }
}

void Catring::display() {
    cout << "__ Catring Service __" << endl;
    cout << "Number of people: " << num_of_people   << endl;
    cout << "Price: "           << calculatePrice() << endl;
}

Catring::~Catring() {
}
