#ifndef TERMWORK_TEACHER_H
#define TERMWORK_TEACHER_H


#include "Person.h"

enum category { NoCategory, Second, First, Highest };

enum subjects
{ algebra, biology, chemistry, english, geography, history, physics, french};
class Teacher : public Person
{
private:
    int wage;
    double experience, hours;
    subjects subj;
    category ctg;

public:
    Teacher();
    Teacher(string firstName, string lastName,
            string gender,
            string passportNo,
            string country, string city,
            int height, int weight,
            double experience, double hours,
            enum subjects subj, enum category ctg,
            int wage);

    int getExperience()    const { return experience; }
    double getHours()      const { return hours; }
    int    getWage()     const { return wage; }
    double exp;
    double ifCtg;
    bool coefIf();
    bool ctgIf();
    double paidUp() const;
    void holidays(int countDays) const;


    string getCtg() const
    {
        string enumCategory[] = {"NoCategory", "Second", "First", "Highest" };
        return enumCategory[ctg];
    }
    string getSubj() const
    {
        string enumSubjects[] = {"algebra", "biology", "chemistry", "english",
                                 "geography", "history", "physics", "french" };
        return enumSubjects[subj];
    }


    virtual string Info() const;


};



#endif //TERMWORK_TEACHER_H
