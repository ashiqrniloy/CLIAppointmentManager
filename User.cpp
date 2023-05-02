#include "User.h"


User::User(std::string name, int age, std::string gender) 
    : Person (name, age, gender) {
    std::cout << "Username: ";
    std::cin >> username;
    std::cout << "Password: ";
    std::cin >> password;
}

std::string User::get_username() {
    return username;
}

bool User::login () {
    std::string user_name;
    std::string user_password;

    std::cout << "Username: ";
    std::cin >> user_name;
    std::cout << "Password: ";
    std::cin >> user_password;
        
    if (this->username == user_name && this->password == user_password)
        return true;
        
    return false;
}

int User::menu() {

}  
