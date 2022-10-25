#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char switch_on;
    do
    {
        int i = 0;
        int temp = 0;
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        int color;



        cout << endl;
        cout << " \t\t\t\t#-------------------MENU------------------#" << endl;
        cout << " \t\t\t\t|               1 - Case 1                |" << endl;      
        cout << " \t\t\t\t|               2 - Case 2                |" << endl;
        cout << " \t\t\t\t|               3 - Case 3                |" << endl;
        cout << " \t\t\t\t|               4 - Case 4                |" << endl;
        cout << " \t\t\t\t#-----------------------------------------#" << endl;
        cout << " \t\t\t\t|               0 - Exit                  |" << endl;
        cout << " \t\t\t\t#-----------------------------------------#" << endl;
        switch_on = _getch();

        system("cls");

        switch (switch_on)
        {
        case '1':
        {
            int a, b, c;

            cout << " Enter the first number in the diapazone : ";
            cin >> a;
            cout << " Enter the second number in the diapazone : ";
            cin >> b;
            cout << " Enter number : ";
            cin >> c;
            do
            {
                if (a > b)
                {
                    int temp = a;
                    a = b;
                    b = temp;
                }
                for (int i = a; i <= b; i++)
                {
                    if (c >= a && c <= b)
                    {
                        cout << " The number is the range ! " << endl;
                        break;
                    }
                    for (c < a; c > b || c < b;)
                    {
                       cout << " The number is out of range, please try again ! " << endl;
                       cout << " Enter the number : ";
                       cin >> c;
                       if (c >= a && c <= b)
                       {
                           break;
                       }
                    }
                }
            } while (c < a && c > b);
            break;
        }break;
        case '2':
        {
            cout << endl;
            cout << " \t\t\t\t  #----------------------------------------#"  << endl;
            cout << " \t\t\t\t  | 1.    Iphone 12         |   34000 GRN  | " << endl;
            cout << " \t\t\t\t  | 2.    Ipad 9            |   25000 GRN  | " << endl;
            cout << " \t\t\t\t  | 3.    Appple AirPods 2  |   5000  GRN  | " << endl;
            cout << " \t\t\t\t  | 4.    MacBook 10        |   60897 GRN  | " << endl;
            cout << " \t\t\t\t  | 5.    Apple Watch 7     |   19000 GRN  | " << endl;
            cout << " \t\t\t\t  | 6.    Apple Pencil 2    |   8000 GRN   | " << endl;
            cout << " \t\t\t\t  #----------------------------------------# " << endl;
            cout << " \t\t\t\t  | 0.    The entire purchase amount       | " << endl;
            cout << " \t\t\t\t  #----------------------------------------# " << endl;
            cout << endl;

            double number;
            int a;
            int discount;

            cout << " \t\t\t\t\t  #********************#" << endl;
            cout << " \t\t\t\t\t     | 1 |    10%   |   " << endl;
            cout << " \t\t\t\t\t     | 2 |    20%   |   " << endl;
            cout << " \t\t\t\t\t     | 3 |    30%   |   " << endl;
            cout << " \t\t\t\t\t     | 5 |    50%   |   " << endl;
            cout << " \t\t\t\t\t  #********************#" << endl;
            cout << " \t\t\t\t\t     Select a discount ";
            cin >> discount;

            for (int i = 0; i > discount || i < discount; i++) 
            {
                if (discount > 6 || discount < 0) 
                {
                    cout << " There is no such discount !" << endl;
                    cout << " Select a discount : ";
                    cin >> discount;
                }
            }
            int x = 0;
            int b = 0, c = 0;

            for (int i = 0;; i++)
            {
                cout << " Select  prouduct : ";
                cin >> number;
                if (number == 0) 
                {
                    cout << " The entire purchase amount = " << b << endl;
                    c = 0;
                    cout << " Clik any number to complete the work day : ";
                    cin >> a;
                    if (a == 0)
                    {
                        cout << " All revenue for the day : " << c << endl;
                        break;
                    }
                    else {
                        cout << " Select a discount : ";
                        cin >> discount;
                        for (int i = 0; i > discount || i < discount; i++)
                        {
                            if (discount > 5 || discount < 0) 
                            {
                                cout << " There is no such discount !" << endl;
                                cout << " Select a discount :";
                                cin >> discount;
                            }
                        }
                        cout << " Select  prouduct : ";
                        cin >> number;
                    }
                }
                for (int i = 0; i > number || i < number; i++) {

                    if (number > 6) 
                    {
                        cout <<" There is no such prouduct ! " << endl;
                        cout << " Select a prouduct : ";
                        cin >> number;

                    }

                    if (number < 0)
                    {
                        cout << " There is no such prouduct ! " << endl;
                        cout << " Select a prouduct : ";
                        cin >> number;
                    }
                }
                cout << " Select the quantily of the prouduct : ";
                cin >> x;

                for (int i = 0; i > x || i < x; i++) {

                    if (x > 100) 
                    {
                        cout << " There is no such amount of goods ! " << endl;
                        cout << " Choose a smaller quantity of the prouduct : ";
                        cin >> x;
                    }

                    if (x < 0) 
                    {
                        cout << " There is no such amount of goods ! " << endl;
                        cout << " Choose a smaller quantity of the prouduct : ";
                        cin >> x;
                    }
                }
                if (number == 1)
                {
                    if (discount == 1) 
                    {
                        int A = (34000 * x) - (((34000 * x) / 10) * 1);
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Iphone 12 = " << A << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += A;
                        c += A;
                    }
                    if (discount == 2)
                    {
                        int A = (34000 * x) - (((34000 * x) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Iphone 12 =  " << A << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += A;
                        c += A;
                    }
                    if (discount == 3) 
                    {
                        int A = (34000 * x) - (((34000 * x) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Iphone 12 =  " << A << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b+= A;
                        c += A;
                    }
                    if (discount == 5)
                    {
                        int A = (34000 * x) - (((34000 * x) / 10) * 5);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Iphone 12  " << A << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += A;
                        c += A;
                    }
                }
                if (number == 2)
                {
                    if (discount == 1) 
                    {
                        int B = (25000 * x) - (((25000 * x) / 10) * 1);
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Ipad 9 =  " << B << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += B;
                        c += B;
                    }
                    if (discount == 2)
                    {
                        int B = (25000 * x) - (((25000 * x) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Ipad 9 = " << B << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += B;
                        c += B;
                    }
                    if (discount == 3)
                    {
                        int B = (25000 * x) - (((25000 * x) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Ipad 9 = " << B << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += B;
                        c += B;
                    }
                    if (discount == 5)
                    {
                        int B = (25000 * x) - (((25000 * x) / 10) * 5);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Ipad 9 = " << B << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += B;
                        c += B;
                    }
                }
                if (number == 3)
                {
                    if (discount == 1)
                    {
                        int C = (5000 * x) - (((5000 * x) / 10) * 1);

                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Appple AirPods 2 = " << C << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += C;
                        c += C;
                    }
                    if (discount == 2)
                    {
                        int C = (5000 * x) - (((5000 * x) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Appple AirPods 2 = " << C << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += C;
                        c += C;
                    }
                    if (discount == 3)
                    {
                        int C = (5000 * x) - (((5000 * x) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Appple AirPods 2 = " << C << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += C;
                        c += C;
                    }
                    if (discount == 5)
                    {
                        int C = (5000 * x) - (((5000 * x) / 10) * 5);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Appple AirPods 2 = " << C << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += C;
                        c += C;
                    }
                }
                if (number == 4)
                {
                    if (discount == 1)
                    {
                        int D = (60897 * x) - (((60897 * x) / 10) * 1);

                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    MacBook 10 = " << D << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += D;
                        c += D;
                    }
                    if (discount == 2)
                    {
                        int D = (60897 * x) - (((60897 * x) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    MacBook 10 = " << D << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += D;
                        c += D;
                    }
                    if (discount == 3)
                    {
                        int D = (60897 * x) - (((60897 * x) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    MacBook 10 = " << D << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += D;
                        c += D;
                    }
                    if (discount == 5)
                    {
                        int D = (60897 * x) - (((60897 * x) / 10) * 5);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    MacBook 10 = " << D << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += D;
                        c += D;
                    }
                }
                if (number == 5)
                {
                    if (discount == 1)
                    {
                        int E = (19000 * x) - (((19000 * x) / 10) * 1);

                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Watch 7 = " << E << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += E;
                        c += E;
                    }
                    if (discount == 2)
                    {
                        int E = (19000 * x) - (((19000 * x) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Watch 7 = " << E << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += E;
                        c += E;
                    }
                    if (discount == 3)
                    {
                        int E = (19000 * x) - (((19000 * x) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Watch 7 = " << E << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += E;
                        c += E;
                    }
                    if (discount == 5)
                    {
                        int E = (19000 * x) - (((19000 * x) / 10) * 5);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Watch 7 = " << E << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += E;
                        c += E;
                    }
                }
                if (number == 6)
                {
                    if (discount == 1)
                    {
                        int F = (8000 * x) - (((8000 * x) / 10) * 1);

                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Pencil 2 = " << F << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += F;
                        c += F;
                    }
                    if (discount == 2)
                    {
                        int F = (8000 * x) - (((8000 * x) / 10) * 2);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Pencil 2 = " << F << " GRN " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += F;
                        c += F;
                    }
                    if (discount == 3)
                    {
                        int F = (8000 * x) - (((8000 * x) / 10) * 3);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Pencil 2 = " << F << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += F;
                        c += F;
                    }
                    if (discount == 5)
                    {
                        int F = (8000 * x) - (((8000 * x) / 10) * 5);

                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "    Apple Pencil 2 = " << F << " GRN " << endl;
                         SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        b += F;
                        c += F;
                    }
                }
            }
        }break;
        case '3':
        {
            int l = 0;
            int l1 = 0;
            int l2 = 0;
            int x;
            int y;
            cout << endl;
            cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::: - LEVEL 1 - :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
            {
            cout << endl;

                for (int i = 0; i < 5; i++) {

                    srand(time(0));
                    int a = rand() % 10;
                    int b = rand() % 10;
                    int AB = a * b;

                    cout << "  " << a << " * " << b << " = ";
                    cin >> y;
                    if (a * b != y) 
                    {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                        cout << "  The answer is not corect ! " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "  Right answer : ";
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        cout << a << " * " << b << " = " << AB << endl;
                    }
                    else if (a * b == y) {
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                        cout << "  True ! " << endl;
                        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                        l++;
                    }
                }
                if (l <= 0)
                {
                    cout << "  Your score is 0 points ! " << endl;
                }
                else if (l >= 2 && l < 5)
                {
                    cout << "  Your scored : " << l << " points " << endl;
                }
                else if (l == 1) 
                {
                    cout << "  Your scored : " << l << " point " << endl;
                }
                else if (l >= 5) 
                {
                    cout << "  Your scored : " << l << " points " << endl;
                }
            }

            cout << "  Do you want to continue? " << endl;
            cout << "  If yes, then press anynnumber! " << endl;
            cout << "  0 - will complete ";

            cin >> x;
            system("cls");
            if (x != 0)
            {
                cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::: - LEVEL 2 - :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
                {
                    for (int i = 0; i < 7; i++)
                    {
                        srand(time(0));
                        int a = rand() % 10;
                        int b = rand() % 10;
                        int AB = a * b;

                        cout << "  " << a << " * " << b << " = ";
                        cin >> y;

                        if (a * b != y)
                        {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                            cout << "  The answer is not corect ! " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << "  Right answer : ";
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            cout << a << " * " << b << " = " << AB << endl;
                        }
                        else if (a * b == y) {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << " True ! " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            l1++;
                        }
                    }
                    if (l1 <= 0)
                    {
                        cout << "  Your score is 0 points ! " << endl;
                    }
                    else if (l1 >= 2 && l1 < 5)
                    {
                        cout << "  Your scored : " << l1 << " points " << endl;
                    }
                    else if (l1 == 1)
                    {
                        cout << "  Your scored : " << l1 << " point " << endl;
                    }
                    else if (l1 >= 5)
                    {
                        cout << "  Your scored : " << l1 << " points " << endl;
                    }
                }
            }
            else
            {
                if (l <= 0)
                {
                    cout << "  You scored is 0 point for the first level " << endl;
                }
                else if (l >= 2 && l < 5) {
                    cout << "  You scored for the first level : " << l << " points " << endl;
                }
                else if (l == 1) {
                    cout << "  You scored for the first level : " << l << " point " << endl;
                }
                else if (l >= 5) {
                    cout << "  You scored for the first level : " << l << " points " << endl;
                }
                break;
            }

            cout << "  Do you want to continue? " << endl;
            cout << "  If yes, then press anynnumber! " << endl;
            cout << "  0 - will complete ";

            cin >> x;
            system("cls");
            if (x != 0) 
            {
                cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::: - LEVEL 3 - :::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl; 
                {
                    for (int i = 0; i < 10; i++) {
                        srand(time(0));
                        int a = rand() % 10;
                        int b = rand() % 10;
                        int AB = a * b;

                        cout << "  " << a << " * " << b << " = ";
                        cin >> y;
                        if (a * b != y)
                        {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 4));
                            cout << "  The answer is not corect ! " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << "  Right answer : ";
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
                            cout << a << " * " << b << " = " << AB << endl;
                        }
                        else if (a * b == y) {
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
                            cout << " True ! " << endl;
                            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));

                            l2++;
                        }
                    }
                    if (l2 <= 0)
                    {
                        cout << "  Your score is 0 points ! " << endl;
                    }
                    else if (l2 >= 2 && l1 < 5)
                    {
                        cout << "  Your scored : " << l2 << " points " << endl;
                    }
                    else if (l2 == 1)
                    {
                        cout << "  Your scored : " << l2 << " point " << endl;
                    }
                    else if (l2 >= 5)
                    {
                        cout << "  Your scored : " << l2 << " points " << endl;
                    }
                }
                system("cls");
            }
            else
            {
                if (l <= 0)
                {
                    cout << "  You scored is 0 point for the first level " << endl;
                }
                else if (l >= 2 && l < 5)
                {
                    cout << "  You scored for the first level : " << l << " points " << endl;
                }
                else if (l == 1) 
                {
                    cout << "  You scored for the first level : " << l << " point " << endl;
                }
                else if (l >= 5)
                {
                    cout << "  You scored for the first level : " << l << " points " << endl;
                }
                if (l1 <= 0)
                {
                    cout << "  You scored is 0 point for the second level " << endl;
                }
                else if (l1 >= 2 && l1 < 5) {
                    cout << "  You scored for the second level : " << l1 << " points " << endl;
                }
                else if (l1 == 1) {
                    cout << "  You scored for the second level : " << l1 << " point " << endl;
                }
                else if (l1 >= 5) {
                    cout << "  You scored for the second level : " << l1 << " points " << endl;
                }
                break;
            }
            {
                if (l <= 0)
                {
                    cout << "  You scored is 0 point for the first level " << endl;
                }
                else if (l >= 2 && l < 5)
                {
                    cout << "  You scored for the first level : " << l << " points " << endl;
                }
                else if (l == 1)
                {
                    cout << "  You scored for the first level : " << l << " point " << endl;
                }
                else if (l >= 5)
                {
                    cout << "  You scored for the first level : " << l << " points " << endl;
                }
                
                if (l1 <= 0)
                {
                    cout << "  You scored is 0 point for the second level " << endl;
                }
                else if (l1 >= 2 && l1 < 5) {
                    cout << "  You scored for the second level : " << l1 << " points " << endl;
                }
                else if (l1 == 1) {
                    cout << "  You scored for the second level : " << l1 << " point " << endl;
                }
                else if (l1 >= 5) {
                    cout << "  You scored for the second level : " << l1 << " points " << endl;
                }
                
                if (l2 <= 0)
                {
                    cout << "  You scored is 0 point for the third level " << endl;
                }
                else if (l2 >= 2 && l2 < 5) {
                    cout << "  You scored for the third level : " << l2 << " points " << endl;
                }
                else if (l2 == 1) {
                    cout << "  You scored for the third level : " << l2 << " point " << endl;
                }
                else if (l2 >= 5) {
                    cout << "  You scored for the third level : " << l2 << " points " << endl;
                }
            }
        }break;
        case '4':
        {
            int a, b, c = 9;
            int center = c / 2;
            cout << endl;
            for (a = 0; a < c; a++)
            {
                for (b = 0; b < c; b++)
                {
                    if (a <= center)
                    {
                        if (b >= center - a && b <= center + a)
                            cout << "* ";
                        else
                            cout << "  ";
                    }
                    else
                    {
                        if (b >= center + a - c + 1 && b <= center - a + c - 1)
                            cout << "* ";
                        else
                            cout << "  ";
                    }
                }
                cout << endl;
            }
        }break;
        }
    } while (switch_on != '0');
    return 0;
}
