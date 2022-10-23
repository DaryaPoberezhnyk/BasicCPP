#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PrintRectangle(int N, int K)
{
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < K; j++)
		{
			cout << " * ";

		}
		cout << endl;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void TrueFalse(int N)
{
	if (N > 0)
	{
		cout << " This number is True ! ";
	}
	if (N < 0)
	{
		cout << " This number is False ! ";
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void cube(int N)
{
	int copy = N;
	for (int i = 1; i < 3; i++)
	{
		N *= copy;
	}
	cout << N;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 bool arrsimple(int arr[], const int size, int N, int A)
{
	 uint32_t counter = 0;
	 N = 0;
	 A = 0;
	for (size_t i = 1; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << " " << arr[i] << "\t";
		if (arr[i] % i == 0)
		{
			counter++;
			N++;
		}
		else
		{
			A++;
		}
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
	cout << endl << endl;
	cout << " The number of simple numbers : " << N << endl;
	cout << " The number of not simple numbers : " << A << endl;
	if (counter >= 2)
	{
		return false;
	}
	else
	{
		return true;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void numers(int N, int V)
{
	if (N > V)
	{
		cout << " The Number N is greater!!! ";
	}
	if (V > N)
	{
		cout << " The Number V is greater!!! ";
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Array(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << " " << arr[i] << "\t";
	}
	cout << endl << endl;
	long long max, min;
	max = min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
	cout << " Min = " << min << endl;
	cout << " Max = " << max << endl << endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Arrayskip(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << " " << arr[i] << "\t";
	}
	cout << endl << endl;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
	for (int i = size; i > 0; i--)
	{
		cout << " " << arr[i - 1] << "\t";
	}
	cout << endl << endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool SimpleNumber(int number)
{
	uint32_t counter = 0;
	for (size_t i = 1; i <= number; i++)
	{
		if (number % i == 0)
			counter++;
		if (counter >= 3)
			return false;
	}
	return true;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
size_t Factorial(size_t number)
{
	size_t mul = 1;
	cout << " !" << number << " = ";
	do
	{
		mul *= number;
		if (number == 1)
		{
			cout << number << " = ";
		}
		else
		{
			cout << number << " * ";
		}
		number--;
	} while (number);
	return mul;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Russian");
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
			int N, K;
			cout << " N -> ";
			cin >> N;
			cout << " K -> ";
			cin >> K;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			PrintRectangle(N, K);
			system("pause");
			system("color 0F");
		}break;
		case '2':
		{
			int N;
			cout << " N -> ";
			cin >> N;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << Factorial(N) << endl;
			system("pause");
			system("color 0F");
		}break;
		case '3':
		{
			int N;
			cout << " N -> ";
			cin >> N;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			if (SimpleNumber(N))
				cout << "This number is simple!" << endl;
			else
				cout << "This number is not simple!" << endl;
			system("pause");
			system("color 0F");
		}break;
		case '4':
		{
			int N;
			cout << " N -> ";
			cin >> N;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " " << N << "^3 " << " = ";
			cube(N);
			cout << endl;
			system("pause");
			system("color 0F");
		}break;
		case '5':
		{
			int N, V;
			cout << " N -> ";
			cin >> N;
			cout << " V -> ";
			cin >> V;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			numers(N, V);
			cout << endl;
			system("pause");
			system("color 0F");

		}break;
		case '6':
		{
			int N;
			cout << " N -> ";
			cin >> N;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			TrueFalse(N);
			cout << endl;
			system("pause");
			system("color 0F");

		}break;
		case '7':
		{
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			srand(time(0));
			const  int size = 10;
			int arr[size];
			int a = 10;
			cout << endl;
			Array(arr, size);
			system("pause");
			system("color 0F");

		}break;
		case '8':
		{
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			srand(time(0));
			const  int size = 10;
			int arr[size];
			int a = 10;
			cout << endl;
			Arrayskip(arr, size);
			system("pause");
			system("color 0F");

		}break;
		case '9':
		{
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			srand(time(0));
			int N = 0;
			int A = 0;
			const  int size = 10;
			int arr[size];
			int a = 10;
			cout << endl;
			arrsimple(arr, size, N, A);
			system("pause");
			system("color 0F");
		}break;
		}
	} while (true);
	return 0;
}