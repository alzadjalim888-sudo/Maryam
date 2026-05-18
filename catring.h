//
// Created by lenovo on 18 May 2026.
//

#ifndef DESKTOP_CATRING_H
#define DESKTOP_CATRING_H


#include<>


class catring:public Service { // child class
private:
    int num_of_people;
public:
    catring(int num){num_of_people=num;} // constructer

    double calculeteprice()override;
};




#endif //DESKTOP_CATRING_H
