#include <iostream>
#include "student.hpp"
#include "course_program.hpp"

int main() {
    Student student("Ava", "Lovelace");
    std::cout << "Student: " << student.getFirstName() << " " << student.getLastName() << std::endl;
    std::cout << "Average grade: " << student.getAverageGrade() << std::endl;

    CourseProgram course("Programming with data");
    course.addTopic("Introduction");
    course.addTopic("Strings");

    std::cout << "Course topics:" << std::endl;
    for (const auto& topic : course.getTopics()) {
        std::cout << "- " << topic << std::endl;
    }

    return 0;
}
