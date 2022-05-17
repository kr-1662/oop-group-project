#include "Attribute.h"
#include <iostream>

using namespace std;

int main() {
    {
        int test_num = 1;
        Attribute attribute;
        if (attribute.get_rating() != 0) {
            cout << "Error in test number: " << test_num << endl;
        }
        attribute.set_rating(4);
        if (attribute.get_rating() != 4) {
            cout << "Error in test number: " << test_num << endl;
        }
    }

    {
        int test_num = 2;
        Attribute attribute(4);
        if (attribute.get_rating() != 4) {
            cout << "Error in test number: " << test_num << endl;
        }
        attribute.set_rating(-1);
        if (attribute.get_rating() != 0) {
            cout << "Error in test number: " << test_num << endl;
        }
    }

    {
        int test_num = 3;
        Attribute attribute(1);
        if (attribute.get_rating() != 1) {
            cout << "Error in test number: " << test_num << endl;
        }
        attribute.set_rating(122);
        if (attribute.get_rating() != 0) {
            cout << "Error in test number: " << test_num << endl;
        }
    }

    {
        int test_num = 4;
        Attribute attribute(-1);
        if (attribute.get_rating() != 0) {
            cout << "Error in test number: " << test_num << endl;
        }
    } 

    {
        int test_num = 5;
        Attribute attribute(0);
        if (attribute.get_rating() != 0) {
            cout << "Error in test number: " << test_num << endl;
        }
    }   

    {
        int test_num = 6;
        Attribute attribute(10);
        if (attribute.get_rating() != 10) {
            cout << "Error in test number: " << test_num << endl;
        }
    }

    {
        int test_num = 7;
        Attribute attribute(188);
        if (attribute.get_rating() != 0) {
            cout << "Error in test number: " << test_num << endl;
        }
    }

    return 0;

}

