//
// Created by hp on 21/05/2026.
//

#ifndef BOOKING_CLINET_CLASS_H
#define BOOKING_CLINET_CLASS_H

 //BOOKING_CLINET_CLASS_H
#include <string>
using namespace std;

class Client {
private:
    string name;
    int number;
    string email;

public:
    Client();
    Client(string n, int num, string e);

    void setName(string n);
    void setNumber(int num);
    void setEmail(string e);

    void display();

    ~Client();
};
#endif