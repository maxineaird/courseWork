#include "Teacher.h"

Teacher::Teacher(string firstName, string lastName,
                 string gender,
                 string passportNo,
                 string country, string city,
                 int height, int weight,
                 double experience, enum category ctg,
                 double salary):
                 Person(firstName, lastName, gender, passportNo, country, city, height, weight),
         experience(experience), ctg(ctg), salary(salary)
{
    if(experience < 0)
        throw invalid_argument("Experience cannot be negative!");
    if(0 > hours || hours > 30)
        throw invalid_argument("Hours cannot be less than zero and more than thirty!");
}


double Teacher::coefExp() const // знаходить коеф за стажем вчителя
{
    if(0 <= experience && experience < 5) return 0;
    else if(5 <= experience && experience < 10) return 0.1;
    else if(10 <= experience && experience < 15) return 0.2;
    else if(15 <= experience && experience < 20) return 0.3;
    return 0.4;
}

double Teacher::ctgIf() const // знаходить категорію
{
    if (ctg == NoCategory) return 0.10;

    else if (ctg == Second) return 0.25;

    else if (ctg == First) return 0.45;

    return 0.67;
}

double Teacher::paidUp() const
{
    return salary + (salary * ctgIf()) + (salary * coefExp()) ;
}

void Teacher::calculatingHolidays(int countDays) const
{
    double holidays = paidUp()/ 30 * countDays;
    cout << holidays;
}

string Teacher::Info() const
{
    string enumToString;
    switch (ctg)
    {
        case category::NoCategory:
            enumToString = "No category";
            break;
        case category::Second:
            enumToString = "Second";
            break;
        case category::First:
            enumToString = "First";
            break;
        case category::Highest:
            enumToString = "Highest";
            break;
    }

    string out;
    out = Person::Info() +
            "Experience: " + to_string(getExperience()) + "\n" +
            "Category: " + enumToString + "\n" +
            "Salary: " + to_string(getSalary()) + "\n";

    return out;
}