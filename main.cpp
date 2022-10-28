#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
template <typename T>
void stypid(T arr[], T a, const uint32_t size)
{
	a = 0;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;

		cout << a << " ";
	}
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 14));
	cout << " Sum all clients : " << a << " " << endl;
}
template <typename T>
void stypid1(T arr[], T a, const uint32_t size)
{
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	a = 0;
	cout << "-----------------------------------------------------------| Packege Distribution |---------------------------------------------------------";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = a;
		a++;

		cout << a << " ";
	}
	cout << endl << endl;
}
template <typename T>
void packege(T arrA[], const uint32_t size, T c)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	c = 0;
	cout << "| | | | | | | | |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |  ";
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
	for (size_t i = 0; i < size; i++)
	{
		arrA[i] = rand() % 5;
		c += 1;
		if (c > 9) {
			cout << " " << arrA[i] << " ";
		}
		else {
			cout << arrA[i] << " ";
		}
	}
	cout << endl << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
	cout << "--------------------------------------------------------------------------------------------------------------------------------------------";
	cout << endl << endl;
}
template <typename T>

void suma(T arrA[], const uint32_t size, T c, T sum)
{

	for (size_t i = 0; i < size; i++)
	{
		sum = 0;
		arrA[i] = rand() % 5;
		c += 1;
		if (arrA[i] = 0)
		{
			cout << "100";

		}
	}
	cout << " The company`s monthly income : " ;
	cout << endl << endl;
}


int main() {

	int a = 0;
	int q, w, e, r, t;
	int c = 0;
	int sum = 0;
	const uint32_t size = 50;
	int arr[size];
	int arrA[size];
	cout << endl;
	stypid(arr, a, size);
	cout << endl;
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 5));
	cout << "   #--------| Packege |-------#" << endl;
	cout << "    |                        | " << endl;
	cout << "    |         0 - 100        | " << endl;
	cout << "    |         1 - 130        | " << endl;
	cout << "    |         2 - 178        | " << endl;
	cout << "    |         3 - 230        | " << endl;
	cout << "    |         4 - 300        | " << endl;
	cout << "    |                        | " << endl;
	cout << "   #--------------------------#" << endl<<endl;
	stypid1(arr, a, size);
	packege(arrA, size, c);
	suma(arrA, size, c, sum);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}