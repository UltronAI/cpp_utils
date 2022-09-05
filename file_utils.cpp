#include "file_utils.h"

#include <string>

std::vector<std::string> FUtils::readlines(const std::string file_path) {
	std::ifstream infile;
	infile.open(file_path, std::ios::in);
	if (!infile.is_open()) {
		std::cout << "Cannot open file:" << file_path << std::endl;
		throw std::exception();
	}

	std::string string_buffer;
	std::vector<std::string> lines_buffer;
	std::cout << "Read lines from file:" << file_path << std::endl;
	while (getline(infile, string_buffer)) {
		lines_buffer.push_back(string_buffer);
	}

	infile.close();
	return lines_buffer;
}