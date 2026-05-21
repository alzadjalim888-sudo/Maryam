
#ifndef DESKTOP_CATRING_H
#define DESKTOP_CATRING_H
#include"event.h"
#include "service_class.h"

class Catring : public Service {
private:
    int num_of_people;

public:
    Catring(int num);

    double calculatePrice() override;
    void display(Event& event);
    ~Catring();
};

#endif // DESKTOP_CATRING_H
