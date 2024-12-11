#include "../include/Student.h"
#include <vector>
#include <string>

class StudentRepository{
    public:
        // virtual destructor
        virtual ~StudentRepository() = default;

        virtual void add(const Student &student) = 0;
        virtual void remove(int id) = 0;
        virtual Student get(int id) const = 0;  
        virtual void update(const Student &student) = 0;
        virtual std::vector<Student> getAll() const = 0;
};