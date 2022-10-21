#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	char switch_on;
	do
	{
		system("cls");
		cout << "\t\t\t#>---------<MENU>---------<#" << endl;
		cout << "\t\t\t|        1 - Case 1        |" << endl;
		cout << "\t\t\t|        2 - Case 2        |" << endl;
		cout << "\t\t\t#>-------------------------#" << endl;
		cout << "\t\t\t|          Exit - 0        |" << endl;
		cout << "\t\t\t#>------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			const int col = 5;
			const int row = 5;
			int a;
			int arr[col][row];
			cout << " Enter the number : ";
			cin >> a;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					arr[i][j] = a;
					a *= 2;
					cout << "  " << arr[i][j] << "  ";
				}
				cout << endl << endl;
			}
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
		}break;
		case '2':
		{

			const int col = 5;
			const int row = 5;
			int a;
			int arr[col][row];
			cout << " Enter the number : ";
			cin >> a;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					arr[i][j] = a;
					a++;
					cout << " " << arr[i][j] << "\t";
				}
				cout << endl << endl;
			}
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
		}break;
		}
	} while (true);
	return 0;
}