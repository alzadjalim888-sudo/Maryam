
#ifndef BOOKING_BOOKING_H
#define BOOKING_BOOKING_H

 //BOOKING_BOOKING_H




# include <iostream>
using namespace std;
#include "event.h"
#include "decoration_class.h"
#include "entertainment_class.h"
#include "photography.h"
#include  "catring.h"
#include "service_class.h"
#include "Venue_Class.h"


class Booking {
private:
 Event TheEvent;
 Entertainment entertainment;
 Decoration decoration; //composetaion
 Photography photography;
 Catring catring;
 Venue venue;
 double total;

public:
 Booking();
 void display();
void setEvent(int type, string date, string time, int guestRange);
 void setEntertainment(int choice);
 void setDecoration(int choice);
 void setCatring(int choice);
 void setPhotography(int choice);
 double total_Price();
 ~Booking();
};
#endif
