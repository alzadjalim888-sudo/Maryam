#include <iostream
#include "booking.h"
#include <iostream>
using namespace std;

void Booking::total_Price() {
    double total = 0;

    // add each class cost one by one

    total += entertainment.calculatePrice();
    total += decoration.calculatePrice();
    total_price = total;
}
void Booking:: display(){
    cout<<"=====your total bill detail====="<<endl;
    event.display()<<endl;
    entertainment.display()<<endl;
    decoration.display()<<endl;
    cout<<"======total cost======"<<endl;
    cout<<total_price<<endl;
}
