#include "StaticFunctions.h"

#include <sstream>
#include <algorithm>

const std::vector<int> Functions::maxCalories(const std::string& input)
{
	std::vector<int> result = Utils::inputDay1(input);
	std::sort(std::begin(result), std::end(result), [](int left, int right)
			  { return right < left; });
	return result;
}

std::vector<int> Utils::inputDay1(const std::string& input)
{
	std::vector<int> output;
	
	auto ss = std::stringstream{input};
	int count = 0;

	for (std::string line; std::getline(ss, line, '\n');)
	{
		if (!line.empty())
		{
			count += std::strtol(line.c_str(), nullptr, 10);
		}
		else
		{
			output.push_back(count);
			count = 0;
		}
	}
	return output;
}
