#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    std::string gender;

public:
    Person(std::string person_name, int person_age, std::string person_gender);
    void display_profile ();
};

#endif