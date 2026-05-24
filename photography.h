// photography.h
#ifndef DESKTOP_PHOTOGRAPHY_H
#define DESKTOP_PHOTOGRAPHY_H

#include "service_class.h"

class Photography : public Service {
private:
    int num_of_pic;
    double price;

public:
    Photography(int num_pic);

    double calculatePrice() override;  
    void display();                    
    ~Photography();
};

#endif // DESKTOP_PHOTOGRAPHY_H
