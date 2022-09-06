#include "file_utils.h"

#include <string>
#include <algorithm>

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

void FUtils::writelines(std::ofstream& outfile, std::string new_line) {
	if (!outfile.is_open()) {
		throw std::exception("file is not open");
	}
	outfile << new_line << std::endl;
}

void FUtils::writelines(std::ofstream& outfile, std::vector<std::string> new_lines) {
	if (!outfile.is_open()) {
		throw std::exception("file is not open");
	}
	for (std::string line : new_lines) {
		writelines(outfile, line);
	}
}

void FUtils::writelines(std::string file_path, std::string new_line) {
	std::ofstream outfile;
	outfile.open(file_path, std::ios::app);
	if (!outfile.is_open()) {
		throw std::exception("file is not open");
	}
	writelines(outfile, new_line);
}

void FUtils::writelines(std::string file_path, std::vector<std::string> new_lines) {
	std::ofstream outfile;
	outfile.open(file_path, std::ios::app);
	if (!outfile.is_open()) {
		throw std::exception("file is not open");
	}
	for (std::string line : new_lines) {
		writelines(outfile, line);
	}
}
