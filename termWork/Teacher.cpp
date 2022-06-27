#include "Teacher.h"

Teacher::Teacher() : experience(0),
                     wage(0),
                     hours(0){}

Teacher::Teacher(string firstName, string lastName,
                 string gender,
                 string passportNo,
                 string country, string city,
                 int height, int weight,
                 double experience, double hours,
                 enum subjects subj, enum category ctg,
                 int wage)
        :Person(firstName, lastName, gender, passportNo, country, city, height, weight),
         experience(experience), hours(hours),
         subj(subj), ctg(ctg),
         wage(wage)
{
    if(experience < 0)
    {throw invalid_argument("Experience cannot be negative!");}
    if(0 > hours || hours > 30)
    {throw invalid_argument("Hours cannot be less than zero and more than thirty!");}
}


bool Teacher::coefIf() // знаходе коеф за стажем вчителя
{
    if(0 <= experience && experience < 5){exp = 0;}
    else if(5 <= experience && experience < 10){exp = 0.1;}
    else if(10 <= experience && experience < 15){exp = 0.2;}
    else if(15 <= experience && experience < 20){exp = 0.3;}
    else if(20 <= experience){exp = 0.4;}
    return 0;
}

bool Teacher::ctgIf() // знаходе категорію за розрядом
{
    if(ctg = NoCategory) {ifCtg = 1.82; /* оклад = оклад_1_тариф_розряду * коеф_категорії;*/}

    else if(ctg = Second){ifCtg = 2.10;}

    else if(ctg = First){ifCtg = 2.45;}

    else if(ctg = Highest){ifCtg = 2.67;}

    return 0;
}

double Teacher::paidUp() const
{
    return (ifCtg*wage/18*hours) + ((ifCtg*wage/18*hours) * exp);
    //return ((оклад/18)*години) + (((оклад/18)*години) * коеф_стажу);
}

void Teacher::holidays(int countDays) const
{
    double holidays = Teacher::paidUp()/30 * countDays;
    cout << holidays;
}

string Teacher::Info() const
{
    string out;
    out = Person::Info() +
          "Experience: " + to_string(getExperience()) + "\n" +
          "Hours: " + to_string(getHours()) + "\n" +
          "Subject: " + getSubj() + "\n" +
          "Wage: " + to_string(getWage()) + "\n";

    return out;
}