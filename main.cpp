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
				cout << "|         1 - ������������� �1�1� ���������� ������          |" << endl;
				cout << "|         2 - ������������� �1�1� ���������� ���������       |" << endl;
				cout << "|         3 - ������������� �1�1� ���������� �������        |" << endl;
				cout << "|         4 - ����������� �1�1� ���������� ������            |" << endl;
				cout << "|         5 - ����������� �1�1� ���������� ���������         |" << endl;
				cout << "|         6 - ����������� �1�1� ���������� �������          |" << endl;
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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