#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void first(int* x, int* y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
	cout << endl;
	if (*x > *y) {
		cout << " Result : " << *x << " > " << *y << endl;
	}
	if (*x < *y) {
		cout << " Result : " << *x << " < " << *y << endl;
	}
}
void two(int* x)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
	if (*x > 0)
	{
		cout << " This number is greater than 0 (A positive number!) !" << endl;
	}
	if (*x < 0)
	{
		cout << " This number is less than 0 (A negative number!) !" << endl;
	}
	if (*x == 0)
	{
		cout << " This number is 0 !" << endl;
	}
}
void three(int* x, int* y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
	cout << " Result :" << * y << ", " << *x << endl;

}
void four(int* x, int* y, int *z)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
	if (*z == 1)
	{
		cout << " Result : " << *x << " * " << *y << " = " << *x * *y << endl;
	}
	if (*z == 2)
	{
		cout << " Result : " << *x << " / " << *y << " = " << *x / *y << endl;
	}
	if (*z == 3)
	{
		cout << " Result : " << *x << " + " << *y << " = " << *x + *y << endl;
	}
	if (*z == 4)
	{
		cout << " Result : " << *x << " - " << *y << " = " << *x - *y << endl;
	}
}
void five(int arr[], int size, int sum)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << " " << arr[i] << "\t";
		sum += arr[i];
	}
	cout << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
	cout << "Sum = " << sum << endl;
}
int main()
{
	char switch_on;
	do
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		system("cls");
		cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
		cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
		cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
		cout << "\t\t\t\t\t|         3 - Case 3         |" << endl;
		cout << "\t\t\t\t\t|         4 - Case 4         |" << endl;
		cout << "\t\t\t\t\t|         5 - Case 5         |" << endl;
		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
		cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			int* x = new int{};
			int* y = new int{};
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << endl;
			cout << " Enter the first number : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *x;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << " Enter the second number : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *y;
			first(x, y);
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			system("pause");
		}break;
		case '2':
		{
			int* x = new int{};
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << endl;
			cout << " Enter the number : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *x;
			cout << endl;
			two(x);
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			system("pause");
		}break;
		case '3':
		{
			int* x = new int{};
			int* y = new int{};
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << endl;
			cout << " Enter the two numbers : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *x;
			cin >> *y;
			cout << endl;
			three(x, y);
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			system("pause");
		}break;
		case '4' :
		{
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 10));
			cout << endl;
			cout << "\t\t\t\t\t#>---<  Calculator >---<#" << endl;
			cout << "\t\t\t\t\t|                       |" << endl;
			cout << "\t\t\t\t\t|  7  |  8  |  9  |  C  |" << endl;
			cout << "\t\t\t\t\t|  4  |  5  |  6  |  /  |" << endl;
			cout << "\t\t\t\t\t|  1  |  2  |  3  |  *  |" << endl;
			cout << "\t\t\t\t\t|     |           |  +  |" << endl;
			cout << "\t\t\t\t\t|     |     0     |  -  |" << endl;
			cout << "\t\t\t\t\t|                       |" << endl;
			cout << "\t\t\t\t\t#>---------------------<#" << endl << endl;
			int* x = new int{};
			int* y = new int{};
			int* z = new int{};
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << " Enter the first numbers : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *x;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 10));
			cout << "  #>---<  SIGN >---<#" << endl;
			cout << "  |      1 = *      |" << endl;
			cout << "  |      2 = /      |" << endl;
			cout << "  |      3 = +      |" << endl;
			cout << "  |      4 = -      |" << endl;
			cout << "  #>---------------<#" << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << " Enter the sign : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *z;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			cout << " Enter the second numbers : ";
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
			cin >> *y;
			cout << endl;
			four(x, y,z);
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			system("pause");
		}break;
		case '5':
		{
			int size = 10;
			int* arr = new int[size];
			int sum = 0;
			five(arr, size, sum);
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
			system("pause");
			delete[] arr, sum;
		}break;
		}
	} while (true);
	return 0;
}