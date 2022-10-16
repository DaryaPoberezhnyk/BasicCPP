#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char switch_on;
	do
	{
		system("cls");
		cout << "#>----------<MENU>----------<#" << endl;
		cout << "|         1 - Case 1         |" << endl;
		cout << "|         2 - Case 2         |" << endl;
		cout << "|         3 - Case 3         |" << endl;
		cout << "|         4 - Case 4         |" << endl;
		cout << "|         5 - Case 5         |" << endl;
		cout << "#>--------------------------<#" << endl;
		cout << "|         0 - Exit           |" << endl;
		cout << "#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			do
			{

				cout << "#>--------------------------<MENU>--------------------------<#" << endl;
				cout << "|         1 - Горизонтальна л1н1я виводиться швидко          |" << endl;
				cout << "|         2 - Горизонтальна л1н1я виводиться нормально       |" << endl;
				cout << "|         3 - Горизонтальна л1н1я виводиться пов1льно        |" << endl;
				cout << "|         4 - Вертикальна л1н1я виводиться швидко            |" << endl;
				cout << "|         5 - Вертикальна л1н1я виводиться нормально         |" << endl;
				cout << "|         6 - Вертикальна л1н1я виводиться пов1льно          |" << endl;
				cout << "#>----------------------------------------------------------<#" << endl;
				cout << "|         0 - Exit                                           |" << endl;
				cout << "#>----------------------------------------------------------<#" << endl;
				switch_on = _getch();
				system("cls");
				switch (switch_on)
				{
					int s;
					int sign;
					uint32_t millisecs;
				case '1':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << " " << sign;
						Sleep(15);
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				case '2':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << " " << sign;
						Sleep(100);
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				case '3':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << " " << sign;
						Sleep(500);
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				case '4':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << " " << sign << endl;
						Sleep(15);
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				case '5':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << " " << sign << endl;
						Sleep(100);
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				case '6':
				{
					cout << "  Обер1ть символ яким буде намальована л1н1я : ";
					cin >> sign;
					cout << "  Введ1ть довжину л1н11 : ";
					cin >> s;
					cout << endl;
					for (int j = 0; j < s; j++)
					{
						HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(handle, WORD(0 << 4 | 2));
						cout << " " << sign << endl;
						Sleep(500);
					}
					cout << endl;
					system("pause");
					system("color 0F");
				}break;
				}
				system("pause");
			} while (true);
		}break;
		case '2':
		{

			int one, two, c, d, e, f, g, h, r1, r2;
			int x = 0;
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- | Гра Кубики | -------------------------------------------------# " << endl << endl;
			cout << " #--------------------------------------------------- |  1 Р1вень  | -------------------------------------------------# " << endl;
			/*cout << "  Do you want to continue? " << endl;
			cout << "  If yes, then press anynnumber! " << endl;
			cout << "  0 - will complete ";
			cin >> x;*/
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " Перший кидає користувач ! " << endl;
			cout << " Натисн1ть будь-яке число для того  щоб зробити кидок ! ";
			cin >> x;
			for (int i = 0; i < 5; i++)
			{
				srand(time(0));
				int a = rand() % 10;
				int b = rand() % 10;
				c = a + b;
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
				cout << endl;
				cout << " Ваш1 числа : ";
				cout << a << ", " << b << endl;
				break;
			}
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << endl;
			cout << " Дал1 кидає програма ! " << endl;
			cout << " Натисн1ть будь-яке число для того  щоб зробити кидок ! ";
			cin >> x;
			for (int i = 0; i < 5; i++)
			{
				srand(time(0));
				int a = rand() % 10;
				int b = rand() % 10;
				d = a + b;
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
				cout << endl;
				cout << " Ваш1 числа : ";
				cout << a << ", " << b << endl;
				break;
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
			cout << " Сума чисел з кубик1в першого раунда користувача : ";
			cout << c << endl;
			cout << " Сума чисел з кубик1в першого раунда програми : ";
			cout << d << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- |  2 Р1вень  | -------------------------------------------------# " << endl;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " Перший кидає користувач ! " << endl;
			cout << " Натисн1ть будь-яке число для того  щоб зробити кидок ! ";
			cin >> x;
			for (int i = 0; i < 5; i++)
			{
				srand(time(0));
				int a = rand() % 10;
				int b = rand() % 10;
				e = a + b;
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
				cout << endl;
				cout << " Ваш1 числа : ";
				cout << a << ", " << b << endl;
				break;
			}
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << endl;
			cout << " Дал1 кидає програма ! " << endl;
			cout << " Натисн1ть будь-яке число для того  щоб зробити кидок ! ";
			cin >> x;
			for (int i = 0; i < 5; i++)
			{
				srand(time(0));
				int a = rand() % 10;
				int b = rand() % 10;
				f = a + b;
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
				cout << endl;
				cout << " Ваш1 числа : ";
				cout << a << ", " << b << endl;
				break;
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
			cout << " Сума чисел з кубик1в другого раунда користувача : ";
			cout << e << endl;
			cout << " Сума чисел з кубик1в другого раунда програми : ";
			cout << f << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- |  3 Р1вень  | -------------------------------------------------# " << endl;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " Перший кидає користувач ! " << endl;
			cout << " Натисн1ть будь-яке число для того  щоб зробити кидок ! ";
			cin >> x;
			for (int i = 0; i < 5; i++)
			{
				srand(time(0));
				int a = rand() % 10;
				int b = rand() % 10;
				g = a + b;
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
				cout << endl;
				cout << " Ваш1 числа : ";
				cout << a << ", " << b << endl;
				break;
			}
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << endl;
			cout << " Дал1 кидає програма ! " << endl;
			cout << " Натисн1ть будь-яке число для того  щоб зробити кидок ! ";
			cin >> x;
			for (int i = 0; i < 5; i++)
			{
				srand(time(0));
				int a = rand() % 10;
				int b = rand() % 10;
				h = a + b;
				HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
				cout << endl;
				cout << " Ваш1 числа : ";
				cout << a << ", " << b << endl;
				break;
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
			cout << " Сума чисел з кубик1в третього раунда користувача : ";
			cout << g << endl;
			cout << " Сума чисел з кубик1в третього раунда програми : ";
			cout << h << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- | Результати | -------------------------------------------------# " << endl;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			r1 = c + e + g;
			r2 = d + f + h;
			cout << " Сума бал1в кубик1в за три раунди у користувача складає : ";
			cout << r1 << " Бал1в !" << endl;
			cout << " Сума бал1в кубик1в за три раунди у програми складає : ";
			cout << r2 << " Бал1в !" << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
			if (r1 > r2)
			{
				cout << " Перемогу одержав користувач !!!" << endl;
			}
			else if (r2 > r1)
			{
				cout << " Перемогу одержала програма !!!" << endl;
			}
			system("pause");
			system("color 0F");
		}break;
		case '3':
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			srand(time(0));
			const uint32_t size = 20;
			long long arr[size];

			for (int i = 0; i < size; i++)
			{
				arr[i] = -5 + rand() % 10;
			}
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << "  ";
			}
			cout << endl;

			long long max, min;
			max = min = arr[0];

			for (size_t i = 0; i < size; i++)
			{
				if (min > arr[i])
				{
					min = arr[i];
				}
				if (max < arr[i])
				{
					max = arr[i];
				}
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
			cout << " Min : " << min << endl;
			cout << " Max : " << max << endl << endl;
			system("pause");
			system("color 0F");
		}break;
		case '4':
		{


			const uint32_t a = 12;
			int x;
			long long arrA[a];

			for (int i = 0; i < a; i++)
			{
				if (i == 0) {
					cout << " С1чень : ";
				}
				if (i == 1) {
					cout << " Лютий : ";
				}
				if (i == 2) {
					cout << " Березень : ";
				}
				if (i == 3) {
					cout << " Кв1тень : ";
				}
				if (i == 4) {
					cout << " Травень : ";
				}
				if (i == 5) {
					cout << " Червень : ";
				}
				if (i == 6) {
					cout << " Липень : ";
				}
				if (i == 7) {
					cout << " Серпень : ";
				}
				if (i == 8) {
					cout << " Вересень : ";
				}
				if (i == 9) {
					cout << " Жовтень : ";
				}
				if (i == 10) {
					cout << " Листопад : ";
				}
				if (i == 11) {
					cout << " Грудень : ";
				}

				cin >> x;
				arrA[i] = x;
			}

			cout << endl;

			int b, c, g;

			cout << " Введ1ть першу цифру д1апазону : ";
			cin >> b;
			cout << endl;
			cout << " Введ1ть другу цифру д1апазону : ";
			cin >> c;
			cout << endl;
			/*for (int i = 0; i < b; i++)
			{
				if (b < 0)
				{
					cout << " Немає такого м1сяця !" << endl;
					cout << " Введ1ть цифру > 0 або < 12 : ";
					cin >> b;
					cout << endl;
				}
				else if (b > 12)
				{
					cout << " Немає такого м1сяця !" << endl;
					cout << " Введ1ть цифру > 0 або < 12 : ";
					cin >> b;
					cout << endl;
				}
				break;
			}
			for (int i = 0; i < c; i++) {

			    if (c > 12)
				{
					cout << " Немає такого м1сяця !" << endl;
					cout << " Введ1ть цифру > 0 або < 12 : ";
					cin >> c;
					cout << endl;
				}
				else if (c < 0)
				{
					cout << " Немає такого м1сяця !" << endl;
					cout << " Введ1ть цифру > 0 або < 12 : ";
					cin >> c;
					cout << endl;
				}
			}*/
			if (b > c)
			{
				int temp = b;
				b = c;
				c = temp;
			}
			int max = arrA[b - 1];
			int min = arrA[b - 1];
			for (int j = b - 1; j <= c - 1; j++)

			{
				if (min > arrA[j])
				{
					min = arrA[j];
				}

				if (max < arrA[j]) {

					max = arrA[j];
				}

			}
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " Min: " << min << endl;
			cout << " Max: " << max << endl;
			system("pause");
			system("color 0F");
		}break;
		case '5':
		{
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			const uint32_t a = 20;
			long long arr[a];
			for (int i = 0; i < a; i++) {
				arr[i] = rand() % 20 - 5;
			}
			for (int i = 0; i < a; i++) 
			{
				cout << arr[i] << " ";
			}
			int sum = 0;
			for (int i = 0; i < a; i++)
			{
				if (arr[i] < 0)
				{
					sum += arr[i];
				}
			}
			cout << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
			cout << " Сума в1д'ємних елемент1в : " << sum << endl;
			int max = 0, min = 0, e = 1;
			for (int i = 1; i < a; i++) 
			{
				if (arr[i] < arr[min])
					min = i;
				if (arr[i] > arr[max])
					max = i;
			}
			for (int i = max + 1; i < min; i++) 
			{
				e *= arr[i];
			}
			cout << " Добуток елемент1в, що розташован1 м1ж min 1 maх елементами : " << e << endl;
			int sume = arr[1];
			for (int i = 1; i < a; i++)
			{
				if (i % 2 != 0)
				{
					sume *= arr[i];
				}
			}
			cout << " Добуток елемент1в з парними номерами : " << sume << endl;
			int h = 0;

			bool started = false;

			for (int i = 0; i < a; i++) {

				if (arr[i] < 0) 
				{
					if (!started)
					{
						h = 0;
						started = true;
					}
					else 
					{
						sum += h;
						h = arr[i];
					}
				}
				else
					h += arr[i];
			}
			cout << " Суму елемент1в, що розташован1 м1ж першим 1 останн1м в1д'ємними елементами : " << sum << endl;
			system("pause");
			system("color 0F");
		}break;
		}
	} while (true);
	return 0;
}