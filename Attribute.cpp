#include "Attribute.h"
#include <iostream>

using namespace std;

Attribute::Attribute() : rating(0){}    // Initialise rating to zero

Attribute::Attribute(int _rating){
    // Input validation
    if (_rating >= 0 && _rating <= 10) {
        rating = _rating;
    }

    else {
        cout << "Invalid rating. Setting to 0." << endl;
        rating = 0;
    }
}

int Attribute::get_rating(){return rating;}

void Attribute::set_rating(int _rating){
    // Input validation, the rating has to be in the range [0, 10]
    if (_rating >= 0 && _rating <= 10) {
        rating = _rating;
    }

    else {
        cout << "Invalid rating. Setting to 0." << endl;
        rating = 0;
    }
}
