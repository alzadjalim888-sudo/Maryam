#include <iostream>
#include "booking.h"
using namespace std;

Booking::Booking() :
    entertainment(0, 0.0, false, ""),
    decoration(0, 0.0, false, ""),
    photography(0),
    catring(),
    total(0) {
}                        

Booking::~Booking() { //destructore
}

double Booking::total_Price() {
    total = 0;
    total += entertainment.calculatePrice(); 
    total += decoration.calculatePrice();
    total += catring.calculatePrice();
    total += photography.calculatePrice();
     total += venue.getPrice();
    return total;
}

void Booking::setClient(Client c){
    client = c;
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
    catring = Catring(choice, TheEvent.getChoice());
}


void Booking::setPhotography(int choice) {
    photography = Photography(choice);
}



void Booking::setVenue(int v) {
    venue.setVenue(v);
}

Booking::operator double() {
    return total_Price();
}


void Booking::display() {
    cout << "\n=====================================\n";
    cout << "        FINAL BOOKING SUMMARY        \n";
    cout << "=====================================\n\n";
    client.display();
    cout << "\n_________________________"<<endl;


    TheEvent.display();
    cout<<endl;
    cout << "\n_________________________"<<endl;
    cout << "VENUE SELECTED: ";

    if (venue.getVenue_no() == 1)
        cout << "Garden - 100 OMR\n";
    else if (venue.getVenue_no() == 2)
        cout << "Home - 50 OMR\n";
    else if (venue.getVenue_no() == 3)
        cout << "Hall - 200\n";



    cout << "\n_________________________"<<endl;
    entertainment.display();

    cout << "\n_________________________"<<endl;
    decoration.display();

    cout << "\n_________________________"<<endl;
    catring.display(TheEvent);

    cout << "\n_________________________"<<endl;
    photography.display();



    cout << "\n=====================================\n";
    cout << "TOTAL PRICE: " << total_Price() <<" OMR" << endl;
    cout << "=====================================\n";
}
