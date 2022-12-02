#pragma once
#include <vector>
#include <string>

class Functions
{
public:
	static const std::vector<int> maxCalories(const std::string& input);
	static const int score(const std::string& input);
	static const int score_2(const std::string& input);
};

class Utils
{
public:
	static std::vector<int> inputDay1(const std::string& input);
};