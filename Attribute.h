#ifndef Attribute_h
#define Attribute_h

class Attribute {
    private:
        int rating;
    public:
        Attribute();
        Attribute(int _rating);
        int get_rating();
        void set_rating(int _rating);
        ~Attribute();
};

#endif
