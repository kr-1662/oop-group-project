#ifndef Attribute_h
#define Attribute_h

class Attribute
{
public:
    int rating;
    Attribute();
    Attribute(int _rating);
    int get_rating();
    ~Attribute();
};

#endif
