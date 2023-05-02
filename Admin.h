#ifndef _ADMIN_H_
#define _ADMIN_H_
#include <iostream>
#include <string>

class Admin {
private:
    std::string admin_name;
    std::string admin_password;
public:
    Admin();
    bool login ();
    int admin_menu();      
};

#endif