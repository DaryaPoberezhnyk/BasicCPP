#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;
    int start, end;
    do
    {
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
            do {
                int a = 0, b = 0, c = 0, d = 0, e = 0, f = 11;
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
                int number;
                cout << "Enter the number figure : ";
                cin >> number;
                switch (number)
                {
                case 1:
                {
                    for (int i = 5; i >= 0; i--) {
                        for (int l = 0; l <= b * 2; l++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                    system("pause");
                } break;

                case 2:
                {

                    for (int i = 1; i <= 10; i++) {
                        for (int j = 1; j < i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    system("pause");
                }break;

                case 3:
                {
                    for (int i = 10; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                    system("pause");
                }break;

                case 4:
                {
                    for (int i = 10; i >= 0; i--) {

                        for (int j = 0; j <= i; j++) {
                            cout << " ";
                        }
                        for (int k = 0; k <= a; k++) {
                            cout << "* ";
                        }
                        cout << endl;
                        a++;
                    }
                    system("pause");
                }break;

                case 5:
                {
                    for (int i = 10; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << " *";
                        }
                        for (int k = 0; k <= b; k++) {
                            cout << " ";
                        }
                        cout << endl;
                        b++;
                    }
                    for (int i = 10; i >= 0; i--) {

                        for (int j = 0; j <= i; j++) {
                            cout << " ";
                        }
                        for (int k = 0; k <= e; k++) {
                            cout << " *";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << " ";
                        }
                        cout << endl;
                        e++;
                    }
                    system("pause");
                }break;
                case 6:
                {
                    for (int i = 10; i >= 0; i--) {
                        for (int k = 0; k <= b; k++) {
                            cout << " *";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "    ";
                        }
                        for (int k = 0; k <= b; k++) {
                            cout << " *";
                        }
                        cout << endl;
                        b++;
                    }
                    for (int i = 10; i >= 0; i--) {

                        for (int j = 0; j <= i; j++) {
                            cout << " *";
                        }
                        for (int k = 0; k <= e; k++) {
                            cout << "    ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << " *";
                        }
                        cout << endl;
                        e++;
                    }
                    system("pause");
                }break;
                case 7:
                {
                    for (int i = 1; i <= 10; i++) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    for (int i = 10; i >= 1; i--) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    system("pause");
                }break;
                case 8:
                {
                    for (int i = 1; i <= 11; i++) {
                        for (int k = 0; k <= f * 2; k++) {
                            cout << " ";
                        }
                        for (int j = 1; j < i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        f--;
                    }
                    for (int i = 10; i >= 0; i--) {
                        for (int l = 0; l <= b * 2; l++) {
                            cout << " ";
                        }
                        for (int j = 0; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        b++;
                    }
                    system("pause");
                }break;
                case 9:
                {
                    for (int i = 10; i >= 1; i--) {
                        for (int j = 1; j <= i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                    }
                    system("pause");
                }break;
                case 10:
                {
                    for (int i = 1; i <= 10; i++) {
                        for (int k = 0; k <= f * 2; k++) {
                            cout << " ";
                        }
                        for (int j = 1; j < i; j++) {
                            cout << "* ";
                        }
                        cout << endl;
                        f--;
                    }
                    system("pause");
                }break;
                }
            } while (true);
        }break;
        case '2':
        {
            int x, y, z = 0, sum = 0, a = 0;
            cout << " Enter the number : ";
            cin >> x;

            y = x;

            while (x)
            {
                if (x % 10 == 0)
                    a++;
                x /= 10;
            }
            cout << " Number of zeros = " << a << endl;

            for (z = 0; y > 0; z++)
            {
                sum += y % 10;
                y /= 10;
            }
            cout << " The number of digit = " << z << endl;
            cout << " Sum = " << sum << endl;
            cout << " Arithmetic mean = " << (double)sum / z << endl;
            system("pause");
        }break;
        case '3':
        {
            int a, b = 3, c;

            cout << " Enter col : ";
            cin >> a;
            cout << " Enter row : ";
            cin >> c;

            int i, i1, j, j1;
            for (i = 0; i < a; i++)
            {
                for (j1 = 0; j1 < a; j1++)
                {
                    for (j = 0; j < c; j++)
                    {
                        for (i1 = 0; i1 < a; i1++)
                        {
                            (~(i + j) & 1) ? (cout << '-') : (cout << 'x');
                        }
                    }
                    cout << endl;
                }
            }
            cout << endl;
        }break;
        }
        system("pause");
    } while (true);

    return 0;
}