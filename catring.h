
#ifndef DESKTOP_CATRING_H
#define DESKTOP_CATRING_H


#include"service_class.h"


class catring:public Service { // child class
private:
    int num_of_people;
public:
    catring(int num,int id){
        num_of_people=num;
        serviceID=id;   } // constructer

    double calculeteprice()override;
    void display();
    ~catring();
};




#endif //DESKTOP_CATRING_H
