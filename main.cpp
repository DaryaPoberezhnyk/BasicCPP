
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
void card(int n)
{
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