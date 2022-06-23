#include "Person.h"


Person::Person() : firstName("Maxine"),
                   lastName("Aird"),
                   passportNo ("ABCD"),
                   country ("Ukraine"),
                   city ("Odesa"),
                   gender ("female"),
                   height(170),
                   weight(50) {}

Person::Person (string firstName, string lastName,
        string passportNo,
        string country, string city,
        string gender,
        int height, int weight);

{
    this-> firstName = firstName;
    this-> lastName = lastName;
    this -> passportNo = passportNo;
    this->country = country;
    this -> city = city;
    this -> gender = gender;
    if (height < 0)
        throw invalid_argument("Height can't be negative!");
    this->height = height;

    if (weight < 0)
        throw invalid_argument("Weight can't be negative!");
    this->weight = weight;
}

bool Person::livesInUkraine() const { return (country == "Ukraine"); }

bool Person::livesInLviv() const {return city == "Lviv"; }

string Person::Info() const
{
    string out;
    out = "FirstName:" + getFirstName() + "\n" +
          "LastName:" + getLastName() + "\n" +
          "PassportNo:" + getPassSerie() + "\n" +
          "Country:" + getCountry() + "\n" +
          "City:" + getCity() + "\n" +
          "Gender:" + getGender() + "\n" +
          "Height:" + to_string(getHeight()) + "\n" +
          "Weight:" + to_string(getWeight()) + "\n";


    return out;

}