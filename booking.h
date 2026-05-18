

#ifndef BOOKING_EVENT_BOOKING_H
#define BOOKING_EVENT_BOOKING_H


# include <iostream>
using namespace std;
#include "event.h"
#include "Entertainment.h"
#include "decoration.h"
#include "SERVICE OOP TEEB.h"

class Booking{
private:
Event event;
Entertainment entertainment;
Decoration decoration;
Service service;
public:
Booking();
void display();
void total_price();
~Booking();
};
#endif
