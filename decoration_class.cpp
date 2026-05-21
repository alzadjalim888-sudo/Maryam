#include "decoration_class.h"

Decoration::Decoration(int id,double p, bool a,string pt):Service(id,p,a) {
    packageType = pt;

}
double Decoration::calculatePrice() {
    if (packageType=="Basic") {
        price=50;
    }
    else if (packageType=="Premium") {
        price=100;
    }
    else if (packageType=="Luxury") {
        price=200;
    }
    else {
        price=0;
    }
    return price;
}
void Decoration::display() {
    cout<<"____Decoration_____"<<endl;
    cout<<"Service ID: "<<serviceID<<endl;
    cout<<"package: "<<packageType<<endl;
    cout<<"Availability:";
    if (availability)
        cout<<"Available"<<endl;
    else
        cout<<"Unavailable"<<endl;
    cout<<"Price: "<<calculatePrice()<<endl;
}
