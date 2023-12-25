#include <iostream>
#include "UserInterface.h"



int main() {

	UserInterface ui;

	try {
		ui.Стартуем;
	}
	catch (...)
	{
		cout << "\nфатальная ошибка\n";
	}
}