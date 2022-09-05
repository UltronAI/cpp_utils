#include "string_utils.h"

std::vector<std::string> SUtils::split(const std::string original_str, 
                                       const std::string delimiter) {
	std::vector<std::string> split_result;
    std::string str{ original_str };
    size_t pos = 0;
    // int count = 0;
    std::string token;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        // std::cout << "find sub_str " << count++ << ": " << token << std::endl;
        str.erase(0, pos + delimiter.length());
        split_result.push_back(token);
        if ((pos = str.find(delimiter)) == std::string::npos) {
            split_result.push_back(str);
            // std::cout << "find sub_str " << count++ << ": " << str << std::endl;
        }
    }
    return split_result;
}

std::string SUtils::lstrip(const std::string original_str, 
                           const std::string trim) {
    // By default, remove WHITESPACE from left side of the string
    std::string str{ original_str };
    size_t start = str.find_first_not_of(trim);
    return (start == std::string::npos) ? "" : str.substr(start);
}

std::string SUtils::rstrip(const std::string original_str, 
                           const std::string trim) {
    // By default, remove WHITESPACE from right side of the string
    std::string str{ original_str };
    size_t end = str.find_last_not_of(trim);
    return (end == std::string::npos) ? "" : str.substr(0, end + 1);
}

std::string SUtils::strip(const std::string original_str, 
                          const std::string trim) {
    // By default, remove WHITESPACE from both left and right sides of the string
    return rstrip(lstrip(original_str, trim), trim);
}

std::vector<std::string> SUtils::split_and_strip(const std::string original_str, 
                                                 const std::string delimiter, 
                                                 const std::string trim) {
    std::vector<std::string> result = split(original_str, delimiter);
    for (std::string& str : result) {
        str = strip(str, trim);
    }
    return result;
}

void SUtils::print_string_vector(const std::vector<std::string> str_vector) {
    for (auto str : str_vector) {
        std::cout << str << std::endl;
    }
    return;
}