#include <iostream>
using namespace std;

int main()
{
		cout << "\t\t\t#>---------<MENU>---------<#" << endl;
		cout << "\t\t\t|        1 - Case 1        |" << endl;
		cout << "\t\t\t|        2 - Case 2        |" << endl;
		cout << "\t\t\t|        3 - Case 3        |" << endl;
		cout << "\t\t\t|        1 - Case 4        |" << endl;
		cout << "\t\t\t|        2 - Case 5        |" << endl;
		cout << "\t\t\t|        3 - Case 6        |" << endl;
		cout << "\t\t\t|        1 - Case 7        |" << endl;
		cout << "\t\t\t#>-------------------------#" << endl;
		cout << "\t\t\t|          Exit - 0        |" << endl;
		cout << "\t\t\t#>------------------------<#" << endl;
		cout << "\t\t\tEnter task =>";
		int number;
		cin >> number;
		system("cls");

		switch (number)
		{
		case 1: // Користувач вводить число. Визначити, чи є воно парним.
		{
			int number;
			cout << "Enter number ->";
			cin >> number;
			(number % 2 == 0) ? cout << "Number is true!" << endl : cout << "Number is false!" << endl;

		}break;
		{
		case 2: // Користувач вводить два числа. Вивести на екран менше з цих чисел.
		{
			int X;
			int Y;
			cout << "Enter number X ->" << endl;
			cin >> X;
			cout << "Enter number Y ->" << endl;
			cin >> Y;
			(X > Y) ? cout << "Y is less!" << endl : cout << endl;
			(Y > X) ? cout << "X is less!" << endl : cout << endl;
		}break;
		{
		case 3: // Користувач вводить число. Визначити, додатне це число, від'ємне чи дорівнює нулю.
			int(number);
			cout << "Enter number ->" << endl;
			cin >> number;
			(number > 0) ? cout << "Positive Number!" << endl : cout << endl;
			(number < 0) ? cout << "Negative Number!" << endl : cout << endl;
			(number == 0) ? cout << "Number = 0 !" << endl : cout << endl;
		}break;
		{
		case 4: // Користувач вводить два числа. Визначити, чи рівні ці числа, 
			//і якщо ні, вивести їх на екран за зростанням.
			int X;
			int Y;
			cout << "Enter one number ->" << endl;
			cin >> X;
			cout << "Enter two number ->" << endl;
			cin >> Y;
			(X == Y) ? cout << "These numbers are the same! " << endl : cout << endl;
			if (X < Y)
			{
				cout << X;
				cout << ", ";
				cout << Y;
			}
			else if (Y < X)
			{
				cout << Y;
				cout << ", ";
				cout << X;
			}break;
			{
		case 5: //Користувач з клавіатури вводить 5 оцінок студента.
			//Визначити, чи допущений студент до іспиту.
			//Студент отримує допуск, якщо його середній бал 4 і вище.
			int A;
			int B;
			int C;
			int D;
			int E;
			cout << "Enter the first mark ->" << endl;
			cin >> A;
			cout << "Enter the second mark ->" << endl;
			cin >> B;
			cout << "Enter the third mark ->" << endl;
			cin >> C;
			cout << "Enter the fivth mark ->" << endl;
			cin >> D;
			cout << "Enter the sixth mark ->" << endl;
			cin >> E;
			if ((A + B + C + D + E) / 5 >= 4)
			{
				cout << endl;
				cout << endl;
				cout << "Arithmetic mean";
				cout << ":";
				cout << " ";
				cout << ((A + B + C + D + E) / 5);
				cout << " ";
				cout << "-";
				cout << " ";
				cout << "The Student is admitted to the exams!!! " << endl;
			}
			else if ((A + B + C + D + E) / 5 <= 4)
			{
				cout << endl;
				cout << endl;
				cout << "Arithmetic mean";
				cout << ":";
				cout << " ";
				cout << ((A + B + C + D + E) / 5);
				cout << " ";
				cout << "-";
				cout << " ";
				cout << "The Student not admitted to the exams!!! " << endl;
			}
			}break;
			{
		case 6: // Користувач вводить з клавіатури число. 
			// Якщо воно парне, помножити його на три, інакше — поділити на два.
			// Результат вивести на екран.

			int X;
			cout << "Enter number ->" << endl;
			cin >> X;
			if (X % 2 == 0)
			{
				cout << endl;
				cout << (X * 3);
			}
			else if (X / 2 != 0)
			{
				cout << endl;
				cout << (X / 2);
			}
			}break;
			{
		case 7: // Написати програму-калькулятор. 
			// Користувач вводить два числа і вибирає арифметичну дію.
			// Вивести на екран результат.
			int X;
			int Y;
			int E;
			char d;
			cout << "Enter number -> ";
			cin >> X;
			cout << "Enter sign -> ";
			cin >> d;
			cout << "Enter number -> ";
			cin >> Y;

			if (d == '+')
				E = Y + X;
			if (d == '-')
				E = X - Y;
			if (d == '*')
				E = Y * X;
			if (d == '/')
				E = X / Y;
			cout << endl;
			cout << "Result: " << E << endl;
			return 0;
			}break;
		}
		}
		}
		return 0;
	}