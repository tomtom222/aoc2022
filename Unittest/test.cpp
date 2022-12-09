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

TEST(Day8, Trees)
{
	Trees trees = {
		{3, 0, 3, 7, 3},
		{2, 5, 5, 1, 2},
		{6, 5, 3, 3, 2},
		{3, 3, 5, 4, 9},
		{3, 5, 3, 9, 0},
	};

	ASSERT_EQ(Functions::day8_1(trees), 21);
	ASSERT_EQ(Functions::day8_2(trees), 8);
}

TEST(Day9, Ropes)
{
	static const std::string day9 =
		R"(R 4
U 4
L 3
D 1
R 4
D 1
L 5
R 2)";

	ASSERT_EQ(Functions::day9_1(day9), 13);
	ASSERT_EQ(Functions::day9_2(day9,10), 1);


		static const std::string day9_2 =
		R"(R 5
U 8
L 8
D 3
R 17
D 10
L 25
U 20)";
	ASSERT_EQ(Functions::day9_2(day9_2, 10), 36);
}