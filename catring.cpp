// Catring.cpp
#include <iostream>
using namespace std;

#include "catring.h"
#include "event.h"


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

void Catring::display(Event& event) {
    cout << "_____ Catring Service _____" << endl;
    cout << "Number of people: " << event.getrange()  << endl;
    cout << "Price: $"           << calculatePrice() << endl;
}

Catring::~Catring() {
}
