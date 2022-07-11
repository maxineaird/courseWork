#ifndef TERMWORK_WORKER_H
#define TERMWORK_WORKER_H
#include "Person.h"

class Worker : public Person {
private:
    string factory, occupation;
    double salary;
public:
    Worker();
    Worker(string firstName, string lastName,
           string gender,
           string passportNo,
           string country, string city,
           int height, int weight,
           string factory,
           string occupation,
           double salary);

    string getFactory() const { return factory; }
    string getOccupation() const { return occupation; }
    double getSalary() const { return salary; }

    void increaseSalary();
    void ChangeOccupation(const string& NewOccupation);

    string Info() const override;

};


#endif //TERMWORK_WORKER_H
