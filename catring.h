
#ifndef DESKTOP_CATRING_H
#define DESKTOP_CATRING_H


#include"service_class.h"


class catring:public Service { // child class
private:
    int num_of_people;
public:
    catring(int num){num_of_people=num;} // constructer

    double calculeteprice()override;
    void display();
};




#endif //DESKTOP_CATRING_H
