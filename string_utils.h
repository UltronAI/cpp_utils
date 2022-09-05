// #pragma once

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <iostream>
#include <string>
#include <vector>

namespace cpp_utils {
namespace string_utils {

const std::string WHITESPACE = " \n\r\t\f\v";

std::vector<std::string> split_string(const std::string original_str, const std::string delimiter);
std::string l_strip_string(const std::string original_str, const std::string flag);
std::string r_strip_string(const std::string original_str, const std::string flag = WHITESPACE);
std::string strip_string(const std::string original_str, const std::string flag = WHITESPACE);

void print_string_vector(const std::vector<std::string> str_vector);

}
}

#endif
