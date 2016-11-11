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

// Constructor function for a city
City::City(string cityName)
{
    name = cityName;
    numOfCitizens = 0;
    string filename = cityName + ".txt";
    ifstream fileIO(filename);
    
    // Checks to see if there is a file already there
    //If there is not, it creates a new, empty file
    if(fileIO.fail())
    {
        ofstream newFile(filename);
        if(!newFile)
            cout << "ERROR: could not open file" << endl;
        newFile.close();
    }
    
    // If there is a file, it adds the data from the file into a vector
    else
    {
        int id;
        string fname, lname, color;
        while (!fileIO.eof())
        {
            fileIO >> id >> fname >> lname >> color;
            Citizen* citizenToAdd = new Citizen(id, fname, lname, color);
            newCity.push_back(citizenToAdd);
            numOfCitizens++;
        }
        newCity.pop_back();
        numOfCitizens--;
    }
    fileIO.close();
}

// Deconstructor that saves the data from the vector into a file
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
        for(int i=0; i < numOfCitizens; i++)
        {
            output << newCity.at(i)->getID() << " " <<  newCity.at(i)->getFirstName() << " " << newCity.at(i)->getLastName() << " " << newCity.at(i)->getFavoriteColor() << endl;
        }
    }
    output.close();
}

// Getter function for the name of the city
string City::getCityName()
{
    return name;
}

// Getter function for the size of the city
int City::populationSize()
{
    return newCity.size();
}

// Returns the citizen at a specificed index
Citizen* City::getCitizenAtIndex(int index)
{
    return (newCity[index]);
}

// Adds a citizen to a city
void City::addCitizen(Citizen* newCitizen)
{
    Citizen* citizenToAdd = new Citizen(newCitizen);
    newCity.push_back(citizenToAdd);
    numOfCitizens++;
}

// Returns the citizen with a specified ID
Citizen* City::getCitizenWithId(int testID)
{
    bool found = false;
    while(found == false)
    {
        for(int i=0; i < numOfCitizens ; i++)
        {
            if(testID == newCity.at(i)->getID())
            {
                found = true;
                return (newCity.at(i));
                break;
            }
        }
    }
    return (newCity.at(0));
}

// Returns the citizens with a specified color as their favorite color
vector<Citizen*> City::getCitizensForFavoriteColor(string favColor)
{
    vector<Citizen*> citizensWithSameFavColor;
    for(int i=0; i < numOfCitizens; i++)
    {
        if(newCity.at(i)->getFavoriteColor() == favColor)
           citizensWithSameFavColor.push_back(newCity.at(i));
    }
    return citizensWithSameFavColor;
}




