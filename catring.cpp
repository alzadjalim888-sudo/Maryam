
#include <iostream>
using namespace std;

#include "catring.h"
#include "event.h"


Catring::Catring(int num): Service(0, 0.0, false) {
    num_of_people = num;
}

double Catring::calculatePrice() {
     cout<<"enter the number of people you want to include in catring:"<<endl:
    cout<<1-(50-100)<<endl;
    cout<<2-(100-150)<<endl;
    cout<<3-(150-200)<<endl;
    cin>>num_of_people;

    
    switch (num_of_people) {
        
        case 1: return 100;
        case 2: return 130;
        case 3: return 150;
        default: return 0;
    }
}
int people(){
switch (num_of_people) {
        
        case 1: cout<<"50-100 people";
        case 2: cout<<"100-150 people";
        case 3: cout<<"150-200 people";
        default: return 0;
    }


void Catring::display() {
    cout << "_____ Catring Service _____" << endl;
    cout << "Number of people: " << people()  << endl;
    cout << "Price: "           << calculatePrice() << endl;
}

Catring::~Catring() {
}
