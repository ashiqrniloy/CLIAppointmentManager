#include "Person.h"


Person::Person(std::string person_name, int person_age, std::string person_gender) 
    : name {person_name}, age {person_age}, gender {person_gender} {

}

void Person::display_profile () {
    std::cout << "Name: " << this->name << std::endl;
    std::cout << "Age: " << this->age << std::endl;
    std::cout << "Gender: " << this->gender << std::endl;
}
