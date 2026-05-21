#include <iostream>
using namespace std;
#include "booking.h"
#include "catring.h"
#include "Client_Class.h"
#include "decoration_class.h"
#include "entertainment_class.h"
#include "event.h"
#include "photography.h"
#include "service_class.h"
#include "Venue_Class.h"
int main() {
    Booking booking;
    /*cout<<"============================================="<<endl;
    cout<<"=====Welcome to Event Booking================"<<endl;
    cout<<"============================================="<<endl;
     Client client;
    string name;
    cout<<"Enter your Name:"<<endl;
    cin>> name;
   client.setName(name);
    string email;
    cout<<"Enter your Email:"<<endl;
    cin>> email;
    client.setEmail(email);
    int phone;
    cout<<"Enter your Phone:"<<endl;
    cin>> phone;
    client.setNumber(phone);*/
    cout<<"------------------------------------------"<<endl;
    //////////////////////Atika class /////////////////
    cout<<"------------------------------------------"<<endl;
    cout<<"--- let's start planning your event ;) ---"<<endl;
    cout<<"------------------------------------------"<<endl;
    Event TheEvent;

    int x,g;
    string d,t;

    //type
    cout <<"choose Event Type:"<< endl;
    cout<<"1. Birthday"<< endl;
    cout<<"2. Graduation"<< endl;
    cout<<"3. Baby Shower"<< endl;
    cin >>x;

    TheEvent.setType(x);

        //date
    cout<<"Enter the Date: ";
    cin>>d;
    TheEvent.setDate(d);

        //time
    cout<<"Enter the Time: ";
    cin>>t;
    TheEvent.setTime(t);

        //guest range
    cout<<" choose the number of expected guests: "<< endl;
    cout<<"1. (50-100)"<<endl;
    cout<<"2. (100-150)"<<endl;
    cout<<"3. (150-200)"<<endl;
    cin>>g;

    TheEvent.setChoice(x);
    booking.setEvent(x,d,t,g);
    //////////Deena////////////////////////
    cout<<"------------------------------------------"<<endl;
    Venue TheVenue;
    TheVenue.VenueOptions();
    cout << "Choose a Venue: ";
    int v;
    cin >> v;
    TheVenue.setVenue(v);

    cout << "Venue selected: " << TheVenue.getVenue_no() << endl;
    ////////Atika////////////////////////////
    cout<<"------------------------------------------"<<endl;

    int choice;

    cout << "Pick the number of pictures you want:" << endl;
    cout << "1) 50 pictures" << endl;
    cout << "2) 100 pictures" << endl;
    cout << "3) 300 pictures" << endl;

    cin >> choice;
    booking.setPhotography(choice);

    Photography photoService(choice);
 cout<<endl;
    cout<<endl;
    int cat;
    cout << "Choose Catering (1-3): "; cin >> cat;
    booking.setCatring(cat);

    cout<<"------------------------------------------"<<endl;
///////Teeb////////////////////////////////////////




    //client.display();
cout<<endl;
    booking.display();
    return 0;

}
