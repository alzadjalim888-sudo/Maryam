
#ifndef UNTITLED_ENTERTAINMENT_CLASS_H
#define UNTITLED_ENTERTAINMENT_CLASS_H

#include<iostream>
#include "service_class.h"

using namespace std;

class Entertainment:public Service {
private:
    string type;
public:
    Entertainment(int id,double p,bool a,string t);

    double calculatePrice() override;

    void display();
};
#endif //UNTITLED_ENTERTAINMENT_CLASS_H