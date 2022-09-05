#include "string_utils.h"

std::vector<std::string> cpp_utils::string_utils::split_string(const std::string original_str, 
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

std::string cpp_utils::string_utils::l_strip_string(const std::string original_str, 
                                                    const std::string flag = cpp_utils::string_utils::WHITESPACE) {
    // By default, remove WHITESPACE from left side of the string
    std::string str{ original_str };
    size_t start = str.find_first_not_of(flag);
    return (start == std::string::npos) ? "" : str.substr(start);
}

std::string cpp_utils::string_utils::r_strip_string(const std::string original_str, 
                                                    const std::string flag = cpp_utils::string_utils::WHITESPACE) {
    // By default, remove WHITESPACE from right side of the string
    std::string str{ original_str };
    size_t end = str.find_last_not_of(flag);
    return (end == std::string::npos) ? "" : str.substr(0, end + 1);
}

std::string cpp_utils::string_utils::strip_string(const std::string original_str, 
                                                  const std::string flag = cpp_utils::string_utils::WHITESPACE) {
    // By default, remove WHITESPACE from both left and right sides of the string
    return r_strip_string(l_strip_string(original_str, flag), flag);
}

void cpp_utils::string_utils::print_string_vector(const std::vector<std::string> str_vector) {
    for (auto str : str_vector) {
        std::cout << str << std::endl;
    }
    return;
}