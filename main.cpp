#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <math.h>
#define print(value) cout << value
#define println(value) cout << value << endl;
#define endLine cout << endl;
#define sum(x, y) x>y
#define sum1(x, y) x<y
#define sum0(x, y) x==y
#define sum2(x) x*x
#define sum3(x,y) pow(x,y)
#define sum4(x) x%2==0
#define sum5(x) x%2!=0

using namespace std;

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
            int x, y;
            cout << " Enter first number : ";
            cin >> x;
            cout << " Enter second number : ";
            cin >> y;
            if (sum(x, y))
            {
                cout << " " << x << " > " << y << endl;
            }
            if (sum1(x, y))
            {
                cout << " " << y << " > " << x << endl;
            }
            if (sum(x, y))
            {
                cout << " " << y << " < " << x << endl;
            }
            if (sum1(x, y))
            {
                cout << " " << x << " < " << y << endl;
            }
            if (sum0(x, y))
            {
                cout << " " << x << " = " << y << endl;
            }
            return 0;
        }break;
        case '2':
        {
            int x;
            cout << " Enter number : ";
            cin >> x;
            cout << " " << x << "^2 = " << sum2(x) << endl;

            return 0;
        }break;
        case '3':
        {
            int x, y;
            cout << " Enter number : ";
            cin >> x;
            cout << " Enter power of number: ";
            cin >> y;
            cout << " " << x << "^" << y << " = " << sum3(x, y) << endl;

            return 0;
        }break;
        case '4':
        {

            int x;
            cout << " Enter number : ";
            cin >> x;
            if (sum4(x))
            {
                cout << " Even number " << endl;
            }
            if (sum5(x))
            {
                cout << " Odd number " << endl;
            }
            system("pause");
        }break;
        }
    } while (true);

    return 0;
}