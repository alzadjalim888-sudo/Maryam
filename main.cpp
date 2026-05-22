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
    cout << "==================================================\n";
    cout << "      WELCOME TO THE EVENT BOOKING SYSTEM\n";
    cout << "==================================================\n\n";

    cout << "Press Enter to start...";
    cin.get();

    Client client;
    string name;
    string email;
    cout << "Enter your Name: ";
    getline(cin, name);

    while (name.empty()) {
        cout << "Invalid! Enter name: ";
        getline(cin, name);
    }

    client.setName(name);

    cout << "Enter your Email: ";
    getline(cin, email);

    while (email.empty()) {
        cout << "Invalid! Enter email: ";
        getline(cin, email);
    }

    client.setEmail(email);


    string phone;
    bool valid = false;
    while (!valid) {

        cout << "Enter your Phone: ";
        cin >> phone;

        try {
            valid = true;

            for (char c : phone) {
                if (!isdigit(c)) {
                    throw runtime_error("Phone must contain only numbers");
                }
            }

            int num = stoi(phone);

            if (num <= 0)
                throw runtime_error("Phone cannot be negative or 0 ");

            client.setNumber(num);
        }
        catch (const runtime_error& e) {
            cout << "Error: " << e.what() << endl;
            valid = false; // force repeat
        }
    }

    booking.setClient(client);

    cout<<"------------------------------------------"<<endl;
    cout<<"--- let's start planning your event ;) ---"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<endl;
    int x,g;
    string d,t;

    //type
    cout <<"choose Event Type:"<< endl;
    cout<<"1. Birthday"<< endl;
    cout<<"2. Graduation"<< endl;
    cout<<"3. Baby Shower"<< endl;


    string input;
    cout << "Enter choice (1-3): ";
    cin >> input;
    while (input != "1" && input != "2" && input != "3") {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> input;
    }
    x = stoi(input);

        //date
    cout<<"Enter the Date (dd/mm/yy): ";
    cin>>d;
    while (d.empty()) {
        cout << "Invalid! Enter a date: ";
        cin >> d;
    }

        //time
    cout<<"Enter the Time: ";
    cin>>t;
    while (t.empty()) {
        cout << "Invalid! Enter a time: ";
        cin >> t;
    }


        //guest range
    cout<<" choose the number of expected guests: "<< endl;
    cout<<"1. (50-100)"<<endl;
    cout<<"2. (100-150)"<<endl;
    cout<<"3. (150-200)"<<endl;


    string in;
    cout << "Enter choice (1-3): ";
    cin >> in;
    while (in != "1" && in!= "2" && in != "3") {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> in;
    }
    g = stoi(in);

    booking.setEvent(x,d,t,g);


    cout<<"------------------------------------------";

    int v;
    Venue TheVenue;
    TheVenue.VenueOptions();

    string inp;
    cout << "Enter choice (1-3): ";
    cin >> inp;
    while (inp != "1" && inp != "2" && inp!= "3") {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> inp;
    }
    v = stoi(inp);

    booking.setVenue(v);

    cout<<"------------------------------------------"<<endl;

    int choice;

    cout << "Pick the number of pictures you want:" << endl;
    cout << "1. 50 pictures  (20 OMR) " << endl;
    cout << "2. 100 pictures (30 OMR)" << endl;
    cout << "3. 300 pictures (50 OMR)" << endl;


    string ph;
    cout << "Enter choice (1-3): ";
    cin >> ph;
    while (ph != "1" && ph!= "2" && ph != "3") {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> ph;
    }
    choice = stoi(ph);

    booking.setPhotography(choice);

    cout<<"------------------------------------------"<<endl;
    int cat;

    cout << "Do you want Catering?" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;


    string cate;
    cout << "Enter choice (1-2): ";
    cin >> cate;
    while (cate !="1" && cate != "2") {
        cout << "Invalid! Enter 1 or 2: ";
        cin >> cate;
    }
    cat = stoi(cate);

    booking.setCatring(cat);

    cout<<"------------------------------------------"<<endl;

    int decorChoice;

    cout<<"choose decoration package:"<<endl;
    cout<<"1. Basic    (50 OMR)"<<endl;
    cout<<"2. Premium  (100 OMR)"<<endl;
    cout<<"3. Luxury   (200 OMR)"<<endl;


    string decor;
    cout << "Enter choice (1-3): ";
    cin >> decor;

    while (decor != "1" && decor != "2" && decor!= "3") {
        cout << "Invalid! Enter 1, 2, or 3: ";
        cin >> decor;
    }

    decorChoice = stoi(decor);

    booking.setDecoration(decorChoice);
    cout<<endl;

    cout<<"------------------------------------------"<<endl;
    int entertainChoice;

    cout<<"choose entertainment type:"<<endl;
    cout<<"1. DJ       (50 OMR)"<<endl;
    cout<<"2. Firework (150 OMR)"<<endl;


    string enter;
    cout << "Enter choice (1-2): ";
    cin >> enter;
    while (enter != "1" && enter != "2") {
        cout << "Invalid! Enter 1 or 2: ";
        cin >> enter;
    }

    entertainChoice = stoi(enter);

    booking.setEntertainment(entertainChoice);



    cout<<endl;
    booking.display();

    cout << "\nThank you for your booking, " << client.getName() << "!" << endl;
    cout << "We hope you enjoy your event :) " << endl;
    return 0;

}