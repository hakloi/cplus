#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <array>

class Student {
public:
    static const int NUM_GRADES = 5; 
    static const int DEFAULT_GRADE = 3;

    Student(const std::string& firstName, const std::string& lastName);
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }

    double getAverageGrade() const;

private:
    std::string firstName;
    std::string lastName;
    std::array<int, NUM_GRADES> grades;
};

#endif 
