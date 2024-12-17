#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
std::string CommonPrefixUtil(const std::string& s1, const std::string& s2) {
    size_t minLength = std::min(s1.size(), s2.size());
    size_t i = 0;

    while (i < minLength && s1[i] == s2[i]) {
        ++i;
    }

    return s1.substr(0, i); 
}

std::string CommonPrefix(const std::vector<std::string>& words) {
    if (words.empty()) {
        return ""; 
    }

    std::string prefix = words[0]; 

    for (size_t i = 1; i < words.size(); ++i) { 
        prefix = CommonPrefixUtil(prefix, words[i]);
        if (prefix.empty()) {
            break; 
        }
    }

    return prefix;
}
