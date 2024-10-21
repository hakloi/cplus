// include/student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
private:
    std::string first_name; 
    std::string last_name; 
    std::vector<int> grades; 

public:
    Student(const std::string& first_name, const std::string& last_name);

    void addGrade(int grade);

    double getAverageGrade() const;

    void displayInfo() const;
};

#endif 
