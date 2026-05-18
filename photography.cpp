
#include<photography.h>



photography::photography(int num_pic){number_of_pic=num_pic;}// constructer

double photography::calculateprice() {

    int choice;
    cout<<" how many pics do you want? ";// the client chose num of pic they want
    cout<<"1) 50 pic ";
    cout<<"2) 100 pic ";
    cout<<"3) 300 pic ";
    cin>>choice;

    switch(choice) { // switch method
        case 1:
            return 20;
            break;
        case 2:
            return 30;
            break;
        case 3:
            return 50;
            break;
        default:
            return 0;
    }

}


