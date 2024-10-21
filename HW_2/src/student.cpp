// src/student.cpp
#include "student.hpp"
#include <iostream>
#include <numeric>

Student::Student(const std::string& first_name, const std::string& last_name)
    : first_name(first_name), last_name(last_name) {}

void Student::addGrade(int grade) {
    grades.push_back(grade);
}

double Student::getAverageGrade() const {
    if (grades.empty()) return 0.0;

    double sum = std::accumulate(grades.begin(), grades.end(), 0);
    return sum / grades.size();
}

void Student::displayInfo() const {
    std::cout << "Student: " << first_name << " " << last_name << std::endl;
    std::cout << "Average Grade: " << getAverageGrade() << std::endl;
}
