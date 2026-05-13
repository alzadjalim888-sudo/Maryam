#include <iostream>
#include <iomanip>
#include "Venue_Class.h"
using namespace std;

Venue::Venue() {
    venue_no = 0;}

Venue::Venue(int vs) {
    venue_no = vs;}

void Venue::VenueOptions() {
    cout << "Venues:\n";
    cout << "1. Garden\n" << setw(5) << "Price: 100 omr\n";
    cout << "2. Home\n" << setw(5) << "Price: 50 omr\n";
    cout << "3. Hall\n" << setw(5) << "Price: 200 omr\n";
}

int Venue::setVenue(int vs) {
    if (1 <= vs && vs <= 3) {
        venue_no = vs;}

    return venue_no;}

int Venue::getVenue_no() {
    return venue_no;}

Venue::~Venue() {
}