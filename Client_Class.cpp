#include <iostream>
#include "Client_Class.h"

using namespace std;

Client::Client() {
    name = "";
    number = 0;
    email = "";}

Client::Client(string n, int num, string e) {
    name = n;
    number = num;
    email = e;}

void Client::setName(string n) {
    name = n;}

string Client::getName() {
    return name;
}

void Client::setNumber(int num) {
    number = num;}

void Client::setEmail(string e) {
    email = e;}

void Client::display() {
    cout << "Name: " << name << endl;
    cout << "Number: " << number << endl;
    cout << "Email: " << email << endl;}

Client::~Client() {}
