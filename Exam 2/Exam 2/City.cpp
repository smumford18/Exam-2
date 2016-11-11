//
//  City.cpp
//  Exam 2
//
//  Created by Steven Mumford on 11/10/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//
//  I affirm that all code given below was written solely by me, Steven Mumford, and that any help I
//  recieved adhered to the rules stated by this exam.
//

#include "City.hpp"

City::City(string cityName)
{
    name = cityName;
    numOfCitizens = 0;
    string filename = cityName + ".txt";
    ifstream fileIO(filename);
    if(fileIO.fail())
    {
        ofstream newFile(filename);
        if(!newFile)
            cout << "ERROR: could not open file" << endl;
        newFile.close();
    }
    else
    {
        int id;
        string fname, lname, color;
        while (!fileIO.eof())
        {
            fileIO >> id >> fname >> lname >> color;
        }
    }
    fileIO.close();
}

City::~City()
{
    string filename = name + ".txt";
    fstream output(filename, ios::out);
    if(output.fail())
        cout << "ERROR: could not open file" << endl;
    else
    {
        int id;
        string fname, lname, color;
        for(int i=0; i < newCity.size(); i++)
        {
            output << (newCity.at(i))->getID() << " " <<  (newCity.at(i))->getFirstName() << " " << newCity.at(i)->getLastName() << " " << (newCity.at(i))->getFavoriteColor() << endl;
        }
    }
    output.close();
}

string City::getCityName()
{
    return name;
}

int City::populationSize()
{
    return numOfCitizens;
}

Citizen* City::getCitizenAtIndex(int index)
{
    return (newCity.at(index));
}

void City::addCitizen(Citizen* newCitizen)
{
    newCity.push_back(newCitizen);
    numOfCitizens++;
    Citizen *citizenCopy = new Citizen(newCitizen);
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




