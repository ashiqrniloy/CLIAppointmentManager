#ifndef _SPECIALTY_H_
#define _SPECIALTY_H_
#include <iostream>
#include <string>
#include <vector>
#include "Assistant.h"
#include "Doctor.h"

class Specialty {
private:
    std::string specialty_name;
    std::vector<Doctor> doctors;
    std::vector<Assistant> assistants;

public:
    Specialty();
    void add_doctor();
    void add_assistant();
};

#endif