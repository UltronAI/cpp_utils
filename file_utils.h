#pragma once

#include <iostream>
#include <fstream>
#include <vector>

namespace cpp_utils {
namespace file_utils {

std::vector<std::string> readlines(const std::string file_path);

void writelines(std::ofstream& file_stream, std::string new_line);
void writelines(std::ofstream& file_stream, std::vector<std::string> new_lines);
void writelines(std::string file_path, std::string new_line);
void writelines(std::string file_path, std::vector<std::string> new_lines);

}
}

namespace FUtils = cpp_utils::file_utils;