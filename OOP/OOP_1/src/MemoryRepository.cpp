#include "../include/MemoryRepository.h"
#include <algorithm>

// ADD
void MemoryRepository::add(const Student &student) 
{
    students.push_back(student);
}

// REMOVE
void MemoryRepository::remove(int id) 
{
    /** происходит поиск и логическое удаление студента */
    auto it = std::remove_if(students.begin(), students.end(),
                             [id](const Student &student) { return student.getId() == id; });
    /** происходит физическое удаление студента */
    if (it != students.end())
    {
        students.erase(it, students.end());
    }
    else
    {
        throw std::runtime_error("Student with ID " + std::to_string(id) + " not found.");
    }
}

// GET
Student MemoryRepository::get(int id) const 
{
    auto it = std::find_if(students.begin(), students.end(),
                           [id](const Student &student) { return student.getId() == id; });

    if (it != students.end())
    {
        return *it;
    }
    else
    {
        throw std::runtime_error("Student with ID " + std::to_string(id) + " not found.");
    }
}

// UPDATE
void MemoryRepository::update(const Student &student)
{
    for (auto &s : students)
    {
        if (s.getId() == student.getId())
        {
            s = student;
        }
    }
    throw std::runtime_error("Student with ID " + std::to_string(student.getId()) + " not found.");
}

// GET ALL
std::vector<Student> MemoryRepository::getAll() const
{
    return students;
}