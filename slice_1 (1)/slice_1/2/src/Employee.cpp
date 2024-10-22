#include "Employee.hpp"

// Конструктор
Employee::Employee(const std::string& name, int age, const std::string& profession, double meanPoints)
    : name(name), age(age), profession(profession), meanPoints(meanPoints) {}

// Геттеры
std::string Employee::getName() const {
    return name;
}

int Employee::getAge() const {
    return age;
}

std::string Employee::getProfession() const {
    return profession;
}

double Employee::getMeanPoints() const {
    return meanPoints;
}

