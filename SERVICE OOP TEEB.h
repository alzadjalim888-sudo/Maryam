

#ifndef UNTITLED2SERVICE_OOP_SERVICE_OOP_TEEB_H
#define UNTITLED2SERVICE_OOP_SERVICE_OOP_TEEB_H


#include <iostream>
#include <string>
using namespace std;
class Service { //base class
protected:
    double price;
    int  serviceID;
public:
    Service(int id, double p); 

    virtual double calculeteprice()=0; //pure virtual
};

class catring:public Service { // child class
private:
    int num_of_people;
public:
    catring(int num);car

    double calculeteprice()override ;
};
    


class photography:public Service { // child class
private:
    int num_of_pic;
public:
    photography(int num_pic);
    double calculateprice()override;
};


