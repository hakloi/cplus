// src/main.cpp
#include "student.hpp"
#include <iostream>

int main() {
    Student student("Violett", "Patrusheva");

    student.addGrade(5);
    student.addGrade(4);
    student.addGrade(5);
    student.addGrade(5);
    student.addGrade(4);

    student.displayInfo();

    return 0;
}
