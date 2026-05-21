// photography.cpp
#include <iostream>
using namespace std;

#include "photography.h"

Photography::Photography(int num_pic) : Service(0, 0.0, false) {
    num_of_pic = num_pic;

    if (num_pic <= 50)       price = 20;
    else if (num_pic <= 100) price = 30;
    else                     price = 50;
}

double Photography::calculatePrice() {
    return price;
}

void Photography::display() {
    cout << "_____ Photography Service _____" << endl;
    cout << "Number of pictures: " << num_of_pic << endl;
    cout << "Price: $"             << price      << endl;
}

Photography::~Photography() {
}