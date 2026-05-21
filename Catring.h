// Catring.h
#ifndef DESKTOP_CATRING_H
#define DESKTOP_CATRING_H

#include "service_class.h"
#include "event.h"

class Catring : public Service {
private:
    int num_of_people;

public:
    Catring(int num);

    double calculatePrice() override;
    void display(Event& event);;
    ~Catring();
};

#endif // DESKTOP_CATRING_H