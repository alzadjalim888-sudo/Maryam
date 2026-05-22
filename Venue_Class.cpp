#include <iostream>
#include <iomanip>
#include "Venue_Class.h"
using namespace std;

Venue::Venue() {
    venue_no = 0;}

Venue::Venue(int vs) {
    venue_no = vs;}

void Venue::VenueOptions() {
    cout << "\nVENUE OPTIONS:\n";
    cout << "1. Garden (100 OMR)\n";
    cout << "2. Home   (50 OMR)\n";
    cout << "3. Hall   (200 OMR)\n";
}


int Venue::setVenue(int vs) {
    if (1 <= vs && vs <= 3) {
        venue_no = vs;}

    return venue_no;}

int Venue::getVenue_no() {
    return venue_no;}

int Venue::getPrice() {
    if (venue_no == 1) return 100;
    else if (venue_no == 2) return 50;
    else if (venue_no == 3) return 200;
    else return 0;
}

Venue::~Venue() {
}
