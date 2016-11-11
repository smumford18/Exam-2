//
//  Citizen.hpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
//  I affirm that all code given below was written solely by me, Steven Mumford, and that any help I
//  recieved adhered to the rules stated by this exam.
//

#ifndef Citizen_hpp
#define Citizen_hpp

#include <string>

using namespace std;

class Citizen
{
private:
    int id;
    string fname;
    string lname;
    string favColor;
    
public:
    // Constructor
    Citizen(int, string, string, string);
    // Copy Constructor
    Citizen(Citizen* citizen);
    
    // Object methods
    string getFirstName();
    string getLastName();
    int getID();
    string getFavoriteColor();
    void setFavoriteColor(string);
    
};

#endif /* Citizen_hpp */
