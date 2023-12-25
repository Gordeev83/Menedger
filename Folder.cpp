#include "Folder.h"

void Folder::Create() {
	char Name[50];
	char path[200];
	cout << "\t\t\tÂÂÅÄÈÒÅ ÌÅÑÒÎÏÎËÎÆÅÍÈÅ ÏÀÏÊÈ (Ñ \\\\ Â ÊÎÍÖÅ):";
	cin.ignore();
	cin.getline(path, 200);
	cout << "\t\t\tÂÂÅÄÈÒÅ ÈÌß ÏÀÏÊÈ:";
	cin.getline(Name, 50);
	strcat_s(path, Name);
	if (_mkdir(path) == -1)
		cout << "\t\t\tîøèáêà! ÍÅ ÓÄÀËÎÑÜ ÑÎÇÄÀÒÜ ÏÀÏÊÓ.\n";
	else
		cout << "\t\t\tÏÀÏÊÀ ÁÛËÀ ÓÑÏÅØÍÎ ÑÎÇÄÀÍÀ!" << endl;
}


void Folder::Remove() {
	char a[200] = "rmdir /s /q ";
	strcat_s(a, GetName());
	if (system(a))
		cout << "\t\t\tîøèáêà! ÍÅ ÓÄÀËÎÑÜ ÓÄÀËÈÒÜ ÏÀÏÊÓ.\n";
	else
		cout << "\t\t\tÏÀÏÊÀ ÓÑÏÅØÍÎ ÓÄÀËÅÍÀ.\n";
}

void Folder::Copy() {
	char newpath[200];
	char copyname[200];
	cout << "\t\t\tÂÂÅÄÈÒÅ ÏÓÒÜ (Ñ \\\\ Â ÊÎÍÖÅ): ";
	cin.ignore();
	cin.getline(newpath, 200);
	strcpy_s(copyname, foldername);
	strcat_s(newpath, copyname);
	_mkdir(newpath);
	string copy = "êîïèðîâàòü " + string(GetName()) + " " + string(newpath);
	system(copy.c_str());

}