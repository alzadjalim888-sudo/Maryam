#ifndef SERVICE_H
#define SERVICE_H

#include<iostream>
#include<string>
using namespace std;

class Service {
protected:
    double price;
    bool availability;
    int serviceID;
public:
    Service(int id, double p, bool a) {
        serviceID = id;
        price = p;
        availability = a;
    }
    virtual double calculatePrice()=0;
    virtual ~Service() {}
};
#endif