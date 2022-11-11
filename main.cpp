#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <ctime>
using namespace std;

void copi(int* arr, int* arr1, int a, int b) {
    cout << endl;
    cout << " ";
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    arr1 = arr;
    for (size_t i = 0; i < a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        arr[i] = i;
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << endl;
    cout << " ";
    for (size_t i = 0; i < b; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        cout << arr1[i] << "\t";
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}

void xx(int* arr, int a, int b) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << " ";
    for (int i = 1; i <= a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        arr[i] = i;
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << endl;
    cout << " ";
    for (int i = 0; i < a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        arr[i] = b;
        cout << arr[i] << "\t";
        b--;
    }
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    cout << endl;
}
void copi2(int* arr, int* arr1, int a, int b)
{
    cout << endl;
    cout << " ";
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    arr1 = arr;
    int q = a;
    for (size_t i = 1; i <= a; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 11));
        arr[i] = i;
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << endl;
    cout << " ";
    for (size_t i = 0; i < b; i++)
    {
        SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
        arr1[i] = q;
        cout << arr1[i] << "\t";
        q--;
    }
    cout << endl;
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
}
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    char switch_on;
    do
    {
        system("cls");
        cout << "\t\t\t\t\t #-----| MENU |-----#" << endl;
        cout << "\t\t\t\t\t  |                |" << endl;
        cout << "\t\t\t\t\t  |   1 - Case 1   |" << endl;
        cout << "\t\t\t\t\t  |   2 - Case 2   |" << endl;
        cout << "\t\t\t\t\t  |   3 - Case 3   |" << endl;
        cout << "\t\t\t\t\t  |                |" << endl;
        cout << "\t\t\t\t\t  |----------------|" << endl;
        cout << "\t\t\t\t\t  |   0 - Exit     |" << endl;
        cout << "\t\t\t\t\t #-----------------#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int a;
            cout << " Enter a : ";
            cin >> a;
            int b = a;
            int* arr = new int[a];
            int* arr1 = new int[b];
            copi(arr1, arr, a, b);
            cout << endl;
            system("pause");

        }break;
        case '2':
        {
            int a = 10;
            int b = a;
            int* arr = new int[a];
            cout << endl;
            xx(arr, a, b);
            cout << endl;
            system("pause");
        }break;
        case '3':
        {
            int a;
            cout << " Enter a : ";
            cin >> a;
            int b = a;
            int* arr = new int[a];
            int* arr1 = new int[b];
            copi2(arr1, arr, a, b);
            cout << endl;
            system("pause");

        }break;
        }
    } while (true);
    return 0;
}