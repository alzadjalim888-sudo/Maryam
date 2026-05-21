#ifndef Client_class_h
#define Client_class_h

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
