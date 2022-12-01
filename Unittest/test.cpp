#include "pch.h"
#include "StaticFunctions.h"

TEST(TestCaseName, TestName) {
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