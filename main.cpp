#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
    char switch_on;
    do 
    {
        system("cls");
        cout << "#>----------<MENU>----------<#" << endl;
        cout << "|         1 - Case 1         |" << endl;
        cout << "|         2 - Case 2         |" << endl;
        cout << "|         3 - Case 3         |" << endl;
        cout << "|         4 - Case 4         |" << endl;
        cout << "|         5 - Case 5         |" << endl;
        cout << "|         6 - Case 6         |" << endl;
        cout << "#>--------------------------<#" << endl;
        cout << "|         0 - Exit           |" << endl;
        cout << "#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int col, row, sign;
            cout << endl;
            cout << "Enter the height of the rectangle : ";
            cin >> col;
            cout << "Enter the length of the rectangle : ";
            cin >> row;
            cout << "Enter the sign : ";
            cin >> sign;
            cout << endl;

            for (size_t i = 0; i <= col; i++)
            {
                for (size_t j = 0; j <= row; j++)
                {
                    cout << sign;
                }
                cout << endl;
            }
            system("pause");
        }break;
        case '2':
        {
            int col, row, sign;
            int j;
            int color;
            cout << endl;
            cout << "Enter the height of the rectangle : ";
            cin >> col;
            cout << "Enter the length of the rectangle : ";
            cin >> row;
            cout << "Enter the sign : ";
            cin >> sign;
            cout << "Enter the colour : ";
            cin >> color;
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | color));
            cout << endl;

            for (size_t i = 0; i < col; i++)
            {
                if (i == 0 || i == col - 1)
                {
                    for (size_t j = 0; j < row; j++)
                    {
                        if (i == 0)
                        {
                            if (j == 0)
                                cout << sign;
                            else if (j == row - 1)
                                cout << sign;
                            else

                                cout << sign << sign;
                        }
                        if (i == col - 1)
                        {
                            if (j == 0)
                                cout << sign;
                            else if (j == row - 1)
                                cout << sign;
                            else
                                cout << sign << sign;
                        }
                    }
                }
                else {
                    for (size_t j = 0; j < row; j++)
                    {
                        if (j == 0 || j == row - 1)
                        {
                            cout << sign;
                        }
                        else {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }
            
            system("pause");
            system("color 0F");
        }break;
        case '3':
        {
            int one, two, three, four, five, six, r;
            cout << endl;

            cout << "  Enter the firm`s profit for the first month : " << endl;
            cin >> one;
            cout << "  Enter the firm`s profit for the second month : " << endl;
            cin >> two;
            cout << "  Enter the firm`s profit for the third month : " << endl;
            cin >> three;
            cout << "  Enter the firm`s profit for the fourth month : " << endl;
            cin >> four;
            cout << "  Enter the firm`s profit for the fifth month : " << endl;
            cin >> five;
            cout << "  Enter the firm`s profit for the sixth month : " << endl;
            cin >> six;
            cout << endl;
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
            cout << "  The company`s profit for 6 months is : ";
            cout << (one + two + three + four + five + six) ? cout << " GRN " << endl : cout << endl;
            system("pause");
            system("color 0F");
        }break;
        case '4':
        {
            const int size = 10;
            int arr[size] = { 8,5,3,4,5,6,9,7,2,1 };
            for (size_t i = 0; i < size; i++)
            {
                arr[i] = 10;
                arr[0] = 1;
                arr[1] = 2;
                arr[2] = 7;
                arr[3] = 9;
                arr[4] = 6;
                arr[5] = 5;
                arr[6] = 4;
                arr[7] = 3;
                arr[8] = 5;
                arr[9] = 8;
            }
            cout << endl;
            cout << "  " << arr[9] << ", " << arr[8] << ", " << arr[7] << ", " << arr[6] << ", " << arr[5] << ", " << arr[4] << ", " << arr[3] << ", " << arr[2] << ", " << arr[1] << ", " << arr[0] << endl << endl;
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
            cout << "  " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << ", " << arr[5] << ", " << arr[6] << ", " << arr[7] << ", " << arr[8] << ", " << arr[9] << endl << endl;
            system("pause");
            system("color 0F");
        }break;
        case '5':
        {
            const int size = 5;
            int arr[size];
            int one, two, three, four, five;
            cout << "  Enter the first length : ";
            cin >> one;
            cout << "  Enter the second length : ";
            cin >> two;
            cout << "  Enter the third length : ";
            cin >> three;
            cout << "  Enter the fourth length : ";
            cin >> four;
            cout << "  Enter the fifth length : ";
            cin >> five;
            cout << endl;
            for (size_t i = 0; i < size; i++)
            {
                arr[i] = 5;
                arr[0] = one;
                arr[1] = two;
                arr[2] = three;
                arr[3] = four;
                arr[4] = five;
            }
            cout << "  " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << "." << endl << endl;
            cout << "  Perimeter : " << one + two + three + four + five << endl;
            system("pause");
        }break;
        case '6' :
        {
            const uint32_t size = 12;
            int a;
            long long arrA[size];

            for (int i = 0; i < size; i++)
            {
                if (i == 0) {
                    cout << " January : ";
                }
                if (i == 1) {
                    cout << " February : ";
                }
                if (i == 2) {
                    cout << " March : ";
                }
                if (i == 3) {
                    cout << " April : ";
                }
                if (i == 4) {
                    cout << " May : ";
                }
                if (i == 5) {
                    cout << " June : ";
                }
                if (i == 6) {
                    cout << " July : ";
                }
                if (i == 7) {
                    cout << " Augast : ";
                }
                if (i == 8) {
                    cout << " September : ";
                }
                if (i == 9) {
                    cout << " October : ";
                }
                if (i == 10) {
                    cout << " November : ";
                }
                if (i == 11) {
                    cout << " December : ";
                }

                cin >> a;
                arrA[i] = a;
            }

            long long max, min;
            max = min = arrA[0];

            for (size_t i = 0; i < size; i++)
            {
                if (min > arrA[i])
                {
                    min = arrA[i];
                }
                if (max < arrA[i])
                {
                    max = arrA[i];
                }
            }
            cout << endl;
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
            cout << " The most profitable month : " << max << endl;
            cout << " the most profitable month : " << min << endl;
            return 0;
            system("pause");
            system("color 0F");
        }break;
    }
    } while (true);
}