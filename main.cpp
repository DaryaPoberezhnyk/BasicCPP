//#include <iostream>
//#include <CMATH>
//using namespace std;
//
//void RandMatrix(int arr[][5], const int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = 0; j < size; j++)
//        {
//            arr[i][j] = rand() % 10;
//        }
//    }
//}
//void PrintMatrix(int arr[][5], const int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = 0; j < size; j++)
//        {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//    cout << endl;
//}
//void RandArray(int arr[], const int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 10;
//    }
//}
//void Print(int arr[], const int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << arr[i] << "\t";
//    }
//    cout << endl;
//}
//int main()
//{
//    srand(time(0));
//    const int size = 5;
//    /*int arr[size];
//    int arr_2[size];
//    RandArray(arr, size);
//    Print(arr, size);
//    RandArray(arr_2, size);
//    Print(arr_2, size);*/
//    int arr[size][size];
//    RandMatrix(arr, size);
//    PrintMatrix(arr, size);
//    return 0;
//}
//int main()
//{
//   /* const int size = 5;
//    int arr[size][size][size][size];
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = 0; j < size; j++)
//        {
//            for (size_t k = 0; k < size; k++)
//            {
//                for (size_t x = 0; x < size; x++)
//                {
//                    arr[i][j][k][x] = rand() % 10;
//                }
//            }
//        }
//    }
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = 0; j < size; j++)
//        {
//            for (size_t k = 0; k < size; k++)
//            {
//                for (size_t x = 0; x < size; x++)
//                {
//                    cout << arr[i][j][k][x] << " ";
//                }
//                cout << "\t";
//            }
//            cout << endl;
//        }
//        cout << endl << endl;
//    }
//*/
//   
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
void cube (int N)
{
	int copy = N;
	for (int i = 1; i < 3; i++)
	{
		N *= copy;
	}
	cout << N;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void arrsimple(int arr[], const int size)
{
	int j;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << " " << arr[i] << "\t";
	}
	cout << endl << endl;
	
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
		cout << "#>----------<MENU>----------<#" << endl;
		cout << "|         1 - Case 1         |" << endl;
		cout << "|         2 - Case 2         |" << endl;
		cout << "|         3 - Case 3         |" << endl;
		cout << "|         4 - Case 4         |" << endl;
		cout << "|         5 - Case 5         |" << endl;
		cout << "|         6 - Case 6         |" << endl;
		cout << "|         7 - Case 7         |" << endl;
		cout << "|         8 - Case 8         |" << endl;
		cout << "|         9 - Case 9         |" << endl;
		cout << "#>--------------------------<#" << endl;
		cout << "|         0 - Exit           |" << endl;
		cout << "#>--------------------------<#" << endl;
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
		case '2' :
		{
			int N;
			cout << " N -> ";
			cin >> N;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << Factorial(N) << endl;
			system("pause");
			system("color 0F");
		}break;
		case '3' :
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
		case '4' :
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
		case '5' :
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
			const  int size = 10;
			int arr[size];
			int a = 10;
			cout << endl;
			arrsimple(arr, size);
			system("pause");
			system("color 0F");
		}break;
		}
	} while (true);
    return 0;
}