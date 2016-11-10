//
//  Citizen.cpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "Citizen.hpp"

Citizen::Citizen(int ID, string FNAME, string LNAME, string COLOR)
{
    id = ID;
    fname = FNAME;
    lname = LNAME;
    favColor = COLOR;
}

Citizen::Citizen(Citizen* citizen)
{
    id = citizen->getID();
    fname = citizen->getFirstName();
    lname = citizen->getLastName();
    favColor = citizen->getFavoriteColor();
}

string Citizen::getFirstName()
{
    return fname;
}

string Citizen::getLastName()
{
    return lname;
}

int Citizen::getID()
{
    return id;
}

string Citizen::getFavoriteColor()
{
    return favColor;
}

void Citizen::setFavoriteColor(string newFavColor)
{
    favColor = newFavColor;
}
