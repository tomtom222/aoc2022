#include "Input.h"
#include "StaticFunctions.h"
#include "Types.h"
#include <iostream>
#include <sstream>

int main()
{
	std::cout << "Hello Advent of Code 2021!" << std::endl;
	std::vector<int> answer1 = Functions::maxCalories(day1);
	std::cout << "Day 01_1: " << answer1[0] << std::endl; // 70374
	std::cout << "Day 01_2: " << (answer1[0]+answer1[1]+answer1[2]) << std::endl; // 204610
}