#pragma once
#include "FileManager.h"


class File : public FileManager
{
public:

	void SetFile(char* file) { strcpy_s(filename, file); }

	char* GetFile() { return filename; }

	File(const char* filename) : FileManager{ filename } {}

	File() : FileManager() {}

	virtual ~File() {};

	virtual void Open();

	virtual void Create();

	virtual void Remove();

	virtual void Rename();

	virtual void Move();

	virtual void Copy();

	virtual void Info();

	virtual void Search();

	int check = 0;

private:

	char path[200];
	char filename[200];
};


