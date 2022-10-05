#include <iostream>
#include <cmath>
using namespace std;
float main()
{
	float R1;
	float R2;
	float R3;
	float R0;

	cout << "Enter R1 : " << endl;
	cin >> R1;
	cout << "Enter R2 : " << endl;
	cin >> R2;
	cout << "Enter R3 : " << endl;
	cin >> R3;


	R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
	cout << "R0 = " << R0;
}
