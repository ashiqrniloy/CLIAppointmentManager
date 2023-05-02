#ifndef _USER_H_
#define _USER_H_
#include <iostream>
#include <string>
#include "Person.h"

class User : public Person {
private:
    std::string username;
    std::string password;
    
public:
    User(std::string name, int age, std::string gender);
    std::string get_username();
    bool login ();
    int menu();
};

#endif