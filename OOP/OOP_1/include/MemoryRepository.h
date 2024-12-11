#include "../include/StudentRepository.h"
#include <vector>
#include <iostream>
#include <stdexcept>
#include <algorithm>

class MemoryRepository : public StudentRepository
{
private:
    std::vector<Student> students;

public:
    void add(const Student &student) override;
    void remove(int id) override;
    Student get(int id) const override;
    void update(const Student &student) override;
    std::vector<Student> getAll() const override;
};

// #include "../include/StudentRepository.h"
// #include <vector>
// #include <iostream>
// #include <stdexcept>
// #include <algorithm>

// class MemoryRepository : public StudentRepository
// {
//     private:
//         std::vector<Student> students;

//     public:
//         // ADD
//         void add(const Student &student) override
//         {
//             students.push_back(student);
//         }

//         // REMOVE
//         void remove(int id) override{
//             /** происходит поиск и логическое удаление студента */
//             auto it = std::remove_if(students.begin(), students.end(),
//                                      [id](const Student &student) { return student.getId() == id; });
//             /** происходит физическое удаление студента */
//             if (it != students.end())
//             {
//                 students.erase(it, students.end());
//             } else {
//                 throw std::runtime_error("Student with ID " + std::to_string(id) + " not found.");
//             }
//         }

//         // GET
//         Student get(int id) const override
//         {
//             auto it = std::find_if(students.begin(), students.end(),
//                                    [id](const Student &student) { return student.getId() == id; });

//             if (it != students.end())
//             {
//                 return *it;
//             } else {
//                 throw std::runtime_error("Student with ID " + std::to_string(id) + " not found.");
//             }
//         }

//         // UPDATE
//         void update(const Student &student) override
//         {
//             for (auto &s : students)
//             {
//                 if (s.getId() == student.getId())
//                 {
//                     s = student;
//                 }
//             }
//             throw std::runtime_error("Student with ID " + std::to_string(student.getId()) + " not found.");
//         }

//         // GET ALL
//         std::vector<Student> getAll() const override
//         {
//             return students;
//         }
// };