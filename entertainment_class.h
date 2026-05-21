
#ifndef UNTITLED_ENTERTAINMENT_CLASS_H
#define UNTITLED_ENTERTAINMENT_CLASS_H

#include<iostream>
#include "service_class.h"

using namespace std;

class Entertainment:public Service {
private:
    static int counter;
    string type;
public:
    Entertainment(double p,bool a,string t);

    double calculatePrice() override;

    void display();
};
#endif //UNTITLED_ENTERTAINMENT_CLASS_H
