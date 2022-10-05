#include <iostream>
#include <cmath>
using namespace std;
float main()
{
	const double pi = 3.14;
	float S;
	float L;
	float R;

	cout << "Enter the lengh of the circumference: ";
	cin >> L;

	R = L / 2 * pi;
	L = 2 * pi * R;
	S = pi * (R * R);

	cout << "S = " << S << endl;
	cout << "R = " << R << endl;
}
