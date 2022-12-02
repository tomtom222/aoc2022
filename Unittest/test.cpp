#include "pch.h"
#include "StaticFunctions.h"

TEST(Day1, Calories) {
	static const std::string day1 =
		R"(1000
2000
3000

4000

5000
6000

7000
8000
9000

10000

)";
	std::vector<int> answer1 = Functions::maxCalories(day1);
	ASSERT_EQ(answer1[0], 24000);
	ASSERT_EQ((answer1[0] + answer1[1] + answer1[2]), 45000);
}

TEST(Day2, RockPaperScissors)
{
	static const std::string day2 =
		R"(A Y
B X
C Z)";
	ASSERT_EQ(Functions::score(day2), 15);
	ASSERT_EQ(Functions::score_2(day2), 12);
}