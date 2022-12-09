#pragma once
#include <tuple>
#include <vector>
#include <map>
#include <string>

struct Coords
{
	int x=0;
	int y=0;
	unsigned int counter=0;
};

typedef std::vector<std::vector<unsigned int>> Trees;

struct File
{
	unsigned int size;
	std::string name;
};

struct Dir
{
	std::vector<Dir*> dirs;
	std::vector<File*> files;
	Dir* previousDir = nullptr;
	unsigned int filesizes = 0;
	unsigned int size = 0;
	std::string name;

	Dir* findDir(std::string& dirname)
	{
		for (auto& d : dirs)
		{
			if (d->name == dirname)
			{
				return d;
			}
		}
		addDir(dirname);
		return findDir(dirname);
	}

	void addDir(std::string& dirname)
	{
		Dir* d = new Dir;
		d->name = dirname;
		d->previousDir = this;
		dirs.push_back(d);
	}

	void addFile(std::string& filename, unsigned int size)
	{
		File* f = new File{size, filename};
		files.push_back(f);
		filesizes = 0;
		for (auto& f : files)
		{
			filesizes += f->size;
		}
	}
};
