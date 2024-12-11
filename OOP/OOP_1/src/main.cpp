#include "../include/MemoryRepository.h"
#include "../include/Student.h"
#include <iostream>
#include <string>
#include <vector>

int main()
{
    int choice;
    std::cout << "Choose repository type:" << std::endl;
    std::cout << "1. Memory" << std::endl;
    std::cout << "2. Json" << std::endl;
    std::cin >> choice;

    StudentRepository *repository = nullptr;
    if (choice == 1)
    {
        repository = new MemoryRepository();
    }
    else if (choice == 2)
    {
        std::cout << "Json Repository is not available now." << std::endl;
        // repository = new JsonRepository("students.json");
        std::cout << "You will be redirected to Memory Repository..." << std::endl;
        repository = new MemoryRepository();
    }
    else
    {
        std::cout << "Invalid choice." << std::endl;
        return 1;
    }

    int menuChoice;
    do
    {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Add student" << std::endl;
        std::cout << "2. Remove student" << std::endl;
        std::cout << "3. Get student" << std::endl;
        std::cout << "4. Update student" << std::endl;
        std::cout << "5. Get all students" << std::endl;
        std::cout << "0. Exit" << std::endl;
        std::cin >> menuChoice;

        try
        {
            switch (menuChoice)
            {
            case 1:
            {
                int id, age;
                std::string name, group;
                std::cout << "Enter student ID: ";
                std::cin >> id;
                std::cin.ignore(); // Consume newline
                std::cout << "Enter student name: ";
                std::getline(std::cin, name);
                std::cout << "Enter student age: ";
                std::cin >> age;
                std::cin.ignore();
                std::cout << "Enter student group: ";
                std::getline(std::cin, group);
                repository->add(Student(id, name, age, group));
                break;
            }
            case 2:
            {
                int id;
                std::cout << "Enter student ID to remove: ";
                std::cin >> id;
                repository->remove(id);
                break;
            }
            case 3:
            {
                int id;
                std::cout << "Enter student ID to get: ";
                std::cin >> id;
                Student student = repository->get(id);
                std::cout << "Student: " << student.getName() << ", Age: " << student.getAge() << ", Group: " << student.getGroup() << std::endl;
                break;
            }
            case 4:
            {
                int id, age;
                std::string name, group;
                std::cout << "Enter student ID to update: ";
                std::cin >> id;
                std::cin.ignore();
                std::cout << "Enter new name: ";
                std::getline(std::cin, name);
                std::cout << "Enter new age: ";
                std::cin >> age;
                std::cout << "Enter new group: ";
                std::cin.ignore();
                std::getline(std::cin, group);
                repository->update(Student(id, name, age, group));
                break;
            }
            case 5:
            {
                std::vector<Student> students = repository->getAll();
                for (const auto &student : students)
                {
                    std::cout << "ID: " << student.getId() << ", Name: " << student.getName() << ", Age: " << student.getAge() << ", Group: " << student.getGroup() << std::endl;
                }
                break;
            }
            case 0:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice." << std::endl;
            }
        }
        catch (const std::runtime_error &error)
        {
            std::cerr << "Error: " << error.what() << std::endl;
        }
    } while (menuChoice != 0);
}
