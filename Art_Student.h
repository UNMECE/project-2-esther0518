#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"

class Art_Student : public Student{
    private:
    std::string art_emphasis;

    public:
    //getter and setter
    void set_artEmphasis(const std::string& emphasis){
        art_emphasis = emphasis;
    }

    std::string get_artEmphasis() const{
        return art_emphasis;
    }

};

#endif