#ifndef Attribute_h
#define Attribute_h

// Attribute class represents a player attribute and stores a rating.

class Attribute {
    private:
        int rating;     // Attribute rating out of 10
    public:
        Attribute();
        Attribute(int _rating);

        // get/set functions
        int get_rating();
        void set_rating(int _rating);
};

#endif
