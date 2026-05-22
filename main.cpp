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
    cout<<"============================================="<<endl;
    cout<<"=====Welcome to Event Booking================"<<endl;
    cout<<"============================================="<<endl;
     Client client;
    string name;
    cout<<"Enter your Name:"<<endl;
    cin>> name;
    while (name.empty()) {
        cout << "Invalid! Enter name to be entered: ";
        cin >> name;
    }
   client.setName(name);
    string email;
    cout<<"Enter your Email:"<<endl;
    cin>> email;
    while (email.empty()) {
        cout << "Invalid! Enter email to be entered: ";
        cin >> email;
    }
    client.setEmail(email);
    int phone;
    cout<<"Enter your Phone:"<<endl;
    cin>> phone;
    while (phone <= 0 || cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Invalid! Enter a valid phone number: ";
        cin >> phone;
    }
    client.setNumber(phone);
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
    while (x < 1 || x > 3) {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> x;
    }

    TheEvent.setType(x);

        //date
    cout<<"Enter the Date: ";
    cin>>d;
    while (d.empty()) {
        cout << "Invalid! Enter a date: ";
        cin >> d;
    }
    TheEvent.setDate(d);

        //time
    cout<<"Enter the Time: ";
    cin>>t;
    while (t.empty()) {
        cout << "Invalid! Enter a time: ";
        cin >> t;
    }

    TheEvent.setTime(t);

        //guest range
    cout<<" choose the number of expected guests: "<< endl;
    cout<<"1. (50-100)"<<endl;
    cout<<"2. (100-150)"<<endl;
    cout<<"3. (150-200)"<<endl;
    cin>>g;
    while (g < 1 || g > 3) {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> g;
    }

    TheEvent.setChoice(x);
    booking.setEvent(x,d,t,g);
    //////////Deena////////////////////////
    cout<<"------------------------------------------"<<endl;
    Venue TheVenue;
    TheVenue.VenueOptions();
    cout << "Choose a Venue: ";
    int v;
    cin >> v;
    while (v < 1 || v > 3) {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> v;
    }



    cout << "Venue selected: " << TheVenue.getVenue_no() << endl;
    ////////Atika////////////////////////////
    cout<<"------------------------------------------"<<endl;

    int choice;

    cout << "Pick the number of pictures you want:" << endl;
    cout << "1) 50 pictures" << endl;
    cout << "2) 100 pictures" << endl;
    cout << "3) 300 pictures" << endl;
    cin >> choice;
    while (choice < 1 || choice > 3) {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> choice;
    }
    booking.setPhotography(choice);

 cout<<endl;
    int cat;
    cout << "Choose Catering package:" << endl;
    cout << "1. 100 people - $100" << endl;
    cout << "2. 130 people - $130" << endl;
    cout << "3. 150 people - $150" << endl;
    cin >> cat;
    while (cat < 1 || cat > 3) {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> cat;
    }
    booking.setCatring(cat);

    cout<<"------------------------------------------"<<endl;
///////Teeb////////////////////////////////////////

    cout<<" Decoration service "<<endl;

cout<<endl;
    int decorChoice;

    cout<<"choose decoration package:"<<endl;
    cout<<"1. Basic"<<endl;
    cout<<"2.Premium"<<endl;
    cout<<"3.Luxury"<<endl;
    cin>>decorChoice;
    while (decorChoice < 1 || decorChoice > 3) {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> decorChoice;
    }

    booking.setDecoration(decorChoice);
    cout<<endl;

    cout<<" Entertainment service"<<endl;
cout<<endl;
    int entertainChoice;

    cout<<"choose entertianment type:"<<endl;
    cout<<"1.DJ"<<endl;
    cout<<"2.Fireword"<<endl;
    cin>>entertainChoice;

    while (entertainChoice < 1 || entertainChoice > 2) {
        cout << "Invalid! Enter 1 or 2: ";
        cin >> entertainChoice;
    }

    booking.setEntertainment(entertainChoice);
    cout<<"------------------------------------------"<<endl;
/////////Mariyam///////////////////////////////



    client.display();
cout<<endl;
    TheVenue.setVenue(v);
    booking.display();
    return 0;

}
