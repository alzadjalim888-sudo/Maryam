
#include <iostream>
using namespace std;

#include "photography.h"

photography::photooption(){
cout<<"pic the number of picturs you want:"<<endl;
cout<<"1)50 pictures"<<endl;
cout<<"2)100 pictures"<<endl;
cout<<"3)300 pictures"<<endll;}


double Photography::calculatePrice() {
    return price;
}

void Photography::display() {
    cout << "__ Photography Service __" << endl;
    cout << "Number of pictures: " << num_of_pic << endl;
    cout << "Price: "             << price      << endl;
}

Photography::~Photography() {
}
