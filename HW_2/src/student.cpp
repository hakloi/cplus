#include "student.hpp"

Student::Student(const std::string& firstName, const std::string& lastName)
    : firstName(firstName), lastName(lastName), grades{DEFAULT_GRADE, DEFAULT_GRADE, DEFAULT_GRADE, DEFAULT_GRADE, DEFAULT_GRADE} {}

double Student::getAverageGrade() const {
    double sum = 0;
    for (int grade : grades) {
        sum += grade;
    }
    return sum / NUM_GRADES;
}
