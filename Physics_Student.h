#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "Student.h"

class Physics_Student : public Student{
    private:
    std::string physics_concentration;

    public:
    //setter and getter
    void set_concentration(const std::string& concentration){
        physics_concentration = concentration;
    }

    std::string get_concentration() const{
        return physics_concentration;
    }
};

#endif