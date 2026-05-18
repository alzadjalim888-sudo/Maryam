//
// Created by lenovo on 18 May 2026.
//

#ifndef DESKTOP_PHOTOGRAPHY_H
#define DESKTOP_PHOTOGRAPHY_H
#include"service_class.h"

class photography:public Service { // child class
private:
    int num_of_pic;
public:
    photography(int num_pic){number_of_pic=num_pic;}// constructer
    double calculateprice()override;
    void display();
};
#endif //DESKTOP_PHOTOGRAPHY_H
