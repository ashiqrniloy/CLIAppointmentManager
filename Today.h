#ifndef _TODAY_H_
#define _TODAY_H_
#include <vector>
#include "Appointment.h"

class Today {
private:
    int day;
    int month;
    int year;
    std::vector<Appointment> appointment_list;

public:
    Today(int day, int month, int year);
    void load_appointments();
    void add_appointment();

};


#endif