#include <iostream
#include "booking.h"
#include <iostream>
using namespace std;

void Booking::total_Price() {
    double total = 0;

    // add each class cost one by one

    total += entertainment.calculatePrice();
    total += decoration.calculatePrice();
    totalCost = total;
}
void Booking:: display(){
    cout<<"=====your total bill detail====="<<endl;
    event.display()<<endl;
    entertainment.display()<<endl;
    decoration.display()<<endl;
    cout<<"======total cost======"<<endl;
    cout<<totalCost<<endl;
}