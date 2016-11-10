//
//  City.hpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#ifndef City_hpp
#define City_hpp

#include <string>
#include <vector>
#include "Citizen.hpp"

using namespace std;

class City
{
public:
    string name;
    int numOfCitizens;
    vector<Citizen*> newCity;
    
public:
    City(string);
    ~City();
    
    string getCityName();
    int populationSize();
    Citizen* getCitizenAtIndex(int);
    void addCitizen(Citizen*);
    Citizen* getCitizenWithId(int);
    vector<Citizen*> getCitizensForFavoriteColor(string);
    
};

#endif /* City_hpp */