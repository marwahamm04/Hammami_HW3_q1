#include "Person.h"
#include <sstream>
#include <string>
using namespace std;

Person::Person() {
    Fname = "";
    Lname = "";
    birthDay = 1;
    birthMonth = 1;
    birthYear = 1;
}

Person::Person(std::string first, std::string last, int day, int month, int year) {
    Fname = first;
    Lname = last;
    birthDay = day;
    birthMonth = month;
    birthYear = year;
}
string Person::getName() const {
    return Fname + " " + Lname;
}

string Person::getBirthdate() const {
ostringstream bday;
    bday << birthDay << "/" << birthMonth << "/" << birthYear;
    return bday.str();
}
