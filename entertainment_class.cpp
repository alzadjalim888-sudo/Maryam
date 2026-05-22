
#include<iostream>
using namespace std;
# include"entertainment_class.h"


Entertainment::Entertainment(int id,double p,bool a,string t):Service(id,p,a) {
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
    cout<<"Type: "<<type<<endl;
    cout<<"price: "<<calculatePrice()<<endl;
}


