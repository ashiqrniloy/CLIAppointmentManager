#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Admin.h"

// function prototypes
int start_menu();
bool admin_functionalities(std::unique_ptr<Admin> &admin_ptr);

// class person
class Person {
private:
    std::string name;
    int age;
    std::string gender;

public:
    Person(std::string person_name, int person_age, std::string person_gender) 
        : name {person_name}, age {person_age}, gender {person_gender} {

    }

    void display_profile () {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Age: " << this->age << std::endl;
        std::cout << "Gender: " << this->gender << std::endl;
    }
};



// class user
class User : public Person {
private:
    std::string username;
    std::string password;
    
public:
    User(std::string name, int age, std::string gender) 
        : Person (name, age, gender) {
        std::cout << "Username: ";
        std::cin >> username;
        std::cout << "Password: ";
        std::cin >> password;
    }

    std::string get_username() {
        return username;
    }

    bool login () {
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

    int menu() {

    }  
};


int main() {
    std::unique_ptr<Admin> system_admin(new Admin());
    int choice {0};
    while (choice != 5) {
        choice = start_menu();
        if (choice == 1) {
            if (system_admin->login())
                while (admin_functionalities(system_admin)) {}
            else
                std::cout << "Wrong username or password" << std::endl;
            continue;
        }

    }
}

int start_menu() {
    
    std::cout << "Please choose your user type: " << std::endl;
    std::cout << "==============================" << std::endl;
    std::cout << "Press 1 for Admin" << std::endl;
    std::cout << "Press 2 for Assistant" << std::endl;
    std::cout << "Press 3 for Doctor" << std::endl;
    std::cout << "Press 4 for Call Centre" << std::endl;
    std::cout << "Press 5 to quit" << std::endl;

    int user_choice;

    try {
        if (std::cin >> user_choice)
            return user_choice;
        else
            throw 1;
    }
    catch (int error) {
        std::cerr << "Wrong input" << std::endl;
        start_menu();
    }
    
}

bool admin_functionalities(std::unique_ptr<Admin> &admin_ptr) {
// passing a smart pointer by reference to a function
    int choice;
    choice = admin_ptr->admin_menu();
    if (choice == 4) 
        return false;
    
    if (choice == 1) {

    }

}







// class call centre inherits from user


// class assistant inherits from user



// class doctor
//    Inherited from person



// class patient
    // inherited from person

// class user_table
//    vector of maps username and objects
//    different classes for each user type with inheritance from the user_table
