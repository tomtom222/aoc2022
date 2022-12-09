#include "StaticFunctions.h"
#include <algorithm>
#include <iostream>
#include <sstream>

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

void searchDir(Dir* dir, unsigned int& count, unsigned int s, unsigned int& ccount)
{
	for (auto* d : dir->dirs)
	{
		searchDir(d, count, s, ccount);
	}
	if (dir->size <= s)
	{
		//std::cout << dir->name << std::endl;
		count += dir->size;
	}
}

const unsigned int Functions::day7_1(const std::string& input)
{
	Dir result = Utils::inputDay7(input);
	unsigned int count = 0;
	unsigned int ccount = 0;
	unsigned int size = 100000;

	searchDir(&result, count, size, ccount);
	return count;
}

void searchClosestDir(Dir* dir, unsigned int spaceNeeded, std::vector<unsigned int>& dirs)
{
	for (auto* d : dir->dirs)
	{
		searchClosestDir(d, spaceNeeded, dirs);
	}
	if (dir->size >= spaceNeeded)
	{
		dirs.push_back(dir->size);
	}
}

const unsigned int Functions::day7_2(const std::string& input)
{
	Dir result = Utils::inputDay7(input);

	unsigned int spaceNeeded = 30000000 - (70000000 - result.size);
	std::vector<unsigned int> dirs;
	searchClosestDir(&result, spaceNeeded, dirs);
	std::sort(std::begin(dirs), std::end(dirs), [](unsigned int left, unsigned int right)
			  { return right > left; });

	return dirs[0];
}

const unsigned int Functions::day8_1(Trees& input)
{
	unsigned int count = 0;

	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == 0 || i == input.size() + 1)
		{
			count += (unsigned int)input[i].size();
			continue;
		}
		for (size_t j = 0; j < input[i].size(); j++)
		{
			if (j == 0 || j == input[i].size() - 1)
			{
				count += 1;
				continue;
			}

			bool visible = true;
			for (int k = i - 1; k >= 0; k--) // up
			{
				if (input[i][j] <= input[k][j])
				{
					visible = false;
					break;
				}
			}
			if (visible)
			{
				count += 1;
				continue;
			}
			visible = true;
			for (int x = j - 1; x >= 0; x--) // left
			{
				if (input[i][j] <= input[i][x])
				{
					visible = false;
					break;
				}
			}
			if (visible)
			{
				count += 1;
				continue;
			}
			visible = true;
			for (size_t y = i + 1; y < input.size(); y++) // down
			{
				if (input[i][j] <= input[y][j])
				{
					visible = false;
					break;
				}
			}
			if (visible)
			{
				count += 1;
				continue;
			}
			visible = true;
			for (size_t z = j + 1; z < input[i].size(); z++) // right
			{
				if (input[i][j] <= input[i][z])
				{
					visible = false;
					break;
				}
			}
			if (visible)
			{
				count += 1;
				continue;
			}
		}
	}
	return count;
}

const unsigned int Functions::day8_2(Trees& input)
{
	unsigned int count = 0;
	unsigned int score = 0;

	for (size_t i = 0; i < input.size(); i++)
	{
		if (i == 0 || i == input.size() + 1)
		{
			count += (unsigned int)input[i].size();
			continue;
		}
		for (size_t j = 0; j < input[i].size(); j++)
		{
			if (j == 0 || j == input[i].size() - 1)
			{
				count += 1;
				continue;
			}

			unsigned int up = 0;
			for (int k = i - 1; k >= 0; k--) // up
			{
				up++;
				if (input[i][j] <= input[k][j])
				{
					break;
				}
			}
			unsigned int left = 0;
			for (int x = j - 1; x >= 0; x--) // left
			{
				left++;
				if (input[i][j] <= input[i][x])
				{
					break;
				}
			}
			unsigned int down = 0;
			for (size_t y = i + 1; y < input.size(); y++) // down
			{
				down++;
				if (input[i][j] <= input[y][j])
				{
					break;
				}
			}
			unsigned int right = 0;
			for (size_t z = j + 1; z < input[i].size(); z++) // right
			{
				right++;
				if (input[i][j] <= input[i][z])
				{
					break;
				}
			}
			unsigned int treescore = left * right * up * down;
			if (treescore > score)
			{
				score = treescore;
			}
		}
	}
	return score;
}

bool trail(int& hx, int& hy, int& tx, int& ty, char dir)
{
	switch (dir)
	{
	case 'U':
		hy++;
		break;
	case 'D':
		hy--;
		break;
	case 'L':
		hx--;
		break;
	case 'R':
		hx++;
		break;
	default:
		break;
	}

	if (hx != tx && hy != ty && (abs(hy - ty) > 1 || abs(hx - tx) > 1))
	{
		// we need to move diagonally in the right direction
		if (hx > tx && hy > ty)
		{
			tx++;
			ty++;
		}
		else if (hx > tx && hy < ty)
		{
			tx++;
			ty--;
		}
		else if (hx < tx && hy < ty)
		{
			tx--;
			ty--;
		}
		else
		{
			tx--;
			ty++;
		}
		return true;
	}

	if (hx == tx && abs(hy - ty) > 1) // we need to move in the y direction
	{
		if (hy > ty)
		{
			ty++;
		}
		else
		{
			ty--;
		}
		return true;
	}
	if (hy == ty && abs(hx - tx) > 1) // we need to move in the x direction
	{
		if (hx > tx)
		{
			tx++;
		}
		else
		{
			tx--;
		}
		return true;
	}
	return false;
}

const unsigned int Functions::day9_1(const std::string& input)
{
	unsigned int result = 0;
	std::vector<Coords> visitedPlaces;
	visitedPlaces.push_back({0, 0, 1});

	auto ss = std::stringstream{input};
	int headx = 0;
	int heady = 0;
	int tailx = 0;
	int taily = 0;
	for (std::string line; std::getline(ss, line, '\n');)
	{
		if (!line.empty())
		{
			unsigned int stepsize = std::stoi(line.substr(line.find(" ") + 1));
			for (size_t i = 0; i < stepsize; i++)
			{
				if (trail(headx, heady, tailx, taily, line[0]))
				{
					// loop through vector and check if we need to add new place or up the count
					bool exists = false;
					for (auto& c : visitedPlaces)
					{
						if (c.x == tailx && c.y == taily)
						{
							c.counter++;
							exists = true;
						}
					}
					if (!exists)
					{
						visitedPlaces.push_back({tailx, taily, 1});
					}
				}
			}
		}
	}
	return visitedPlaces.size();
}

const unsigned int Functions::day9_2(const std::string& input, unsigned int knotcount)
{
	unsigned int result = 0;
	std::vector<Coords> visitedPlaces;
	std::vector<Coords> knots;
	visitedPlaces.push_back({0, 0, 1});
	for (size_t i = 0; i < knotcount; i++)
	{
		knots.push_back({0, 0, 0});
	}

	auto ss = std::stringstream{input};
	for (std::string line; std::getline(ss, line, '\n');)
	{
		if (!line.empty())
		{
			unsigned int stepsize = std::stoi(line.substr(line.find(" ") + 1));
			for (size_t i = 0; i < stepsize; i++)
			{
				for (size_t k = 0; k < knots.size(); k++)
				{
					if (k==0)
					{
						int x = 0;
						int y = 0;
						trail(knots[k].x, knots[k].y, x, y, line[0]);
					}
					else if (k != knots.size() - 1)
					{
						trail(knots[k - 1].x, knots[k - 1].y, knots[k].x, knots[k].y, 'k');
					}
					else
					{
						if (trail(knots[k - 1].x, knots[k - 1].y, knots[k].x, knots[k].y, 'k'))
						{
							// loop through vector and check if we need to add new place or up the count
							bool exists = false;
							for (auto& c : visitedPlaces)
							{
								if (c.x == knots[k].x && c.y == knots[k].y)
								{
									c.counter++;
									exists = true;
								}
							}
							if (!exists)
							{
								visitedPlaces.push_back({knots[k].x, knots[k].y, 1});
							}
					}
					
					}
				}
			}
		}
	}
	return visitedPlaces.size();
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

void calculatesize(Dir* dir)
{
	dir->size += dir->filesizes;
	for (auto* d : dir->dirs)
	{
		calculatesize(d);
		dir->size += d->size;
	}
}

Dir Utils::inputDay7(const std::string& input)
{
	Dir root;
	root.name = "/";
	Dir* currentdir = &root;

	auto ss = std::stringstream{input};
	for (std::string line; std::getline(ss, line, '\n');)
	{
		if (!line.empty())
		{
			if (line.substr(0, 4) == "$ cd")
			{
				std::string name = line.substr(line.rfind(" ") + 1);
				if (name == "/")
				{
					continue;
				}
				else if (name == "..")
				{
					currentdir = currentdir->previousDir;
					continue;
				}
				else
				{
					currentdir = currentdir->findDir(name);
					continue;
				}
			}
			else if (line == "$ ls")
			{
				continue;
			}

			if (line.substr(0, 3) == "dir")
			{
				// add dir
				std::string name = line.substr(line.find(" ") + 1);
				currentdir->addDir(name);
			}
			else
			{
				// add file
				unsigned int size = std::stoi(line.substr(0, line.find(" ") + 1));
				std::string name = line.substr(line.find(" ") + 1);
				currentdir->addFile(name, size);
			}
		}
	}

	calculatesize(&root);

	return root;
}
