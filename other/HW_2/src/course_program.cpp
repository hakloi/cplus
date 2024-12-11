#include "course_program.hpp"

CourseProgram::CourseProgram(const std::string& name) : name(name) {}

void CourseProgram::addTopic(const std::string& topic) {
    topics.push_back(topic);
}

const std::vector<std::string>& CourseProgram::getTopics() const {
    return topics;
}

