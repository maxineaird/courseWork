#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>
#include "Teacher.h"
#include "Worker.h"
using namespace std;

//перегрузка оператора "<" для Teacher
bool operator < (Teacher t1, Teacher t2) {
    return t1.getExperience() < t2.getExperience();
}

int main()
{
    cout << endl;
    try {
        cout << "                                                   Teachers:                                                   " << endl;

        Teacher teacher_1("Julia", "Borshch","female" , "QWER" , "Ukraine",
                          "Kiliya",165, 60, 35, Highest, 10000);

        Teacher teacher_2("Irina", "Shvayka","female" , "POIU" , "Ukraine",
                          "Kiliya",171, 96, 10, Second, 8000);

        Teacher teacher_3("Antonina", "Maximenko","female" , "FBTR" , "Ukraine",
                          "Kiliya",180, 60, 1, NoCategory, 5000);

        vector<Teacher> vecTeachers = { teacher_1, teacher_2, teacher_3 };

        sort(vecTeachers.begin(), vecTeachers.end());

        for (int i = 0; i < vecTeachers.size(); i++) {
            cout << vecTeachers[i].Info();
            cout << "Lives in Ukraine?: " << (vecTeachers[i].livesInUkraine() ? "Yes" : "No");
            cout << endl;
            cout << "Lives in Lviv?: " << (vecTeachers[i].livesInLviv() ? "Yes" : "No") << endl;
            cout << endl;
            vecTeachers[i].coefExp();
            cout << "Paid up: " << vecTeachers[i].paidUp() << endl;
            cout << "Holidays: ";
            vecTeachers[i].calculatingHolidays(56);
            cout << endl;
            cout << "------------------------------------------------------------------------------------------------------------------------";
            cout << endl;
        }


        cout << endl;

        cout << "                                                   Workers:                                                   " << endl;

        Worker worker_1("Oleg", "Burat","male", "FFFF", "Ukraine",
                        "Odesa", 190, 75, "Roshen", "programmer",  15000 );

        cout << worker_1.Info();
        cout << "Lives in Ukraine?: " << (worker_1.livesInUkraine() ? "Yes" : "No");
        cout << endl;
        cout << "Lives in Lviv?: " << (worker_1.livesInLviv() ? "Yes" : "No") << endl;
        cout << "\n";

        worker_1.increaseSalary();
        worker_1.ChangeOccupation("director");
        cout << "New Salary: " << worker_1.getSalary() << endl;
        cout << "New Occupation: " << worker_1.getOccupation() << endl;

    }
    catch(const exception& ex){cerr << ex.what();}

}