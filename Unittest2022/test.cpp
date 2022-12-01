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

10000)";

	ASSERT_EQ(Functions::maxCalories(day1), 24000);






}