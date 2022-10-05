#include <iostream> 
using namespace std;


int main()
{
    cout << "\t\t\t#>---------<MENU>---------<#" << endl;
    cout << "\t\t\t|        1 - Case 1        |" << endl;
    cout << "\t\t\t|        2 - Case 2        |" << endl;
    cout << "\t\t\t|        3 - Case 3        |" << endl;
    cout << "\t\t\t|        4 - Case 4        |" << endl;
    cout << "\t\t\t#>-------------------------#" << endl;
    cout << "\t\t\t|          Exit - 0        |" << endl;
    cout << "\t\t\t#>------------------------<#" << endl;
    cout << "\t\t\tEnter task =>";
    int number;
    cin >> number;
    system("cls");

    switch (number)
    {
    case 1:/* Напишіть програму, яка обчислює суму цілих
              чисел від а до 500 (значення a вводиться з клавіатури)*/
    {
        int a;
        int(500);
        cout << "Enter a -> ";
        cin >> a;
        int i = a;
        int sum = 0;
        do {
            sum += i;
            i++;

        } while (i <= 500);
        cout << "Sum of numbers : " << sum << endl;


    }break;
    case 2: /*Напишіть програму, яка запитує два цілих
             числа x і y, після чого обчислює і виводить значення x у
             степені y*/
    {
        int x;
        int y;

        cout << "Enter x -> ";
        cin >> x;
        cout << "Enter y -> ";
        cin >> y;
        cout << "Result x^y : ";
        cout << pow(x, y);
    }break;
    case 3:/* Знайти середнє арифметичне всіх цілих чисел
               від 1 до 1000*/
    {
        int a;
        cout << "Arithmetic mean from 1 to 1000 : ";
        int i = 1;
        int sum = 0;
        do {
            sum += i;
            i++;

        } while (i <= 1000);
        a = sum / 1000;
        cout << a;
    }break;
    case 4: /*Знайти здобуток усіх цілих чисел від a до 20
            (значення a вводиться з клавіатури : 1 <= a <= 20)*/
    {
        long long p = 1;
        int a;
        int i;
        cout << " Enter a -> ";
        cin >> a;
        do {
            for (int i = a; i <= 20; i++)
                p *= i;
        } while (p <= 20);
        cout << "Product of numbers : " << p << endl;
    }break;
    case 5:/* Написати програму, яка виводить на екран
               таблицю множення на k, де k — номер варіанта.Наприклад, для 7 - го варіанта :
               7 x 2 = 14;
               7 x 3 = 21.*/
    {

        int k;
        int v = 1;
        cout << " Enter the variant number : ";
        cin >> k;
        cout << endl;
        do {
            for (int v = 1; v <= 10; v++)
                cout << "   " << k << " * " << v << " = " << v * k << endl;
            break;
        } while (v <= 10);
    }break;
    return 0;
    }
}