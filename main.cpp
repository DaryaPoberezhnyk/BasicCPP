//#include <iostream>
//#include <conio.h>
//#include <cmath>
//#include <Windows.h>
//using namespace std;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void PrintRectangle(int N, int K)
//{
//	for (size_t i = 0; i < N; i++)
//	{
//		for (size_t j = 0; j < K; j++)
//		{
//			cout << " * ";
//
//		}
//		cout << endl;
//	}
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void TrueFalse(int N)
//{
//	if (N > 0)
//	{
//		cout << " This number is True ! ";
//	}
//	if (N < 0)
//	{
//		cout << " This number is False ! ";
//	}
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void cube(int N)
//{
//	int copy = N;
//	for (int i = 1; i < 3; i++)
//	{
//		N *= copy;
//	}
//	cout << N;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//bool arrsimple(int arr[], const int size, int N, int A)
//{
//	uint32_t counter = 0;
//	N = 0;
//	A = 0;
//	for (size_t i = 1; i < size; i++)
//	{
//		arr[i] = rand() % 20;
//		cout << " " << arr[i] << "\t";
//		if (arr[i] % i == 0)
//		{
//			counter++;
//			N++;
//		}
//		else
//		{
//			A++;
//		}
//	}
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
//	cout << endl << endl;
//	cout << " The number of simple numbers : " << N << endl;
//	cout << " The number of not simple numbers : " << A << endl;
//	if (counter >= 2)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void numers(int N, int V)
//{
//	if (N > V)
//	{
//		cout << " The Number N is greater!!! ";
//	}
//	if (V > N)
//	{
//		cout << " The Number V is greater!!! ";
//	}
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void Array(int arr[], const int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 20;
//		cout << " " << arr[i] << "\t";
//	}
//	cout << endl << endl;
//	long long max, min;
//	max = min = arr[0];
//	for (size_t i = 0; i < size; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
//	cout << " Min = " << min << endl;
//	cout << " Max = " << max << endl << endl;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//void Arrayskip(int arr[], const int size)
//{
//	for (size_t i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 20;
//		cout << " " << arr[i] << "\t";
//	}
//	cout << endl << endl;
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
//	for (int i = size; i > 0; i--)
//	{
//		cout << " " << arr[i - 1] << "\t";
//	}
//	cout << endl << endl;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//bool SimpleNumber(int number)
//{
//	uint32_t counter = 0;
//	for (size_t i = 1; i <= number; i++)
//	{
//		if (number % i == 0)
//			counter++;
//		if (counter >= 3)
//			return false;
//	}
//	return true;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//size_t Factorial(size_t number)
//{
//	size_t mul = 1;
//	cout << " !" << number << " = ";
//	do
//	{
//		mul *= number;
//		if (number == 1)
//		{
//			cout << number << " = ";
//		}
//		else
//		{
//			cout << number << " * ";
//		}
//		number--;
//	} while (number);
//	return mul;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	char switch_on;
//	do
//	{
//		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//		system("cls");
//		cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
//		cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
//		cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
//		cout << "\t\t\t\t\t|         3 - Case 3         |" << endl;
//		cout << "\t\t\t\t\t|         4 - Case 4         |" << endl;
//		cout << "\t\t\t\t\t|         5 - Case 5         |" << endl;
//		cout << "\t\t\t\t\t|         6 - Case 6         |" << endl;
//		cout << "\t\t\t\t\t|         7 - Case 7         |" << endl;
//		cout << "\t\t\t\t\t|         8 - Case 8         |" << endl;
//		cout << "\t\t\t\t\t|         9 - Case 9         |" << endl;
//		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
//		cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
//		cout << "\t\t\t\t\t#>--------------------------<#" << endl;
//		switch_on = _getch();
//		system("cls");
//		switch (switch_on)
//		{
//		case '1':
//		{
//			int N, K;
//			cout << " N -> ";
//			cin >> N;
//			cout << " K -> ";
//			cin >> K;
//			cout << endl;
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			PrintRectangle(N, K);
//			system("pause");
//			system("color 0F");
//		}break;
//		case '2':
//		{
//			int N;
//			cout << " N -> ";
//			cin >> N;
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			cout << Factorial(N) << endl;
//			system("pause");
//			system("color 0F");
//		}break;
//		case '3':
//		{
//			int N;
//			cout << " N -> ";
//			cin >> N;
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			if (SimpleNumber(N))
//				cout << "This number is simple!" << endl;
//			else
//				cout << "This number is not simple!" << endl;
//			system("pause");
//			system("color 0F");
//		}break;
//		case '4':
//		{
//			int N;
//			cout << " N -> ";
//			cin >> N;
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			cout << " " << N << "^3 " << " = ";
//			cube(N);
//			cout << endl;
//			system("pause");
//			system("color 0F");
//		}break;
//		case '5':
//		{
//			int N, V;
//			cout << " N -> ";
//			cin >> N;
//			cout << " V -> ";
//			cin >> V;
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			numers(N, V);
//			cout << endl;
//			system("pause");
//			system("color 0F");
//
//		}break;
//		case '6':
//		{
//			int N;
//			cout << " N -> ";
//			cin >> N;
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			TrueFalse(N);
//			cout << endl;
//			system("pause");
//			system("color 0F");
//
//		}break;
//		case '7':
//		{
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			srand(time(0));
//			const  int size = 10;
//			int arr[size];
//			int a = 10;
//			cout << endl;
//			Array(arr, size);
//			system("pause");
//			system("color 0F");
//
//		}break;
//		case '8':
//		{
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			srand(time(0));
//			const  int size = 10;
//			int arr[size];
//			int a = 10;
//			cout << endl;
//			Arrayskip(arr, size);
//			system("pause");
//			system("color 0F");
//
//		}break;
//		case '9':
//		{
//			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
//			srand(time(0));
//			int N = 0;
//			int A = 0;
//			const  int size = 10;
//			int arr[size];
//			int a = 10;
//			cout << endl;
//			arrsimple(arr, size, N, A);
//			system("pause");
//			system("color 0F");
//		}break;
//		}
//	} while (true);
//	return 0;
//}
#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////
void degree(int a, int b)
{
		cout << " " << a << "^" << b << " = ";
		cout << pow(a, b) << endl;
}
////////////////////////////////////////////////////////////////////////////////////////////
void diapazon(int a, int b, int sum)
{
	sum = 0;
	for (size_t i = a; i <= b; i++)
	{
		if (i < b)
		{
			cout << i << " + ";
		}
		else if (i == b) 
		{
			cout << i << " = ";
		}
		sum += i;
	}
	cout << sum;
}
////////////////////////////////////////////////////////////////////////////////////////////
void dosc()
{



}
////////////////////////////////////////////////////////////////////////////////////////////
void card(int n)
{
	/*a = 6;
	b = 7;
	c = 8;
	d = 9;
	z = 10;
	x = 5;
	e = 1;
	f = 2;
	g = 3;
	h = 4;*/

	if (n == 1)
	{
		cout << "\t------------" << endl;
		cout << "\t|          |" << endl;
		cout << "\t|          |" << endl;
		cout << "\t|      |   |" << endl;
		cout << "\t|    | |   |" << endl;
		cout << "\t|   |  |   |" << endl;
		cout << "\t|  |   |   |" << endl;
		cout << "\t|      |   |" << endl;
		cout << "\t|      |   |" << endl;
		cout << "\t|      |   |" << endl;
		cout << "\t|          |" << endl;
		cout << "\t------------" << endl;
	}
	if (n ==2)
	{
		cout << "\t--------------" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|   ------   |" << endl;
		cout << "\t|  |      |  |" << endl;
		cout << "\t|        |   |" << endl;
		cout << "\t|       |    |" << endl;
		cout << "\t|     |      |" << endl;
		cout << "\t|   |        |" << endl;
		cout << "\t|   -------  |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t--------------" << endl;
	}
	if (n ==3)
	{
		cout << "\t--------------" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|  -------   |" << endl;
		cout << "\t|         |  |" << endl;
		cout << "\t|         |  |" << endl;
		cout << "\t|    -----   |" << endl;
		cout << "\t|         |  |" << endl;
		cout << "\t|         |  |" << endl;
		cout << "\t|  -------   |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t--------------" << endl;
	}
	if (n ==4)
	{
		cout << "\t---------------" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|    ------|  |" << endl;
		cout << "\t|          |  |" << endl;
		cout << "\t|          |  |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t---------------" << endl;
	}
	if (n ==5)
	{
		cout << "\t--------------" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|    -----   |" << endl;
		cout << "\t|  |         |" << endl;
		cout << "\t|  |         |" << endl;
		cout << "\t|    -----   |" << endl;
		cout << "\t|         |  |" << endl;
		cout << "\t|         |  |"  << endl;
		cout << "\t|  -------   |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t--------------" << endl;
	}
	if (n ==6)
	{
		cout << "\t--------------" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|    -----   |" << endl;
		cout << "\t|  |         |" << endl;
		cout << "\t|  |-----    |" << endl;
		cout << "\t|  |      |  |" << endl;
		cout << "\t|  |      |  |" << endl;
		cout << "\t|   ------   |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t--------------" << endl;
	}
	if (n == 7)
	{
		cout << "\t--------------" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|  -------   |" << endl;
		cout << "\t|        |   |" << endl;
		cout << "\t|       |    |" << endl;
		cout << "\t|   ---|---  |" << endl;
		cout << "\t|     |      |" << endl;
		cout << "\t|    |       |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t|            |" << endl;
		cout << "\t--------------" << endl;
	}
	if (n == 8)
	{
		cout << "\t---------------" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|   -------   |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|   -------   |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|   -------   |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t---------------" << endl;
	}
	if (n ==9)
	{
		cout << "\t---------------" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t|   -------   |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|  |       |  |" << endl;
		cout << "\t|    ------|  |" << endl;
		cout << "\t|          |  |" << endl;
		cout << "\t|          |  |" << endl;
		cout << "\t|   -------   |" << endl;
		cout << "\t|             |" << endl;
		cout << "\t---------------" << endl;
	}
	if (n ==10)
	{
		cout << "\t-----------------------" << endl;
		cout << "\t|                     |" << endl;
		cout << "\t|                     |" << endl;
		cout << "\t|      |    -------   |" << endl;
		cout << "\t|    | |   |       |  |" << endl;
		cout << "\t|   |  |   |       |  |" << endl;
		cout << "\t|  |   |   |       |  |" << endl;
		cout << "\t|      |   |       |  |" << endl;
		cout << "\t|      |   |       |  |" << endl;
		cout << "\t|      |    -------   |" << endl;
		cout << "\t|                     |" << endl;
		cout << "\t-----------------------" << endl;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////
void lucky(int a, double sum)
{

	double b;
	b = a % 1000;
	a -= a % 1000;
	a = a / 1000;
	if (a == b)
	{
		cout << " This number is lucky !!!" << endl;
	}
	else
	{
		cout << " This number isn`t lucky !!!" << endl;
	}
 }
////////////////////////////////////////////////////////////////////////////////////////////
void Dosc(int x, int y, int c, int d, int a)
{
	if (y > x)
	{
		c = y - x;
		d = x;
	}
	else
	{
		c = x - y;
		d = y;
	}
	const uint32_t size = c;
	for (size_t i = d; i < c; i++)
	{
		if (i == 6)
		{
			cout << " 6 ";
		}
		if (i == 28)
		{
			cout << " 28 ";
		}
		if (i == 496)
		{
			cout << " 496 ";
		}
		if (i == 8128)
		{
			cout << " 8128 ";
		}
		if (i == 2096128)
		{
			cout << " 2096128 ";
		}
		if (i == 33550336)
		{
			cout << " 33550336 ";
		}
		if (i == 8589869056)
		{
			cout << " 8589869056 ";
		}
	}
}
////////////////////////////////////////////////////////////////////////////////////////////
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
			const int size = 0;
			int a, b;
			cout << endl;
			cout << " Enter number : ";
			cin >> a;
			cout << " Enter degree : ";
			cin >> b;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
			degree(a, b);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			system("pause");
		}break;
		case '2' :
		{
			int a, b;
			cout << endl;
			cout << " Enter first number in diapazone : ";
			cin >> a;
			cout << " Enter second number in diapazone : ";
			cin >> b;
			int sum = 0;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
			cout << " Sum = ";
			diapazon(a, b, sum);
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			system("pause");
		}break;
		case '3' :
		{
			int a, b, c = 0, d = 0;
			cout << endl;
			cout << " First number : ";
			cin >> a;
			cout << " Second Number : ";
			cin >> b;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
			cout << " Result : ";
			Dosc(a, b, c, d, a);
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			system("pause");
		}break;
		case '4':
		{
			int n;
			cout << endl;
			cout << " Enter a plaing card from 1 to 10 : ";
			cin >> n;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
			card(n);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			system("pause");
		}break;
		case '5' :
		{
			int a, sum = 0;
			cout << endl;
			cout << " Enter a six-digit number : ";
			cin >> a;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 14));
			lucky(a, sum);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
			cout << endl;
			system("pause");
		}break;
		}
	} while (true);
	return 0;
}