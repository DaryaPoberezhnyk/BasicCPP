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
				cout << "|         1 - ������������� �1�1� ���������� ������          |" << endl;
				cout << "|         2 - ������������� �1�1� ���������� ���������       |" << endl;
				cout << "|         3 - ������������� �1�1� ���������� ���1����        |" << endl;
				cout << "|         4 - ����������� �1�1� ���������� ������            |" << endl;
				cout << "|         5 - ����������� �1�1� ���������� ���������         |" << endl;
				cout << "|         6 - ����������� �1�1� ���������� ���1����          |" << endl;
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
					cout << "  ����1�� ������ ���� ���� ����������� �1�1� : ";
					cin >> sign;
					cout << "  ����1�� ������� �1�11 : ";
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
			cout << " #--------------------------------------------------- | ��� ������ | -------------------------------------------------# " << endl << endl;
			cout << " #--------------------------------------------------- |  1 �1����  | -------------------------------------------------# " << endl;
			/*cout << "  Do you want to continue? " << endl;
			cout << "  If yes, then press anynnumber! " << endl;
			cout << "  0 - will complete ";
			cin >> x;*/
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " ������ ���� ���������� ! " << endl;
			cout << " ������1�� ����-��� ����� ��� ����  ��� ������� ����� ! ";
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
				cout << " ���1 ����� : ";
				cout << a << ", " << b << endl;
				break;
			}
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << endl;
			cout << " ���1 ���� �������� ! " << endl;
			cout << " ������1�� ����-��� ����� ��� ����  ��� ������� ����� ! ";
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
				cout << " ���1 ����� : ";
				cout << a << ", " << b << endl;
				break;
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
			cout << " ���� ����� � �����1� ������� ������ ����������� : ";
			cout << c << endl;
			cout << " ���� ����� � �����1� ������� ������ �������� : ";
			cout << d << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- |  2 �1����  | -------------------------------------------------# " << endl;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " ������ ���� ���������� ! " << endl;
			cout << " ������1�� ����-��� ����� ��� ����  ��� ������� ����� ! ";
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
				cout << " ���1 ����� : ";
				cout << a << ", " << b << endl;
				break;
			}
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << endl;
			cout << " ���1 ���� �������� ! " << endl;
			cout << " ������1�� ����-��� ����� ��� ����  ��� ������� ����� ! ";
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
				cout << " ���1 ����� : ";
				cout << a << ", " << b << endl;
				break;
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
			cout << " ���� ����� � �����1� ������� ������ ����������� : ";
			cout << e << endl;
			cout << " ���� ����� � �����1� ������� ������ �������� : ";
			cout << f << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- |  3 �1����  | -------------------------------------------------# " << endl;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << " ������ ���� ���������� ! " << endl;
			cout << " ������1�� ����-��� ����� ��� ����  ��� ������� ����� ! ";
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
				cout << " ���1 ����� : ";
				cout << a << ", " << b << endl;
				break;
			}
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			cout << endl;
			cout << " ���1 ���� �������� ! " << endl;
			cout << " ������1�� ����-��� ����� ��� ����  ��� ������� ����� ! ";
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
				cout << " ���1 ����� : ";
				cout << a << ", " << b << endl;
				break;
			}
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 3));
			cout << " ���� ����� � �����1� �������� ������ ����������� : ";
			cout << g << endl;
			cout << " ���� ����� � �����1� �������� ������ �������� : ";
			cout << h << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 10));
			cout << " #--------------------------------------------------- | ���������� | -------------------------------------------------# " << endl;
			cout << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
			r1 = c + e + g;
			r2 = d + f + h;
			cout << " ���� ���1� �����1� �� ��� ������ � ����������� ������ : ";
			cout << r1 << " ���1� !" << endl;
			cout << " ���� ���1� �����1� �� ��� ������ � �������� ������ : ";
			cout << r2 << " ���1� !" << endl << endl;
			SetConsoleTextAttribute(handle, WORD(0 << 4 | 14));
			if (r1 > r2)
			{
				cout << " �������� ������� ���������� !!!" << endl;
			}
			else if (r2 > r1)
			{
				cout << " �������� �������� �������� !!!" << endl;
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
					cout << " �1���� : ";
				}
				if (i == 1) {
					cout << " ����� : ";
				}
				if (i == 2) {
					cout << " �������� : ";
				}
				if (i == 3) {
					cout << " ��1���� : ";
				}
				if (i == 4) {
					cout << " ������� : ";
				}
				if (i == 5) {
					cout << " ������� : ";
				}
				if (i == 6) {
					cout << " ������ : ";
				}
				if (i == 7) {
					cout << " ������� : ";
				}
				if (i == 8) {
					cout << " �������� : ";
				}
				if (i == 9) {
					cout << " ������� : ";
				}
				if (i == 10) {
					cout << " �������� : ";
				}
				if (i == 11) {
					cout << " ������� : ";
				}

				cin >> x;
				arrA[i] = x;
			}

			cout << endl;

			int b, c, g;

			cout << " ����1�� ����� ����� �1������� : ";
			cin >> b;
			cout << endl;
			cout << " ����1�� ����� ����� �1������� : ";
			cin >> c;
			cout << endl;
			/*for (int i = 0; i < b; i++)
			{
				if (b < 0)
				{
					cout << " ���� ������ �1���� !" << endl;
					cout << " ����1�� ����� > 0 ��� < 12 : ";
					cin >> b;
					cout << endl;
				}
				else if (b > 12)
				{
					cout << " ���� ������ �1���� !" << endl;
					cout << " ����1�� ����� > 0 ��� < 12 : ";
					cin >> b;
					cout << endl;
				}
				break;
			}
			for (int i = 0; i < c; i++) {

			    if (c > 12)
				{
					cout << " ���� ������ �1���� !" << endl;
					cout << " ����1�� ����� > 0 ��� < 12 : ";
					cin >> c;
					cout << endl;
				}
				else if (c < 0)
				{
					cout << " ���� ������ �1���� !" << endl;
					cout << " ����1�� ����� > 0 ��� < 12 : ";
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
			cout << " ���� �1�'����� �������1� : " << sum << endl;
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
			cout << " ������� �������1�, �� ����������1 �1� min 1 ma� ���������� : " << e << endl;
			int sume = arr[1];
			for (int i = 1; i < a; i++)
			{
				if (i % 2 != 0)
				{
					sume *= arr[i];
				}
			}
			cout << " ������� �������1� � ������� �������� : " << sume << endl;
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
			cout << " ���� �������1�, �� ����������1 �1� ������ 1 ������1� �1�'������ ���������� : " << sum << endl;
			system("pause");
			system("color 0F");
		}break;
		}
	} while (true);
	return 0;
}