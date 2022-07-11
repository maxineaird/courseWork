#include "Person.h"

Person::Person ():firstName ("Maxine"),
                  lastName ("Aird"),
                  gender ("female"),
                  passportNo ("ABCD"),
                  country ("Ukraine"),
                  city ("Odesa"),
                  height (170),
                  weight (50) {}

Person::Person(string firstName, string lastName,
               string gender,
               string passportNo,
               string country, string city,
               int height, int weight)
        :firstName(firstName), lastName(lastName),
         gender(gender),
         passportNo (passportNo),
         country (country), city (city),
         height(height), weight(weight)
{
    if(height <= 0) {throw invalid_argument("Height can't be negative!");}
    if(weight <= 0) {throw invalid_argument("Weight can't be negative!");}
}

bool Person::livesInUkraine() const { return (country == "Ukraine"); }

bool Person::livesInLviv() const {return city == "Lviv";}

string Person::Info() const
{
    string out;
    out = "First name: " + getFirstName() + "\n" +
          "Last name: "  + getLastName()  + "\n" +
          "The first two letters of the passport: " + getPassSerie() +"\n"+
          "Gender: "    + getGender() + "\n" +
          "Country: " + getCountry () + "\n" +
          "City: " + getCity () + "\n" +
          "Height: "    + to_string(getHeight()) + "\n" +
          "Weight: "    + to_string(getWeight()) + "\n" ;

    return out;

}
