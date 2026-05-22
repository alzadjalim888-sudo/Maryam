// Catring.cpp
#include <iostream>
using namespace std;

#include "Catring.h"
#include "event.h"

Catring::Catring()
    : Service(0, 0, false), num_of_people(0)
{
}
Catring::Catring(int choice, int guestRange)
    : Service(0,0.0,false)
{
    if (choice == 2) {
        num_of_people = 0;
        price = 0;
    }
    else {
        switch (guestRange) {
            case 1:
                num_of_people = 100;
                price = 100;
                break;
            case 2:
                num_of_people = 150;
                price = 130;
                break;
            case 3:
                num_of_people = 200;
                price = 150;
                break;
        }
    }
}

double Catring::calculatePrice() {
    return price;
}

void Catring::display(Event& event) {
    cout << "___Catering Service___" << endl;

    if (price == 0)
        cout << "Not selected" << endl;
    else {
        cout << "Included for guest range: "
             << event.getrange() << endl;
        cout << "Price: " << price << endl;
    }
}


Catring::~Catring() {
}
