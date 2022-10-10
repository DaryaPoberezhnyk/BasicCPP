#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;
    do {
        system("cls");
        cout << "#>----------<MENU>----------<#" << endl;
        cout << "|         1 - Case 1         |" << endl;
        cout << "|         2 - Case 2         |" << endl;
        cout << "|         3 - Case 3         |" << endl;
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
            int colour;
            cout << endl;
            cout << "Enter the height of the rectangle : ";
            cin >> col;
            cout << "Enter the length of the rectangle : ";
            cin >> row;
            cout << "Enter the sign : ";
            cin >> sign;
            cout << "Enter the colour : ";
            cin >> colour;
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
        }break;
        case '3':
        {
            int one, two, three, four, five, six, r;
            cout << endl;

            cout << "  Enter the firm`s profit for the first month : ";
            cin >> one;
            cout << "  Enter the firm`s profit for the second month : ";
            cin >> two;
            cout << "  Enter the firm`s profit for the third month : ";
            cin >> three;
            cout << "  Enter the firm`s profit for the fourth month : ";
            cin >> four;
            cout << "  Enter the firm`s profit for the fifth month : ";
            cin >> five;
            cout << "  Enter the firm`s profit for the sixth month : ";
            cin >> six;
            cout << endl;
            cout << "  The company`s profit for 6 months is : ";
            cout << (one + two + three + four + five + six) ? cout << " GRN " << endl : cout << endl;
            system("pause");
        }break;
        case '4':
        {

            
        }break;
        case '5':
        {


        }break;
    }
    } while (true);
}