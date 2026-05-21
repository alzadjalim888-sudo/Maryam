#include <iostream>
#include <string>
#include "event.h"
using namespace std;

//constructor
Event::Event(){
    type=" ";
    date=" ";
    time=" ";
    choice=0;
    range=" ";
}

//type
void Event::setType(int z){
    switch (z) {
        case 1:
            type="Birthday";
            break;
        case 2:
            type="Graduation";
            break;
        case 3:
            type="Baby Shower";
            break;
        default:
            type="Invalid :)";
    }


}
string Event::getType() {
    return type;
}

//date
void Event::setDate(string d) {
    date=d;
}
string Event::getDate() {
    return date;
}

//time
void Event::setTime(string t) {
    time=t;
}
string Event::getTime() {
    return time;
}

//choice
void Event::setChoice(int x) {
    choice=x;

    switch (x) {
        case 1:
            range="50-100";
            break;
        case 2:
            range="100-150";
            break;
        case 3:
            range="150-200";
            break;

        default:
            range="Invalid :)";
    }
}
int Event::getChoice() {
    return choice;
}

string Event::getrange() {
    return range;
}


//display function
void Event::display() {
    cout<<"Type: "<<type<<endl;
    cout<<"Date: "<<date<<endl;
    cout<<"Time: "<<time<<endl;
    cout<<"Guest range: "<<range<<endl;

}

//destructor
Event::~Event(){}



