#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;

void first(int a)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << endl;
	cout << " Enter text : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
	char str[25];
	gets_s(str);
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << endl;
    cout << " Origen : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
    cout << str << endl;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
        {
			str[i] = '\t';
		}
	}
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << endl;
    cout << " Modification : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
    cout << str << endl << endl;;
}
///////////////////////////////////////////////////////////////////////////////////
void second(int a, int b)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << endl;
    cout << " Enter text : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
    char str[25];
    gets_s(str);
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    a = strlen(str);
    b = true;
    for (size_t i = 0; i < a/2; i++)
    {
        if (str[i] != str[a - i - 1]) {
            b = false;
        }
        if (b)
        {
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 10));
            cout << endl;
            cout << " This text is palindrom !" << endl<<endl;
        }
        else
        {
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 10));
            cout << " This text isn`t palindrom !" << endl << endl;;
        }
        break;
    }
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
            int a=0;
            first(a);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            system("pause");
        }break;
        case '2':
        {
            int a = 0,b=0;
            second(a,b);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            system("pause");
        }break;
        }
    } while (true);
	return 0;
}