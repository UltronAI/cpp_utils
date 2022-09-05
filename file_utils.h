#pragma once

#include <iostream>
#include <fstream>
#include <vector>

namespace cpp_utils {
namespace file_utils {

std::vector<std::string> readlines(const std::string file_path);

}
}

namespace FUtils = cpp_utils::file_utils;