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
void two(int a,int b, int c, int d, int e, int f)
{
    char str[100];
    cout << endl;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " Enter text : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
    gets_s(str);
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
        {
            a++;
        }
        if (str[i] == '2')
        {
            a++;
        }
        if (str[i] == '3')
        {
            a++;
        }
        if (str[i] == '4')
        {
            a++;
        }
        if (str[i] == '5')
        {
            a++;
        }
        if (str[i] == '6')
        {
            a++;
        }
        if (str[i] == '7')
        {
            a++;
        }
        if (str[i] == '8')
        {
            a++;
        }
        if (str[i] == '9')
        {
            a++;
        }
        if (str[i] == '0')
        {
            a++;
        }
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " The number of numbers : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << a << endl << endl;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'q') {
            b++;
        }
        if (str[i] == 'w') {
            b++;
        }
        if (str[i] == 'e') {
            b++;
        }
        if (str[i] == 'r') {
            b++;
        }
        if (str[i] == 't') {
            b++;
        }
        if (str[i] == 'y') {
            b++;
        }
        if (str[i] == 'u') {
            b++;
        }
        if (str[i] == 'i') {
            b++;
        }
        if (str[i] == 'o') {
            b++;
        }
        if (str[i] == 'p') {
            b++;
        }
        if (str[i] == 'a') {
            b++;
        }
        if (str[i] == 's') {
            b++;
        }
        if (str[i] == 'd') {
            b++;
        }
        if (str[i] == 'f') {
            b++;
        }
        if (str[i] == 'g') {
            b++;
        }
        if (str[i] == 'h') {
            b++;
        }
        if (str[i] == 'j') {
            b++;
        }
        if (str[i] == 'k') {
            b++;
        }
        if (str[i] == 'l') {
            b++;
        }
        if (str[i] == 'z') {
            b++;
        }
        if (str[i] == 'x') {
            b++;
        }
        if (str[i] == 'c') {
            b++;
        }
        if (str[i] == 'v') {
            b++;
        }
        if (str[i] == 'b') {
            b++;
        }
        if (str[i] == 'n') {
            b++;
        }
        if (str[i] == 'm') {
            b++;
        }
        if (str[i] == 'Q') {
            b++;
        }
        if (str[i] == 'W') {
            b++;
        }
        if (str[i] == 'E') {
            b++;
        }
        if (str[i] == 'R') {
            b++;
        }
        if (str[i] == 'T') {
            b++;
        }
        if (str[i] == 'Y') {
            b++;
        }
        if (str[i] == 'U') {
            b++;
        }
        if (str[i] == 'I') {
            b++;
        }
        if (str[i] == 'O') {
            b++;
        }
        if (str[i] == 'P') {
            b++;
        }
        if (str[i] == 'A') {
            b++;
        }
        if (str[i] == 'S') {
            b++;
        }
        if (str[i] == 'D') {
            b++;
        }
        if (str[i] == 'F') {
            b++;
        }
        if (str[i] == 'G') {
            b++;
        }
        if (str[i] == 'H') {
            b++;
        }
        if (str[i] == 'J') {
            b++;
        }
        if (str[i] == 'K') {
            b++;
        }
        if (str[i] == 'L') {
            b++;
        }
        if (str[i] == 'Z') {
            b++;
        }
        if (str[i] == 'X') {
            b++;
        }
        if (str[i] == 'C') {
            b++;
        }
        if (str[i] == 'V') {
            b++;
        }
        if (str[i] == 'B') {
            b++;
        }
        if (str[i] == 'N') {
            b++;
        }
        if (str[i] == 'M') {
            b++;
        }
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " The number of letters : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << b << endl << endl;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == '.') {
            c++;
        }
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " The number of dots : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << c << endl << endl;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == ',') {
            d++;
        }
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " The number of coms : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << d << endl << endl;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == '!') {
            e++;
        }
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " The number of exclamation marks : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << e << endl << endl;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == '?') {
            f++;
        }
    }
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " The number of question marks : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << f << endl << endl;
}

///////////////////////////////////////////////////////////////////////////////////
void third(int a)
{
        char str[25];
        cout << endl;
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
        cout << " Enter text : ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
        gets_s(str);
        for (size_t i = 0; i < strlen(str); i++)
        {
            if (str[i] == ' ') {
                a++;
            }
        }
        cout << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
        cout << " The number of spaces : ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
        cout << a << endl << endl;
}
///////////////////////////////////////////////////////////////////////////////////
void four(int a, int b)
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
            int a = 0, b=0, c=0, d=0, e=0, f=0;
            two(a,b,c,d,e,f);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            system("pause");
        }break;
        case '4':
        {
            int a = 0,b=0;
            four(a,b);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            system("pause");
        }break;
        case '3':
        {
            int a = 0;
            third(a);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            system("pause");

        }break;
        }
    } while (true);
	return 0;
}