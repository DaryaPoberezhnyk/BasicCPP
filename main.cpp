#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;
    int start, end;
    do {
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 11;
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
            system("cls");
            cout << "#>----------<MENU>----------<#" << endl;
            cout << "|         1 - Figure a       |" << endl;
            cout << "|         2 - Figure b       |" << endl;
            cout << "|         3 - Figure c       |" << endl;
            cout << "|         4 - Figure d       |" << endl;
            cout << "|         5 - Figure e       |" << endl;
            cout << "|         6 - Figure f       |" << endl;
            cout << "|         7 - Figure g       |" << endl;
            cout << "|         8 - Figure h       |" << endl;
            cout << "|         9 - Figure i       |" << endl;
            cout << "|        10 - Figure j       |" << endl;
            cout << "#>--------------------------<#" << endl;
            cout << "|         0 - Exit           |" << endl;
            cout << "#>--------------------------<#" << endl;
            switch_on = _getch();
            system("cls");
            switch (switch_on)
            {
            case 'b':
            {
                int col, row;
                cout << "Enter the first number : ";
                cin >> col;
                cout << "Enter the first number : ";
                cin >> row;
                cout << endl;

                for (size_t i = 0; i < col; i++)
                {
                    for (size_t j = 0; j < row; j++)
                    {

                        if (i < j)
                        {

                            cout << "   ";
                        }
                        else {
                            cout << "  * ";
                        }
                    }
                    cout << endl;
                }
            }break;
            case 'a':
            {
                int col, row;
                cout << "Enter the first number : ";
                cin >> col;
                cout << "Enter the first number : ";
                cin >> row;
                cout << endl;

                for (size_t i = 0; i < col; i++)
                {
                    for (size_t j = 0; j < row; j++)
                    {

                        if (i > j)
                        {

                            cout << "   ";
                        }
                        else {
                            cout << "*  ";
                        }
                    }
                    cout << endl;
                }
            }break;
            case 'c':
            {
                int col, row;
                cout << "Enter the first number : ";
                cin >> col;
                cout << "Enter the first number : ";
                cin >> row;
                cout << endl;
                    for (int i = col; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                }break;
            case 'd':
            {
                int col, row;
                cout << "Enter the first number : ";
                cin >> col;
                cout << "Enter the first number : ";
                cin >> row;
                cout << endl;

                for (int i = col; i >= 0; i--)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << " ";
                    }
                    for (int k = 0; k <= a; k++) {
                        cout << "* ";
                    }
                    cout << endl;
                    a++;
                }
            }break;
            case 'e' :
            {
                int col, row;
                cout << "Enter the first number : ";
                cin >> col;
                cout << "Enter the first number : ";
                cin >> row;
                cout << endl;

                for (int i = col; i >= 0; i--) {
                    for (int k = 0; k <= b; k++) {
                        cout << "  ";
                    }
                    for (int j = 0; j <= i; j++) {
                        cout << "  * ";
                    }
                    cout << endl;
                    b++;
                }
                for (int i = col; i >= 0; i--)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << "  ";
                    }
                    for (int k = 0; k <= a; k++) {
                        cout << "  * ";
                    }
                    cout << endl;
                    a++;
                }
            }break;
            case 'f':
            {
                int col, row;
                cout << "Enter the first number : ";
                cin >> col;
                cout << "Enter the first number : ";
                cin >> row;
                cout << endl;

                for (int i = col; i >= 0; i--) {
                    for (int k = 0; k <= b; k++) {
                        cout << "  ";
                    }
                    for (int j = 0; j <= i; j++) {
                        cout << "  * ";
                    }
                    cout << endl;
                    b++;
                }
                for (int i = col; i >= 0; i--)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << "  ";
                    }
                    for (int k = 0; k <= a; k++) {
                        cout << "  * ";
                    }
                    cout << endl;
                    a++;
                }
            }break;
            }while (true);
        }
        }
        } while (true);
        return 0;
}