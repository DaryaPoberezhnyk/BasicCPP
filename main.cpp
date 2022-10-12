#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;
int main()
{
	char switch_on;
	do {

		system("cls");
		cout << "#>----------<MENU>----------<#" << endl;
		cout << "|         1 - Case 1         |" << endl;
		cout << "|         2 - Case 2         |" << endl;
		cout << "#>--------------------------<#" << endl;
		cout << "|         0 - Exit           |" << endl;
		cout << "#>--------------------------<#" << endl;
		switch_on = _getch();
		system("cls");
		switch (switch_on)
		{
		case '1':
		{
			const int col = 5;
			const int row = 5;
			int arr_2[col][row];
			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					arr_2[i][j] = rand() % 10;
					cout << "   " << arr_2[i][j] << "\t";
				}
				cout << endl << endl;
			}
			int sum = 0;

			for (size_t i = 0; i < col; i++)
			{

				for (size_t j = 0; j < row; j++)
				{
					sum += arr_2[i][j];
				}

			}
			cout << " Sum : " << sum << endl;
			cout << endl;
			double a = 0;

			for (size_t i = 0; i < col; i++)
			{

				for (size_t j = 0; j < row; j++)
				{

					a = sum / 25;

				}
			}
			cout << " Arithmetic mean : " << a << endl;
			cout << endl;
			int min, max;
			min = max = arr_2[0][0];
			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					if (min > arr_2[i][j])
					{
						min = arr_2[i][j];

					}
					if (max < arr_2[i][j])
					{
						max = arr_2[i][j];

					}
				}
			}
			cout << " Min : " << min << endl;
			cout << " Max : " << max << endl;
		}break;
		case '2':
		{
			const int col = 5;
			const int row = 5;
			cout << endl;
			int arr_2[col][row];

			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					arr_2[i][j] = rand() % 10;
				}
			}
			int sumH[col];
			int sumV[row];
			int sum, k = 0;

			for (size_t i = 0; i < col; i++)
			{
				sum = 0;
				for (size_t j = 0; j < row; j++)
				{
					sum += arr_2[i][j];
				}
				sumH[k] = sum;
				k++;
			}
			k = 0;
			for (size_t i = 0; i < col; i++)
			{
				sum = 0;

				for (size_t j = 0; j < row; j++)
				{
					sum += arr_2[j][i];
				}
				sumV[k] = sum;
				k++;
			}


			for (size_t i = 0; i < col; i++)
			{
				for (size_t j = 0; j < row; j++)
				{
					cout << arr_2[i][j] << "\t";
				}
				cout << "| " << sumH[i];
				cout << endl << endl;
			}
			for (size_t i = 0; i < row; i++)
			{
				cout << "--------";
			}
			cout << endl;

			for (size_t i = 0; i < row; i++)
			{
				cout << sumV[i] << "\t";
			}
		}break;
		}break;
	} while (true);
    return 0;
}