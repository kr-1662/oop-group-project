#include "Attribute.h"
#include <iostream>

using namespace std;

Attribute::Attribute(int _rating)
{
    if (_rating >= 0 && _rating <= 10) {
        rating = _rating;
    }

    else {
        cout << "Invalid rating. Setting to 0." << endl;
        rating = 0;
    }
}

int Attribute::get_rating() {
    return rating;
}

Attribute::~Attribute()
{
}