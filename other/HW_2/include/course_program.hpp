#ifndef COURSE_PROGRAM_H
#define COURSE_PROGRAM_H

#include <string>
#include <vector>

class CourseProgram {
public:
    CourseProgram(const std::string& name);

    void addTopic(const std::string& topic);

    const std::vector<std::string>& getTopics() const;

private:
    std::string name;
    std::vector<std::string> topics;
};

#endif 
