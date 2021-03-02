template<typename T>
auto algo::bubble_sort(const std::vector<T>& in) -> std::vector<T>
{
	std::vector<T> out = in;
	for (std::uint64_t i = 0; i < out.size(); ++i)
		for (std::uint64_t j = 0; j < out.size() - 1; ++j)
			if (out[j] > out[j + 1]) std::swap(out[j], out[j + 1]);

	return out;
}