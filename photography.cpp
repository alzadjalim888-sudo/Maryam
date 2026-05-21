// photography.cpp
#include <iostream>
using namespace std;

#include "photography.h"
Photography::Photography(int choice)
    : Service(0, 0.0, false) {

    switch(choice) {

        case 1:
            num_of_pic = 50;
            price = 20;
            break;

        case 2:
            num_of_pic = 100;
            price = 30;
            break;

        case 3:
            num_of_pic = 300;
            price = 50;
            break;

        default:
            num_of_pic = 0;
            price = 0;
    }
}

double Photography::calculatePrice() {
    return price;
}

void Photography::display() {

    cout << "__ Photography Service __" << endl;
    cout << "Number of pictures: " << num_of_pic << endl;
    cout << "Price: " << price << endl;
}

Photography::~Photography() {
}


