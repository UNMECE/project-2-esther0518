#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student{
    protected: 
    std::string first_name;
    std::string last_name;
    double gpa;
    int enrolled_year;
    std::string enrolled_semester;
    int grad_year;
    std::string grad_semester;
    bool grad_student;
    public:

    //default constructor 
    Student(){
        first_name = "";
        last_name = "";
        gpa = 0.0;
        enrolled_year = 0;
        enrolled_semester = "";
        grad_year = 0;
        grad_semester = "";
        grad_student = false;
    }
    //destructor
    virtual ~Student(){}
    
    //setters
    void setName(const std::string& first, const std::string& last){
        first_name = first;
        last_name = last;
    }

    void setGPA(double gpa){
        this -> gpa = gpa;
    }

    void setYearEnrolled(int year){
        enrolled_year = year;
    }

    void setEnrolledSemester(const std::string& semester){
        enrolled_semester = semester;
    }

    void setGradYear(int year){
        grad_year = year;
    }

    void setGradSemester(const std::string& semester){
        grad_semester = semester;
    }
    
    void setGradStudent(bool is_grad){
        grad_student = is_grad;
    }


    //getters
    std::string getName() const{
        return first_name +" "+ last_name; 
    }

    double getGPA() const{
        return gpa;
    }

    int getYearEnrolled() const{
        return enrolled_year;
    }

    std::string getSemsesterEnrolled() const{
        return enrolled_semester;
    }

    int getGradYear() const{
        return grad_year;
    }

    std::string getGradSemester() const{
        return grad_semester;
    }

    bool getGradStudent() const{
        return grad_student;
    }
};

#endif