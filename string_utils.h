#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

namespace cpp_utils {
namespace string_utils {

const std::string WHITESPACE = " \n\r\t\f\v";

std::vector<std::string> split(const std::string original_str, const std::string delimiter = " ");
std::string lstrip(const std::string original_str, const std::string trim = WHITESPACE);
std::string rstrip(const std::string original_str, const std::string trim = WHITESPACE);
std::string strip(const std::string original_str, const std::string trim = WHITESPACE);

std::vector<std::string> split_and_strip(const std::string original_str, const std::string delimiter = " ", const std::string trim = WHITESPACE);

template<typename T>
std::string convert_to_string(T x) {
    std::stringstream instring;
    instring << x;
    return instring.str();
}

void print_string_vector(const std::vector<std::string> str_vector);

}
}

namespace SUtils = cpp_utils::string_utils;
