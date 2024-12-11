#pragma once
#include <string>

class Student
{
    private:
        int id;
        std::string name;
        int age;
        std::string group;

    public:
        /** use member initialisation list ():*/
        Student(int id,
                std::string &name,
                int age,
                std::string &group) : id(id), name(name), age(age), group(group){};

        //get
        int getId() const { return id; }
        const std::string &getName() const { return name; }
        int getAge() const { return age; }
        const std::string &getGroup() const { return group; }

        //set
        void setName(const std::string &newName) { name = newName; }
        void setAge(int newAge) { age = newAge; }
        void setGroup(const std::string &newGroup) { group = newGroup; }
};