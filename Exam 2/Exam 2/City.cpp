//
//  City.cpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include "City.hpp"

City::City(string cityName)
{
    name = cityName;
}
/*
City::~City()
{
    
}
*/
string City::getCityName()
{
    return name;
}

int City::populationSize()
{
    return unsigned(newCity.size() - 1);
}

Citizen* City::getCitizenAtIndex(int index)
{
    return (newCity.at(index));
}

void City::addCitizen(Citizen* newCitizen)
{
    newCity.push_back(newCitizen);
    
}

Citizen* City::getCitizenWithId(int testID)
{
    bool found = false;
    while(found == false)
    {
        for(int i=0; i < newCity.size(); i++)
        {
            if(testID == newCity.at(i)->getID())
            {
                found = true;
                return (newCity.at(i));
                break;
            }
        }
    }
    return (newCity.at(newCity.size()));
}

vector<Citizen*> City::getCitizensForFavoriteColor(string favColor)
{
    vector<Citizen*> citizensWithSameFavColor;
    for(int i=0; i < newCity.size(); i++)
    {
        if(newCity.at(i)->getFavoriteColor() == favColor)
           citizensWithSameFavColor.push_back(newCity.at(i));
    }
    return citizensWithSameFavColor;
}




