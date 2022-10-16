#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char switch_on;
	do
	{
		system("cls");
		cout << "#>----------<MENU>----------<#" << endl;
		cout << "|         1 - Case 1         |" << endl;
		cout << "|         2 - Case 2         |" << endl;
		cout << "|         3 - Case 3         |" << endl;
		cout << "|         4 - Case 4         |" << endl;
		cout << "|         5 - Case 5         |" << endl;
		cout << "#>--------------------------<#" << endl;
		cout << "|         0 - Exit           |" << endl;
		cout << "#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			do
			{

				cout << "#>--------------------------<MENU>--------------------------<#" << endl;
				cout << "|         1 - Горизонтальна л1н1я виводиться швидко          |" << endl;
				cout << "|         2 - Горизонтальна л1н1я виводиться нормально       |" << endl;
				cout << "|         3 - Горизонтальна л1н1я виводиться повільно        |" << endl;
				cout << "|         4 - Вертикальна л1н1я виводиться швидко            |" << endl;
				cout << "|         5 - Вертикальна л1н1я виводиться нормально         |" << endl;
				cout << "|         6 - Вертикальна л1н1я виводиться повільно          |" << endl;
				cout << "#>----------------------------------------------------------<#" << endl;
				cout << "|         0 - Exit                                           |" << endl;
				cout << "#>----------------------------------------------------------<#" << endl;
				switch_on = _getch();
				system("cls");
				switch (switch_on)
				{
					int s;
					int sign;
					uint32_t millisecs;
				case '1':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << "   " << sign;
						millisecs = 30;
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				case '2':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << "   " << sign;
						millisecs = 500;
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				}
				system("pause");
			} while (true);
		}break;
		}
	} while (true);
	return 0;
}