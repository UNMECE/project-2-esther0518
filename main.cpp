#include <iostream>
#include <fstream>
#include <vector>

#include "Physics_Student.h"
#include "Art_Student.h" 

int main(){
    //make vectors for the student classes
    std::vector<Art_Student*> art_students;
    std::vector<Physics_Student*> physics_students;

    //give the vectors objects
    art_students.push_back(new Art_Student);
    art_students[0] -> setName("Jane", "Doe");
    art_students[0] -> setGPA(2.5);
    art_students[0] -> setEnrolledSemester("Fall");
    art_students[0] -> setYearEnrolled(2018);
    art_students[0] -> setGradSemester("Spring");
    art_students[0] -> setGradYear(2022);
    art_students[0] -> set_artEmphasis("Art Studio");
    art_students[0] -> setGradStudent(false);

    physics_students.push_back(new Physics_Student);
    physics_students[0] -> setName("John", "Doe");
    physics_students[0] -> setGPA(3.1);
    physics_students[0] -> setEnrolledSemester("Fall");
    physics_students[0] -> setYearEnrolled(2016);
    physics_students[0] -> setGradSemester("Spring");
    physics_students[0] -> setGradYear(2021);
    physics_students[0] -> set_concentration("Earth and Planetary Sciences"); 
    physics_students[0] -> setGradStudent(false);

    //output data into a file
    std::ofstream outfile("student_info.dat");
    if(outfile.is_open()){
        outfile << "Art Students:" << std::endl;
        for(int i = 0; i < art_students.size(); i++){
            //output data for the art students
            outfile << "Name: " << art_students[i] ->getName() << std::endl;
            outfile << "GPA: " << art_students[i] ->getGPA() << std::endl;
            outfile << "Year Enrolled: " << art_students[i] ->getYearEnrolled() << std::endl;
            outfile << "Semester Enrolled: " << art_students[i] ->getSemsesterEnrolled() << std::endl;
            outfile << "Graduation Year: " << art_students[i] ->getGradYear() << std::endl;
            outfile << "Graduation Semester: " << art_students[i] ->getGradSemester() << std::endl;
            outfile << "Emphasis: " << art_students[i] ->get_artEmphasis() << std::endl;
            if(art_students[i] -> getGradStudent()){
                outfile << art_students[i] ->getName() << " is a grad student" << std::endl;
            }else{
                outfile << art_students[i] ->getName() << " is not a grad student" << std::endl;
            }
            outfile << std::endl;
        }

        //output data for the physics students
        outfile <<"Physics students:" << std::endl;
        for(int i = 0; i < physics_students.size(); i++){
            outfile << "Name: " << physics_students[i] ->getName() << std::endl;
            outfile << "GPA: " << physics_students[i] ->getGPA() << std::endl;
            outfile << "Year Enrolled: " << physics_students[i] ->getYearEnrolled() << std::endl;
            outfile << "Semester Enrolled: " << physics_students[i] ->getSemsesterEnrolled() << std::endl;
            outfile << "Graduation Year: " << physics_students[i] ->getGradYear() << std::endl;
            outfile << "Graduation Semester: " << physics_students[i] ->getGradSemester() << std::endl;
            outfile << "Emphasis: " << physics_students[i] ->get_concentration() << std::endl;
            if(physics_students[i] -> getGradStudent()){
                outfile << physics_students[i] ->getName() << " is a grad student" << std::endl;
            }else{
                outfile << physics_students[i] ->getName() << " is not a grad student" << std::endl;
            }
            outfile << std::endl;
        }
    }else{
        std::cerr << "Unable to open file. Try again." << std::endl;
    }

    //delete any allocated memory
    for(int i = 0; i < art_students.size(); i++){
        delete art_students[i];
    }
    art_students.clear();

    for(int i = 0; i < physics_students.size(); i++){
        delete physics_students[i];
    }
    physics_students.clear();

    return 0;
}