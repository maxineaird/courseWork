#ifndef COURSEWORK_PERSON_H
#define COURSEWORK_PERSON_H

#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Person
{
private:
    string firstName, lastName;
    string passportNo;
    string country, city;
    string gender;
    int height, weight;

public:
    Person();
    Person (string firstName, string lastName,
            string passportNo,
            string country, string city,
            string gender,
            int height, int weight);

    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getGender() const { return gender; }
    string getCountry() const { return country; }
    string getCity() const { return city; }
    int getHeight() const { return height; }
    int getWeight() const { return weight; }
    string getPassSerie() const {
        string passSerie;
        passSerie = passportNo[0];
        passSerie += passportNo[1];
        return passSerie;

        bool livesInUkraine() const;
        bool livesInLviv() const;

        virtual string Info() const;

};



#endif //COURSEWORK_PERSON_H