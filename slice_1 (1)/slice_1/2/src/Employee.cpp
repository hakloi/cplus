#include "Employee.hpp"

Employee::Employee(const std::string& name, int age, const std::string& position, double salary)
    : name(name), age(age), position(position), salary(salary) {}
    
std::string Employee::getName() const {
    return name;
}

int Employee::getAge() const {
    return age;
}

std::string Employee::getPosition() const {
    return position;
}

double Employee::getSalary() const {
    return salary;
}
