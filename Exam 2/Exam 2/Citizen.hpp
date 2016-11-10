//
//  Citizen.hpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
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
    Citizen(int, string, string, string);
    Citizen(Citizen* citizen);
    string getFirstName();
    string getLastName();
    int getID();
    string getFavoriteColor();
    void setFavoriteColor(string);
    
};

#endif /* Citizen_hpp */
