#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string first, string last, int day, int month, int year);
    string getName();
    string getBirthdate();

protected:
    string Fname;
    string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;
};

#endif 
