
#ifndef EVENT_CLASS_EVENT_H
#define EVENT_CLASS_EVENT_H


#include <iostream>
#include <string>
using namespace std;

class Event {
private:
    string type;
    string date;
    string time;
    int choice;
    string range;


public:

    Event();    //constructor

    void setType(int z);         // getters/setters
    string getType();

    void setDate(string d);
    string getDate();

    void setTime(string t);
    string getTime();

    void setChoice(int x);
    int getChoice();


    string getrange();


    void display();           //display function

    ~Event(); //destructor
};


#endif //EVENT_CLASS_EVENT_H
