#include "Admin.h"

Admin::Admin() 
    : admin_name {"sys_admin"}, admin_password {"1qazZAQ!"}{
}

bool Admin::login () {
    std::string user_name;
    std::string user_password;

    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> user_password;
        
    if (this->admin_name == user_name && this->admin_password == user_password)
        return true;
        
    return false;
}

int Admin::admin_menu() {
    std::cout << "Please choose an action: " << std::endl;
    std::cout << "===========================" << std::endl;
    std::cout << "Press 1 to create an assistant user" << std::endl;
    std::cout << "Press 2 to create a call centre user" << std::endl;
    std::cout << "Press 3 to create a doctor user" << std::endl;
    std::cout << "Press 4 to quit and logout" << std::endl;

    int choice;

    try {
        if (std::cin >> choice)
            return choice;
        else
            throw 1;
    }
    catch (int error) {
        std::cerr << "Wrong input" << std::endl;
        admin_menu();
    }
}
