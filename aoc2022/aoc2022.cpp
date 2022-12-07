#include "Input.h"
#include "StaticFunctions.h"
#include "Types.h"
#include <iostream>
#include <sstream>

int main()
{
	std::cout << "Hello Advent of Code 2021!" << std::endl;
	std::vector<int> answer1 = Functions::maxCalories(day1);
	std::cout << "Day 01_1: " << answer1[0] << std::endl;							  // 70374
	std::cout << "Day 01_2: " << (answer1[0] + answer1[1] + answer1[2]) << std::endl; // 204610
	std::cout << "Day 02_1: " << Functions::score(day2) << std::endl;				  // 11906
	std::cout << "Day 02_1: " << Functions::score_2(day2) << std::endl;				  // 11186
	std::cout << "Day 07_1: " << Functions::day7_1(day7) << std::endl;				  // 1391690
	std::cout << "Day 07_1: " << Functions::day7_2(day7) << std::endl;				  // 5469168
}