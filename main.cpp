#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void date(int a, int b, int c, int a1, int b1, int c1)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));

	cout << "----------------------------------------------------------------------------------" << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	
	cout << " Difference between dates : " << endl;
	cout << " Year : " << a1 - a << endl;
	cout << " Month : " << b1 - b << endl;
	cout << " Day : " << c1 - c << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));

	cout << "----------------------------------------------------------------------------------" << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 6));
	if (a % 4 == 0)
	{
			cout << " First year is a leap year !" << endl;
		}
	else
	{
		cout << " First year isn`t a leap year !" << endl;
	}
	if (a1 % 4 == 0)
	{
		
			cout << " Second year is a leap year !" << endl;
	}
	else
	{
		cout << " Second year isn`t a leap year !" << endl;
	}
}
/////////////////////////////////////////////////////////////////////////////
void TWO(int arr[], const int size, int n = 0, int sum = 0)
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	cout << " ";
	for (n = 0; size > n; n++)
	{
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
		arr[n] = rand() % 30;
		cout << arr[n] << "  ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
		sum += arr[n] % 30;
	}
	cout << endl << endl;
	cout << " Arifmetic mean : ";
	cout << (double)sum / n << endl;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////
void three(int arr[], const int size /*int a = 0, int b = 0*/)
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	int plus = 0;
	int minys = 0;
	int zero = 0;
	cout << endl;
	cout << " ";
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20 + (-5);
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
		cout << arr[i] << ", ";
	}
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			plus++;
		}
		else if (arr[i] < 0)
		{
			minys++;
		}
		if (arr[i] == 0)
		{
			zero++;
		}
		arr[i] /= 10;
	}
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << endl;
	cout << " The number of zeros in the array : ";
	cout << zero << endl;
	cout << " The number of positive numbers in the array : ";
	cout << plus << endl;
	cout << " The number of negativ numbers in the array ";
	cout << minys << endl;
}
//////////////////////////////////////////////////////////////////////////////////

void Four(int arr[][5], const size_t col, const size_t row)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	for (size_t i = 0; i < col; i++)
	{
		cout << " ";
		for (size_t j = 0; j < row; j++)
		{
			arr[col][row] = arr[i][j];
			arr[i][j] = rand() % 20 + (-5);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << arr[i][j] << "\t\t";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
		}
		cout << endl << endl;
	}
	long long min, max;
	max = arr[col][row];
	min = arr[col][row];
	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}

			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	
	cout << " Min = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << min << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << " Max = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << max << endl;
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
		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
		cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			int a, b, c, a1, b1, c1;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 13));
			cout << " Enter first year : ";
			cin >> a;
			cout << " Enter first month : ";
			cin >> b;
			cout << " Enter firt day : ";
			cin >> c;
			cout << " Enter second year : ";
			cin >> a1;		
			cout << " Enter second month : ";
			cin >> b1;		
			cout << " Enter second day : ";
			cin >> c1;
			cout << endl;
			date(a, b, c, a1, b1, c1);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			system("pause");
		}break;
		case '2' :
		{
			srand(time(0));

			int n = 0, sum = 0;
			const int size = 30;
			int arr[size];

			TWO(arr, size, n, sum);
			cout << endl;
			cout << " ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			system("pause");
		}break;
		case '3':
		{
			srand(time(0));
			int sum = 0;
			const int size = 30;
			int arr[size];
			three(arr, size);
			cout << endl;
			cout << " ";
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));

		}break;
		case '4':
		{
			srand(time(0));
			const size_t col = 5;
			const size_t row = 5;
			int arr[col][row];
			Four(arr, col, row);
			cout << endl;
			cout << " ";
			system("pause");
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		}break;
		}
	} while (true);
	return 0;
}