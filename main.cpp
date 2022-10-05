#include <iostream>
using namespace std;

int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|        1 - Case 1        |" << endl;
    cout << "\t\t\t|        2 - Case 2        |" << endl;
    cout << "\t\t\t|        3 - Case 3        |" << endl;
    cout << "\t\t\t|        4 - Case 4        |" << endl;
    cout << "\t\t\t|        5 - Case 5        |" << endl;
    cout << "\t\t\t|        6 - Case 6        |" << endl;
    cout << "\t\t\t#>-------------------------#" << endl;
    cout << "\t\t\t|          Exit - 0        |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\tEnter task =>";
    int number;
    cin >> number;
    system("cls");

    switch (number)
    {
    case 1: /*Вивести на екран усі числа від нуля до введеного користувачем числа.*/
    {
        int count = 0;
        int number;
        cin >> number;
        /* while (count != number)
         {
          cout << "Enter number -> " << endl;
          cout << "NUMBER =" << count << endl;
          count++;
         }*/
         //Вивести на екран усі числа від нуля до введеного користувачем числа. 
        do
        {
            cout << "Enter Number ->" << endl;
            cout << "Number =" << count << endl;
            count++;

        } while (count != number);
    }break;
    case 2:    // Користувач вводить дві межі діапазону, вивести на екран усі числа з цього діапазону.  
        // Передбачити,щоб користувач міг вводити межі діапазону в довільному порядку. 
        /* ■ вивести всі парні числа з діапазону.
         ■ вивести всі непарні числа з діапазону.
           ■ вивести всі числа, кратні семи.*/
    {

        int start;
        int end;
        cout << "Enter Start -> ";
        cin >> start;
        cout << "Enter end -> ";
        cin >> end;
        if (start > end)
        {
            int temp = start;
            start = end;
            end = temp;
        }
        int i = start;
        do
        {
            if (i % 2 == 0)
            {
                cout << "Even numbers : " << i << endl;
            }
            if (i % 2 != 0)
            {
                cout << "Odd numbers : " << i << endl;
            }
            if (i % 7 == 0)
            {
                cout << "Multiples of seven : " << i << endl;
            }
            i++;
        } while (i <= end);

    }break;
    case 3: // Користувач вводить дві межі діапазону. Порахувати суму всіх чисел діапазону. 
    {
        int start;
        int end;
        cout << "Enter Start -> ";
        cin >> start;
        cout << "Enter end -> ";
        cin >> end;
        if (start > end)
        {
            int temp = start;
            start = end;
            end = temp;
        }
        int i = start;
        int sum = 0;
        do {
            sum += i;
            i++;

        } while (i <= end);
        cout << "Sum of numbers : " << sum << endl;
    } break;
    case 4:
    { // Користувач з клавіатури вводить числа. Порахувати їхню суму і вивести на екран, щойно користувач введе нуль. 

        int x;
        int y;
        int old;
        long long sum = 0;
        char sign;
        do
        {
            system("cls");
            cout << "Enter x -> ";
            cin >> x;
            cout << "Enter y -> ";
            cin >> y;
            old = sum;
            cout << "Sum = " << old << " + (" << x << "+" << y;
            sum += x + y;
            cout << ") = " << sum << "" << endl;
            cout << "Enter sign -> ";
            cin >> sign;
        } while (sign != '0');
        system("cls");
        cout << "Sum = " << sum << endl;

        system("pause");
    }break;

    case 5: /*Написати гру «Вгадай число».Програма
            загадує число в діапазоні від 1 до 500. Користувач намагається його вгадати.Після кожної спроби програма
            видає підказки, чи його число є більшим або меншим за
            задумане.У кінці програма видає статистику : за скільки
            спроб угадано число, скільки часу це зайняло.Передбачити вихід за допомогою 0, у разі, якщо користувачеві
            набридло вгадувати число.*/
    {
        int comp();
        {
            srand(time(0));
            int i = rand() % 10;
            clock_t t = clock();
            int sun = 1;
            int j;
            char sign;
            cout << "  I made up a number, which one? ";
            do
            {
                cin >> j;

                if (i > j)
                {

                    cout << "          My number is more! " << endl;
                    cout << "  Enter any number to continue or 0 to end the game : ";
                    cin >> sign;
                }

                else if (i < j)
                {

                    cout << "          My number is less! " << endl;
                    cout << "  Enter any number to continue or 0 to end the game : ";
                    cin >> sign;
                }

                else if (i = j)
                {
                    cout << endl;
                    cout << "  Congretulations, you guessed it !!! " << endl;
                    cout << endl;

                    int time = (clock() - t) / CLOCKS_PER_SEC;

                    cout << "  You guessed the number for : " << time << " s " << endl;
                    cout << "  Number of attempts : " << sun << endl;
                    break;
                }
                if (sign != '0')
                {
                    cout << endl;
                    cout << "  We continue " << endl;
                    cout << endl;
                }
                else {
                    break;
                }
            } while (sun += 1);
        }break;
    case 6: /*Написати програму — конвертер валют.Реалізувати спілкування з користувачем через меню.*/
    {
        cout << "                         #===========MENU===========#" << endl;
        cout << "                          |  1.     UAH - USD       |" << endl;
        cout << "                          |  2.     USD - UAH       |" << endl;
        cout << "                          |  3.     UAH - EUR       |" << endl;
        cout << "                          |  4.     EUR - UAH       |" << endl;
        cout << "                          |  5.     USD - EUR       |" << endl;
        cout << "                          |  6.     EUR - USD       |" << endl;
        cout << "                         #==========================#" << endl;


        int numbr;
        cout << endl;
        cin >> numbr;

        int dolar = 36.90;
        int eurousd = 0.96;

        int euro = 35.61;
        int usdeuro = 1.04;

        int money;
        char sign;

        cout << fixed;
        cout.precision(3);

        switch (numbr)
        {
        case 1: {
            do
            {
                cout << "  Enter UAN to convert to USD : " << endl;
                cout << "        ";
                cin >> money;
                cout << "        " << money << " UAN " << " > " << money / 36.90 << " USD " << endl;
                cout << "  Enter any number to continue or press '1' to exit :  ";
                cin >> sign;
            } while (sign != '1');
        }break;
        case 2: {
            do
            {
                cout << "  Enter USD to convert to UAN : " << endl;
                cout << "        ";
                cin >> money;
                cout << "        " << money << " USD " << " - " << money * 36.90 << " UAN " << endl;
                cout << "  Enter any number to continue or press '1' to exit :  ";
                cin >> sign;
            } while (sign != '1');
        }break;
        case 3: {
            do
            {
                cout << "  Enter UAN to convert to Euro : " << endl;
                cout << "        ";
                cin >> money;
                cout << "        " << money << " UAN " << " - " << money / 35.61 << " Euro " << endl;
                cout << "  Enter any number to continue or press '1' to exit :  ";
                cin >> sign;
            } while (sign != '1');
        }break;
        case 4:
        {
            do
            {
                cout << "  Enter Euro to convert to UAN : " << endl;
                cout << "        ";
                cin >> money;
                cout << "        " << money << " Euro " << " - " << money * 35.61 << " UAN " << endl;
                cout << "  Enter any number to continue or press '1' to exit :  ";
                cin >> sign;
            } while (sign != '1');
        }break;
        case 5: {
            do
            {
                cout << "  Enter USD to convert to Euro : " << endl;
                cout << "        ";
                cin >> money;
                cout << "        " << money << " USD " << " - " << money / 1.04 << " Euro " << endl;
                cout << "  Enter any number to continue or press '1' to exit :  ";
                cin >> sign;
            } while (sign != '1');
        }break;
        case 6:
        {
            do
            {
                cout << "  Enter Euro to convert to USD : " << endl;
                cout << "        ";
                cin >> money;
                cout << "        " << money << " Euro " << " - " << money * 0.96 << " USD " << endl;
                cout << "  Enter any number to continue or press '1' to exit :  ";
                cin >> sign;
            } while (sign != '1');
        }break;
        }
    }break;
    }
    }
	return 0;
}