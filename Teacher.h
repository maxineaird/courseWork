#ifndef TERMWORK_TEACHER_H
#define TERMWORK_TEACHER_H


#include "Person.h"

enum category { NoCategory, Second, First, Highest };

class Teacher : public Person
{
private:
    double salary;
    double experience;
    double hours;
    category ctg;

public:
    Teacher();
    Teacher(string firstName, string lastName,
            string gender,
            string passportNo,
            string country, string city,
            int height, int weight,
            double experience, enum category ctg,
            double salary);


    double exp;
    double ifCtg;
    double coefExp() const;
    double ctgIf() const;
    double paidUp() const;
    void calculatingHolidays(int countDays) const;
    double getSalary() const { return salary; }
    double getExperience() const { return experience; }

    string getCtg() const
    {
        string enumCategory[] = {"NoCategory", "Second", "First", "Highest" };
        return enumCategory[ctg];
    }


    virtual string Info() const;


};



#endif //TERMWORK_TEACHER_H
