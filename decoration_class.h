#ifndef DECORATION_H
#define DECORATION_H

#include <iostream>
#include "service_class.h"
#include<string>

using namespace std;

class Decoration:public Service {
private:
    string packageType;
public:
    Decoration(int id ,double p,bool a,string pt);

    double calculatePrice() override;

    void display();
};
#endif
