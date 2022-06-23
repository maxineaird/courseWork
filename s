/* #include <iostream>
#include <string>
#include <exception>
#include <algorithm>
using namespace std;

class Person {
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
    } //Вернуть серию паспорта (2 первые буквы номера).

    bool livesInUkraine() const { return (country == "Ukraine"); } //живет ли в Украине?
    bool livesInLviv() const {return city== "Lviv";} //живет ли в г. Львов?

};



Person::Person()
{
    string firstName = "Maxine";
    string lastName = "Aird";
    string passportNo = "ABCD";
    string country = "Ukraine";
    string city = "Odesa";
    string gender = "female";
    int height = 170;
    int weight = 50;
}

Person::Person(string firstName, string lastName,
               string passportNo,
               string country, string city,
               string gender,
               int height, int weight)
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

ostream& operator << (ostream& o, const Person& p)
{
    cout << "Info:" <<
    "\nFirts name: " << p.getFirstName() <<
    "\nLast name: " << p.getLastName() <<
    "\nPassport Serie: " << p.getPassSerie() <<
    "\nCountry: " << p.getCountry() <<
    "\nCity: " << p.getCity() <<
    "\nGender: " << p.getGender() <<
    "\nHeight: " << p.getHeight() <<
    "\nWeight: " << p.getWeight() << endl;
    return o;
}

int main()
{
    string firstName, lastName;
    string passportNo;
    string country, city;
    string gender;
    int height, weight;


    cout << "Input your first name:" << endl;
    getline(cin, firstName);
    cout << "Input your last name:" << endl;
    getline(cin, lastName);
    cout << "Passport serie:" << endl;
    cin >> passportNo;
    cout << "Country:" << endl;
    cin >> country;
    cout << "City:" << endl;
    cin >> city;
    cout << "Gender:" << endl;
    cin >> gender;
    cout << "Height:" << endl;
    cin >> height;
    cout << "Weight:" << endl;
    cin >> weight;

    try
    {
        Person p(firstName, lastName,
        passportNo,
        country, city,
        gender,
        height, weight);

        cout << endl << p << endl;

        cout <<"Дана людина: " << endl
        << (p.livesInUkraine()?"Живе в Україні":"Живе закордоном") << endl
        << (p.livesInLviv()?"Живе у Львові":"Живе у іншому місті") <<endl;


    }

        catch(invalid_argument& ia)
    {
        cerr << ia.what() << endl;
    }

    return 0;
}