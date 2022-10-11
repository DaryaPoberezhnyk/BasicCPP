#include <iostream>
using namespace std;

int main()
{
	const int col = 5;
	const int row = 5;
	int arr_2[col][row];
	for (size_t i = 0; i < col; i++)
	{
		for (size_t j = 0; j < row; j++)
		{
			arr_2[i][j] = rand() % 10;
			cout << "  " << arr_2[i][j] << "\t";
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
	return 0;
	return 0;
}