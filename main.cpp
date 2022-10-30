#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <Windows.h>
using namespace std;

template <typename T>
T arifmeticmean(T arr[], const  T size, int sum)
{
	cout.precision(3);
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << " " << arr[i] << "\t";
	}
	cout << endl << endl;
	for (size_t i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << " Arifmetic Mean : " << (double)  sum / 10 << endl << endl;
	return 0;
}
//////////////////////////////////////////////////////////////////////
template <typename T>
T rivn(T a, T b, T c)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	T D = sqrt(b * b - 4 * a * c);
	T x1 = (-b + D);
	T x11 = 2 * a;
	T x111 = x1 / x11;
	T x2 = (-b - D);
	T x22 = x2 / x11;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 6));
	cout << " " << a << "x^2 + " << b << "x + " << c << " = " << "0" << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " Discriminant : ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << D << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " x1 : ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << (double)x111 << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	cout << " x2 : ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << (double)x22 << endl<< endl;
	return 0;
}
//////////////////////////////////////////////////////////////////////
template <typename T>
T three (T a, T b)
{
	cout << setprecision(b) << a;
	return 0;
}
/////////////////////////////////////////////////////////////////////
template <typename T>
T MinMax(T arr[], const T size)
{
	cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << " " << arr[i] << "\t";
	}
	cout << endl << endl;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
	long long max;
	max = arr[size];
	for (size_t i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	cout << " Max = ";
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
	cout << max << endl << endl;
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
	return 0;
}
	//////////////////////////////////////////////////////////////////////////////////////////////
    template <typename T>
	T two1(T arr[][5], const size_t col, const size_t row)
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
				SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			}
			cout << endl << endl;
		}
		long long max;
		max = arr[col][row];
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				if (max < arr[i][j])
				{
					max = arr[i][j];
				}
			}
		}
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
		cout << " Max = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
		cout << max << endl;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		return 0;
	}
	//////////////////////////////////////////////////////////////////////////////////////////////
	template <typename T>
	T two2(T arr[][5][5], const size_t col, const size_t row, const size_t h)
	{
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
		cout << endl;
		for (size_t i = 0; i < col; i++)
		{
			cout << "    ";
			for (size_t j = 0; j < row; j++)
			{
				for (size_t a = 0; a < h; a++)
				{
					arr[col][row][h] = arr[i][j][a];

					arr[i][j][a] = rand() % 30 + (-5);

					SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
					cout << arr[i][j][a] << "   ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
				}
			}
			cout << endl << endl;
		}
		long long max;
		max = arr[col][row][h];
		for (size_t i = 0; i < col; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				for (size_t a = 0; a < h; a++)
				{
					if (max < arr[i][j][a])
					{
						max = arr[i][j][a];
					}
				}
			}
		}
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
		cout << " Max = ";
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
		cout << max << endl << endl;
		SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
		return 0;
	}
	/////////////////////////////////////////////////////////////////////////////
	template <typename T>
	T Max(T a, T b)
	{
		if (a > b)
			return a;
		return b;
	}
	template <typename T>
	T Max(T a, T b, T c)
	{
		T max = a;
		if (max < b)
			max = b;
		if (max < c)
			max = c;
		return max;
	}
	////////////////////////////////////////////////////////////////////////////
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
		cout << "\t\t\t\t\t|         6 - Case 6         |" << endl;
		cout << "\t\t\t\t\t|         7 - Case 7         |" << endl;
		cout << "\t\t\t\t\t|         8 - Case 8         |" << endl;
		cout << "\t\t\t\t\t|         9 - Case 9         |" << endl;
		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
		cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			srand(time(0));
			const  uint32_t size = 10;
			int arr[size];
			int sum = 0;
			arifmeticmean<int>(arr, size, sum);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			system("pause");

		}break;
		case '2':
		{
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			int a; int b; int c;
			srand(time(0));
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " Enter A -> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
			cin >> a;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " Enter B -> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
			cin >> b;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " Enter C -> ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
			cin >> c;
			cout << endl;
		    rivn<int>(a, b, c);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			system("pause");

		}break;
		case '3':
		{
			double x;
			int y;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " Enter number : ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
			cin >> x;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			cout << " Enter the number of decimal places : ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
			cin >> y;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
			cout << " Result : ";
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 8));
			three<int>(x, y);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			system("pause");

		}break;
		case '4':
		{
			do
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				system("cls");
				cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
				cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
				cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
				cout << "\t\t\t\t\t|         3 - Case 3         |" << endl;
				cout << "\t\t\t\t\t#>--------------------------<#" << endl;
				cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
				cout << "\t\t\t\t\t#>--------------------------<#" << endl;
				switch_on = _getch();
				system("cls");
				switch (switch_on)
				{
				case '1':
				{
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
					srand(time(0));
					const  uint32_t size = 10;
					int arr[size];
					MinMax<int>(arr, size);
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					system("pause");
				}break;
				case '2':
				{
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
					srand(time(0));
					const size_t col = 5;
					const size_t row = 5;
					int arr[col][row];
					two1<int>(arr, col, row);
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					system("pause");
				}break;
				case '3':
				{
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
					srand(time(0));
					const size_t col = 5;
					const size_t row = 5;
					const size_t h = 5;
					int arr[col][row][h];
					two2<int>(arr, col, row, h);
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					system("pause");
				}break;
				}
			} while (true);
		}break;
		case '5' :
		{
			do
			{
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				system("cls");
				cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
				cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
				cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
				cout << "\t\t\t\t\t#>--------------------------<#" << endl;
				cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
				cout << "\t\t\t\t\t#>--------------------------<#" << endl;
				switch_on = _getch();
				system("cls");
				switch (switch_on)
				{
				case '1':
				{
					float a, b, c;
					cout << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cout << " Enter numbers : " << endl << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " First : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cin >> a;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Second : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cin >> b;
					c = Max(a, b);
					cout<< endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cout << " A larger number : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << c << endl << endl;
					system("pause");
				}break;
				case '2':
				{
					float a, b, c, d;
					cout << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cout << "Enter floats:" << endl << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " First : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cin >> a;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Second : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cin >> b;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << " Third : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cin >> c;
					d = Max(a, b, c);
					cout << endl;
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
					cout << " A larger number : ";
					SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
					cout << d << endl << endl;
					system("pause");
				}break;
				}
			} while (true);
		}break;

		}
	} while (true);
	return 0;
}