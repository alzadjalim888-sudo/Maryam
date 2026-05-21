#ifndef CLASS_VENUE_H
#define CLASS_VENUE_H

class Venue {
private:
    int venue_no;
public:
    Venue(); // constructor default
    Venue(int vs); // constructor with parameter

    void VenueOptions();

    int setVenue(int vs);

    int getVenue_no();

    ~Venue();

};


#endif //CLASS_VENUE_H