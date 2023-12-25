#pragma once
#include <iostream>
#include <stdio.h>
#include <io.h>
#include <direct.h>
#include <fstream>

using namespace std;

class FileManager
{
public:

	FileManager(const char* filename)
	{
		if (fullpath) {
			strcpy_s(fullpath, 200, filename);
		}
	}

	FileManager() {}

	virtual ~FileManager() = 0 {}

	char* GetName() { return fullpath; }

	void SetName(char* filename) { strcpy_s(fullpath, 200, filename); }

	virtual void Open() {}

	virtual void Create() {}

	virtual void Remove() {}

	virtual void Rename() {}


	virtual void Move() {}

	virtual void Copy() {}

	virtual void Info() {}

	virtual void Search() {}

private:
	char fullpath[200];

};


