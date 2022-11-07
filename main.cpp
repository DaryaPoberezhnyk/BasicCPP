#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>

using namespace std;

int first(int a, int b)
{
    while (a > 0 && b > 0)
        if (a > b) {
            a %= b;
        }
        else 
        {
            b %= a;
        }
    return a + b;
}
void second(char* num)
{
    char digits[10] = "123456789";
    srand((unsigned)time(0));
    for (unsigned i = 0, rmax = 9; i < 4; i++) {
        unsigned r = rand() % rmax--;
        num[i] = digits[r];
        digits[r] = digits[rmax];
    }
}

template <int row, int col>
bool third(char(&arr)[row][col], unsigned& bull, unsigned& cow)
{
    cow = 0; bull = 0;
    unsigned i1, i2;
    for (i1 = 0; i1 < col - 1; i1++) {
        for (i2 = 0; i2 < col - 1; i2++) {
            if (arr[0][i1] == arr[1][i2]) {
                if (i1 == i2) cow++;
                else bull++;
            }
        }
    }
    return cow == col - 1;
}


int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

    setlocale(LC_ALL, "ru");
    char switch_on;
    do
    {
        system("cls");
        cout << "\t\t\t\t\t #---------------------MENU-------------------#" << endl;
        cout << "\t\t\t\t\t  |                                           |" << endl;
        cout << "\t\t\t\t\t  |   1 - Finding the greatest common         |" << endl;
        cout << "\t\t\t\t\t  |           divisor of two integers         |" << endl;
        cout << "\t\t\t\t\t  |                                           |" << endl;
        cout << "\t\t\t\t\t  |   2 - Game bulls and cows                 |" << endl;
        cout << "\t\t\t\t\t  |                                           |" << endl;
        cout << "\t\t\t\t\t  |-------------------------------------------|" << endl;
        cout << "\t\t\t\t\t  |   0 - Exit                                |" << endl;
        cout << "\t\t\t\t\t #--------------------------------------------#" << endl;

        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int a, b;
            cout << " Enter the number : ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> a;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << " Enter the number : ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cin >> b;
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
            cout << endl;
            cout << " The common divisor of two entered numbers : ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
            cout << first(a, b) << endl;
            cout << endl << endl;
            cout << " ";
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
            system("pause");
            SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

        }break;
        case '2':
        {
            char numbers[2][5];
            unsigned bulls(0), cows(0);
            int a = 1;
            memset(numbers[0], '\0', 5);
            second(numbers[0]);
            while (true)
            {
                cout << " What number did I guess? :";
                memset(numbers[1], '\0', 5);
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                cin >> numbers[1];
                SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                if (third(numbers, bulls, cows))
                {
                    cout << endl;
                    cout << " Everything is correct, you guessed by : ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 1));
                    cout << a;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " Attempt : " << endl;
                    cout << endl << endl;
                    cout << " ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 8));
                    system("pause");
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    break;
                }
                else {
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 3));
                    cout << " " << bulls;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " BULLS ";
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 6));
                    cout << cows;
                    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
                    cout << " COWS " << endl;
                    a++;
                }
            }
        }break;
        }
        }while (true);
    return 0;
}