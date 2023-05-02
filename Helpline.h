#ifndef _HELPLINE_H_
#define _HELPLINE_H_
#include "User.h"

class Helpline: public User {
private:
    const int number;

public:
    Helpline();
    void add_appointment();

};


#endif

