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
void Booking::setEvent(int type, string date, string time, int guestRange) {
    TheEvent.setType(type);
    TheEvent.setDate(date);
    TheEvent.setTime(time);
    TheEvent.setChoice(guestRange);
}

void Booking::setEntertainment(int choice) {
    if (choice == 1) entertainment = Entertainment(1, 0.0, true, "DJ");
    else if (choice == 2) entertainment = Entertainment(1, 0.0, true, "Firework");
}

void Booking::setDecoration(int choice) {
    if (choice == 1) decoration = Decoration(1, 0.0, true, "Basic");
    else if (choice == 2) decoration = Decoration(1, 0.0, true, "Premium");
    else if (choice == 3) decoration = Decoration(1, 0.0, true, "Luxury");
}

void Booking::setCatring(int choice) {
    catring = Catring(choice);
}

void Booking::setPhotography(int choice) {
    photography = Photography(choice);
}

void Booking::display() {
    cout << "===== Your Total Bill Detail =====" << endl;
    TheEvent.display();
    cout<<endl;
    entertainment.display();
    cout<<endl;
    decoration.display();
    cout<<endl;
    catring.display(TheEvent);
    cout<<endl;
    photography.display();
    cout<<endl;
    cout << "======== Total Cost =============" << endl;
    cout << "Total: $" << total_Price() << endl;
}
