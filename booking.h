

#ifndef BOOKING_EVENT_BOOKING_H
#define BOOKING_EVENT_BOOKING_H


# include <iostream>
using namespace std;
#include "event.h"
#include "decoration_class.h"
#include "entertainment_class.h"
#include "photography.h"
#include  "catring.h"
#include "service_class.h"
#include "Venue_Class.h"


class Booking{
private:
Event event;
Entertainment entertainment;
Decoration decoration;
Service service;
Venue venue;
public:
Booking();
void display();
void total_price();
~Booking();
};
#endif
