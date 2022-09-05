#pragma once

#include <vector>

namespace cpp_utils {
namespace vector_utils {

template <typename T>
std::vector<T> slice(std::vector<T> const& vec, int start, int end) {
	auto first = vec.cbegin() + start;
	auto last = vec.cbegin() + end;

	std::vector<T> sliced_vec(first, last);
	return sliced_vec;
}

}
}

namespace VUtils = cpp_utils::vector_utils;