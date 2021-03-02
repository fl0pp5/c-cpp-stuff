#ifndef BUBBLE_SORT_HPP
#define BUBBLE_SORT_HPP

#include <vector>
#include <cstdint>

namespace algo 
{
	template<typename T>
	auto bubble_sort(const std::vector<T>& in) -> std::vector<T>;
}

#include "bubble_sort.tpp"

#endif