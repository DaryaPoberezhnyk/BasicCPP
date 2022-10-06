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
            case '1':
            {
                int col=5, row=5;
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
            case '2':
            {
                int col = 5, row = 5;
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
            case '3':
            {
                int col = 5, row = 5;
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
            }while (true);
        case '2':
        {
           
        }break;
        case '3':
        {

        }break;
        }
        }
        } while (true);
        return 0;
    }