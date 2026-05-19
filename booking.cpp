#include <iostream
#include "booking.h"
#include <iostream>
using namespace std;

Booking::Booking():
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
    total+=catring.calculatPrice();
    total+=photography.calculatPrice();
    return total;
}
void Booking:: display(){
    cout<<"=====your total bill detail====="<<endl;
    event.display()<<endl;
    entertainment.display()<<endl;
    decoration.display()<<endl;
    cout<<"======total cost======"<<endl;
    cout<<"Total:$"<<total_Price<<endl;
}
