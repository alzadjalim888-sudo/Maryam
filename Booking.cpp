#include <iostream>
#include "booking.h"
using namespace std;

Booking::Booking() :
    entertainment(0, 0.0, false, ""),
    decoration(0, 0.0, false, ""),
    photography(0),
    catring(0),
    total(0) {
}                        

Booking::~Booking() {
}

double Booking::total_Price() {
    total = 0;
    total += entertainment.calculatePrice();
    total += decoration.calculatePrice();
    total += catring.calculatePrice();
    total += photography.calculatePrice();
    return total;
}

void Booking::display() {
    cout << "===== Your Total Bill Detail =====" << endl;
    TheEvent.display();
    entertainment.display();
    decoration.display();
    catring.display(TheEvent);
    photography.display();
    cout << "====== Total Cost ======" << endl;
    cout << "Total: $" << total_Price() << endl;
}