#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;
////////////////////////////////////////////////////////////////////////////
int Sum(int x, int y)
{
    return x + y;
}
int Minus(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
////////////////////////////////////////////////////////////////////////////
void arr2(int arr[], const int size)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    int sum = 0;
    int sum1 = 0;
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << " Array A : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << " " << arr[i] << "\t";
        sum1 += arr[i];
    }
    cout << endl << endl;
    cout << endl;
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 9));
    cout << " Array B : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
        cout << " " << arr[i] << "\t";
    }
    cout << endl << endl;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
    cout << " Array C : ";
    SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
    cout << sum1 << ", " << sum;
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
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int x, y;
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
            cout << "\t\t\t\t\t#>---<  Calculator >---<#" << endl;
            cout << "\t\t\t\t\t|                       |" << endl;
            cout << "\t\t\t\t\t|  7  |  8  |  9  |  C  |" << endl;
            cout << "\t\t\t\t\t|  4  |  5  |  6  |  /  |" << endl;
            cout << "\t\t\t\t\t|  1  |  2  |  3  |  *  |" << endl;
            cout << "\t\t\t\t\t|     |           |  +  |" << endl;
            cout << "\t\t\t\t\t|     |     0     |  -  |" << endl;
            cout << "\t\t\t\t\t|                       |" << endl;
            cout << "\t\t\t\t\t#>---------------------<#" << endl << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            cout << " Enter first number : ";
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
            cin >> x;
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            cout << " Enter second number : ";
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
            cin >> y;
            cout << endl;
            int (*sum_ptr[4])(int, int) = { Sum, Minus, Mul, Div };
            for (size_t i = 0; i < 4; i++)
            {
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 8));
                cout << " Result : ";
                SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
                cout << sum_ptr[i](x, y) << endl;
            }
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            cout << endl;
            system("pause");
        }break;
        case '2':
        {
            srand(time(0));
            const  uint32_t size = 10;
            int arr[size];
            void (*sum_ptr[1])(int arr[], const int size) = { arr2};
            for (size_t i = 0; i < 1; i++)
            {
                sum_ptr[i](arr, size);
            }
            cout << endl << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            system("pause");
        }break;
        }
    } while (true);
    return 0;
}