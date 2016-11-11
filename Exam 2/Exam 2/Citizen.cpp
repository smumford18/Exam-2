//
//  Citizen.cpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
//  I affirm that all code given below was written solely by me, Steven Mumford, and that any help I
//  recieved adhered to the rules stated by this exam.
//

#include "Citizen.hpp"

// Constructor for a citizen
Citizen::Citizen(int ID, string FNAME, string LNAME, string COLOR)
{
    id = ID;
    fname = FNAME;
    lname = LNAME;
    favColor = COLOR;
}

// Copy constructor
Citizen::Citizen(Citizen* citizen)
{
    id = citizen->getID();
    fname = citizen->getFirstName();
    lname = citizen->getLastName();
    favColor = citizen->getFavoriteColor();
}

// Getter for the first name of a citizen
string Citizen::getFirstName()
{
    return fname;
}

// Getter function for the last name of a citizen
string Citizen::getLastName()
{
    return lname;
}

// Getter function for the ID of a citizen
int Citizen::getID()
{
    return id;
}

// Getter function for the favorite color of a citizen
string Citizen::getFavoriteColor()
{
    return favColor;
}

// Setter function for the favorite color of a citizen
void Citizen::setFavoriteColor(string newFavColor)
{
    favColor = newFavColor;
}
