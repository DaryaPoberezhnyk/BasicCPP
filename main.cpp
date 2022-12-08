#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;

int mystrlen(const char* str)
{
		int size = 0;
		for (size_t i = 0; str[i] != '\0'; i++)
		{
			size++;
		}
		return size;
}

char* mystrcpy(char* str1, const char* str2)
{
	int size = mystrlen(str2);
	str1 = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		str1[i] = str2[i];
	}
	str1[size] = '\0';
	return str1;
}

char* mystrcat(char* str1, const char* str2) {

	int size = mystrlen(str1);
	str1 = new char[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		cout << str1[i];
		cout << " " << str2[i];
	}
	str1[size] = '\0';
	return str1;
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
			cout << endl;
			char str[] = " Hello ";
			cout << str << endl << endl;
			cout << " Size = " << mystrlen(str) << endl << endl;;
			system("pause");
		}break;
		case '2' :
		{
			cout << endl;
			char* str1 = new char[7] {"Hello!"};
			const char* str2 = "World!";
			cout << "Str 1 = " << str1 << endl;
			cout << "Str 2 = " << str2 << endl;
			mystrcpy(str1, str2);
			cout << "Str 1 = " << str1 << endl;
			cout << "Str 2 = " << str2 << endl << endl;;
			system("pause");
		}
		case '3':
		{
			cout << endl;
			char* str1 = new char[7] {"Hello!"};
			const char* str2 = "World!";
			cout << " Str1 = " << str1 << endl;
			cout << " Str2 = " << str2 << endl;
			mystrcat(str1, str2);
			cout << " Str1 = " << str1;
			
			system("pause");
		}break;
		}
	} while (true);
	return 0;
}
