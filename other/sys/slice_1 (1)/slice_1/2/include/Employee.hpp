#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee {
private:
    std::string name;       
    int age;                
    std::string profession; 
    double meanPoints;      

public:
    Employee(const std::string& name, int age, const std::string& profession, double meanPoints);

    std::string getName() const;
    int getAge() const;
    std::string getProfession() const;
    double getMeanPoints() const;
};

#endif 
