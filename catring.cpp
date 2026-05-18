#include"catring.h"

catring::catring(int num){num_of_people=num;} // constructer



double catring::calculateprice() {
    //using the num of people from the event class
    switch (num_of_people){ // switch method
        case 1:
            return 100;
            break;
        case 2:
            return 130;
            break;
        case 3:
            return 150;
            break;
    }
}

void catring::display(){
    cout<<"______catring service______"<<endl;
    cout<<"serviceID:"<<serviceID<<endl;
    cout<<"number of people:"<<num_of_people<<endl;
    cout<<"price:"<<calculateprice()<<endl;
}
