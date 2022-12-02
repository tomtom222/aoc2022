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

const int Functions::score(const std::string& input)
{
	auto ss = std::stringstream{input};
	int count = 0;
	for (std::string line; std::getline(ss, line, '\n');)
	{
		if (!line.empty())
		{
			char p1 = line.front();
			char p2 = line.back();

			switch (p1)
			{
			case 'A':
				switch (p2)
				{
				case 'X':
					count += 4;
					break;
				case 'Y':
					count += 8;
					break;
				case 'Z':
					count += 3;
					break;
				}
				break;

			case 'B':
				switch (p2)
				{
				case 'X':
					count += 1;
					break;
				case 'Y':
					count += 5;
					break;
				case 'Z':
					count += 9;
					break;
				}
				break;

			case 'C':
				switch (p2)
				{
				case 'X':
					count += 7;
					break;
				case 'Y':
					count += 2;
					break;
				case 'Z':
					count += 6;
					break;
				}
				break;

			}
		}

	}
	return count;

}

const int Functions::score_2(const std::string& input)
{
	auto ss = std::stringstream{input};
	int count = 0;
	for (std::string line; std::getline(ss, line, '\n');)
	{
		if (!line.empty())
		{
			char p1 = line.front();
			char p2 = line.back();

			switch (p1)
			{
			case 'A':
				switch (p2)
				{
				case 'X':
					count += 3;
					break;
				case 'Y':
					count += 4;
					break;
				case 'Z':
					count += 8;
					break;
				}
				break;

			case 'B':
				switch (p2)
				{
				case 'X':
					count += 1;
					break;
				case 'Y':
					count += 5;
					break;
				case 'Z':
					count += 9;
					break;
				}
				break;

			case 'C':
				switch (p2)
				{
				case 'X':
					count += 2;
					break;
				case 'Y':
					count += 6;
					break;
				case 'Z':
					count += 7;
					break;
				}
				break;
			}
		}
	}
	return count;
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
