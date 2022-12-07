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

TEST(Day7, Dirs)
{
	static const std::string day7 =
		R"($ cd /
$ ls
dir a
14848514 b.txt
8504156 c.dat
dir d
$ cd a
$ ls
dir e
29116 f
2557 g
62596 h.lst
$ cd e
$ ls
584 i
$ cd ..
$ cd ..
$ cd d
$ ls
4060174 j
8033020 d.log
5626152 d.ext
7214296 k)";

	Dir result = Utils::inputDay7(day7);
	ASSERT_EQ(result.size, 48381165);
	ASSERT_EQ(Functions::day7_1(day7), 95437);
	ASSERT_EQ(Functions::day7_2(day7), 24933642);
	//ASSERT_EQ(Functions::score_2(day2), 12);
}