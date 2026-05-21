
#include<iostream>
using namespace std;
# include"entertainment_class.h"

Entertainment::Entertainment(double p,bool a,string t):Service(0,p,a) {
    counter ++;
    serviceID=counter;
    type=t;
}
double Entertainment::calculatePrice() {


    if (type=="DJ") {
        price=50;
    }
    else if (type=="Firework") {
        price=150;
    }
    else {
        price=0;
    }
    return price;
}
void Entertainment::display() {
    cout<<"____entertainment____"<<endl;
    cout<<"Service ID: "<<serviceID<<endl;
    cout<<"Type: "<<type<<endl;
    cout<<"Availability:";
    if (availability)
        cout<<"available"<<endl;
    else
        cout<<"unavailable"<<endl;
    cout<<"price: "<<calculatePrice()<<endl;
}
