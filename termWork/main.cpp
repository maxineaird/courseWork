#include <iostream>
#include <string>
#include <exception>
#include "Teacher.h"
//#include "Worker.h"
using namespace std;


int main()
{
    cout << endl;
    try {
        cout << "                                                   Teachers:                                                   " << endl;

        Teacher teacher_1("Julia", "Borshch","female" , "QWER" , "Ukraine",
                          "Kiliya",165, 60, 25, 30, french, Highest, 15000);
        cout << teacher_1.Info();
        teacher_1.coefIf();
        cout << "Paid up: " << teacher_1.paidUp() << endl;
        cout << "Holidays: ";
        teacher_1.holidays(56);
        cout << endl;
        cout << "Lives in Ukraine?: " << (teacher_1.livesInUkraine() ? "Yes" : "No");
        cout << endl;
        cout << "Lives in Lviv?: " << (teacher_1.livesInLviv() ? "Yes" : "No");
        cout << "\n";
        cout << endl;
    }
    catch(const exception& ex){cerr << ex.what();}

}