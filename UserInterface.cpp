#include "UserInterface.h"



void UserInterface::SetConsoleColour(WORD* Attributes, DWORD Colour)
{
	CONSOLE_SCREEN_BUFFER_INFO Info;
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(hStdout, &Info);
	*Attributes = Info.wAttributes;
	SetConsoleTextAttribute(hStdout, Colour);
}

void UserInterface::ResetConsoleColour(WORD Attributes)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Attributes);
}

void UserInterface::яРЮПРСЕЛ{

	SetConsoleColour(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_GREEN);
	cout << "\n\n\t\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
	cout << "\n\t\t\t" << char(186) << " MY COMMANDER " << char(186);
	cout << "\n\t\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl << endl;
	ResetConsoleColour(Attributes);
	setlocale(LC_ALL, "Rus");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

		char choice;
		char choice2;
		char open[200];

		string str;
		wstring temp;
		LPCWSTR wideString;

		do
	{
			cout << "\n\t\t\t0 -> БШУНД\n"
				<< "\t\t\t1 -> нрйпшрэ йюрюкнц\n"
				<< "\t\t\t2 -> янгдюрэ тюик\n"
				<< "\t\t\t3 -> янгдюрэ оюойс\n"
				<< "\t\t\t4 -> ОНХЯЙ\n";

			SetConsoleColour(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED);
			cout << "\n\t\t\tбшаепхре йнлюмдс: ";
			ResetConsoleColour(Attributes);
				cin >> choice;
			switch (choice)
			{
			case '1':
				system("CLS");
				newfile.Open();
				if (newfile.check > 0) { Sleep(1000); system("CLS"); newfile.check = 0; continue; }
				str = string(newfile.GetName());
				temp = wstring(str.begin(), str.end());
				wideString = temp.c_str();
				Sleep(1000);
				system("CLS");
				do
				{
					cout << "\n\t\t\t0 -> бепмсрэяъ б цкюбмне лемч\n"
						<< "\t\t\t1 -> ОЕПЕХЛЕМНБЮРЭ\n"
						<< "\t\t\t2 -> СДЮКХРЭ\n"
						<< "\t\t\t3 -> ОЕПЕЛЕЫЮРЭ\n"
						<< "\t\t\t4 -> онксвхрэ хмтнплюжхч\n"
						<< "\t\t\t5 -> ЙНОХПНБЮРЭ\n";

					cout << "\n\t\t\tбшаепхре йнлюмдс: ";
					cin >> choice2;
					switch (choice2)
					{
					case '1':
						system("CLS");
						newfile.Rename();
						choice2 = '0';
						break;
					case '2':
						system("CLS");

						if ((FILE_ATTRIBUTE_DIRECTORY & GetFileAttributes(wideString)) == FILE_ATTRIBUTE_DIRECTORY) {
							newfolder.SetName(newfile.GetName());
							newfolder.Remove();

						}
						else {
							newfile.Remove();
						}
						choice2 = '0';
						break;

					case '3':
						system("CLS");
						newfile.Move();
						choice2 = '0';
						break;

					case '4':
						system("CLS");
						newfile.Info();
						break;

					case '5':
						system("CLS");
						if ((FILE_ATTRIBUTE_DIRECTORY & GetFileAttributes(wideString)) == FILE_ATTRIBUTE_DIRECTORY) {
							newfolder.SetFolder(newfile.GetFile());
							newfolder.SetName(newfile.GetName());
							newfolder.Copy();
						}
						else newfile.Copy();
						break;
						choice2 = '0';
					case '0':
						system("CLS");
						break;
					default:
						system("CLS");
						cout << "\t\t\tмеопюбхкэмюъ йнлюмдю";
						Sleep(1000);
						system("CLS");
						break;
					}

				} while (choice2 != '0');
				break;

			case '2':
				system("CLS");
				newfile.Create();
				break;
			case '3':
				system("CLS");
				newfolder.Create();
				break;

			case '4':
				system("CLS");
				newfile.Search();
				break;

			case '0':
				system("CLS");
				cout << endl;
				cout << "\t\t\t\tгюйпшрхе опхкнфемхъ\n";
				cout << "\t\t\t\t       .";
				Sleep(500);
				cout << ".";
				Sleep(500);
				cout << ".";
				Sleep(500);
				cout << ".\n";
				break;

			default:
				system("CLS");
				cout << "\t\t\tмеопюбхкэмюъ йнлюмдю";
				Sleep(1000);
				system("CLS");
				break;

					}

					} while (choice != '0');
}

