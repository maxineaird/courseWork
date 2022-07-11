#include "Worker.h"

Worker::Worker() : factory("default"),
                   occupation("default"),
                   salary(0) {}

Worker::Worker(string firstName, string lastName,
               string gender,
               string passportNo,
               string country, string city,
               int height, int weight,
               string factory,
               string occupation,
               double salary):
        Person(firstName, lastName, gender, passportNo, country, city, height, weight),
        factory(factory),
        occupation(occupation),
        salary(salary) {}

void Worker::increaseSalary() {
    if (occupation == "guard") {
        this->salary = getSalary() + 1000;
    }
    else if (occupation == "engeneer") {
        this->salary = getSalary() + 2000;
    }
    else if (occupation == "programmer") {
        this->salary = getSalary() + 3000;
    }
    else if (occupation == "director") {
        this->salary = getSalary() + 4000;
    }
}

void Worker::ChangeOccupation(const string &NewOccupation) {
    this->occupation = NewOccupation;
}

string Worker::Info() const {
    string out;

    out = Person::Info() +
          + "Factory: " + getFactory() + "\n"
          + "Occupation: " + getOccupation() + "\n"
          + "Salary: " + to_string(getSalary()) + "\n";

    return out;

}