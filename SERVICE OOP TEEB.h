

#ifndef UNTITLED2SERVICE_OOP_SERVICE_OOP_TEEB_H
#define UNTITLED2SERVICE_OOP_SERVICE_OOP_TEEB_H

#endif //UNTITLED2SERVICE_OOP_SERVICE_OOP_TEEB_H
#include <iostream>
#include <string>
using namespace std;
class Service { //base class
protected:
    double price;
    int  serviceID;
public:
    Service(int id, double p) { // constructer
        serviceID = id;
        price=p;

    }
    virtual double calculeteprice()=0; //pure virtual
};

class catring:public Service { // child class
private:
    int num_of_people;
public:
    catring(int num){num_of_people=num;} // constructer

    double calculeteprice()override {
        int people;
        //using the num of people from the event class
        switch (people) { // switch method
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

};
class photography:public Service { // child class
private:
    int num_of_pic;
public:
    photography(int num_pic){number_of_pic=num_pic;}// constructer
    double calculateprice()override {
        int choice;
        cout<<" how many pics do you want? ";// the client chose num of pic they want
        cout<<"1) 50 pic ";
        cout<<"2) 100 pic ";
        cout<<"3) 300 pic ";
        cin>>choice;

        switch(choice) { // switch method
            case 1:
                return 20;
                break;
            case 2:
                return 30;
                break;
            case 3:
                return 50;
                break;
            default:
                return 0;
        }

    }
};
