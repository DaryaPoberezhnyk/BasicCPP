#include <iostream>
#include <cmath>
using namespace std;
float main()
{

	float v;
	float t;
	float a;
	float S;

	cout << "Enter the speed in (km/h) : " << endl;
	cin >> v;

	cout << "Enter the clock time : " << endl;
	cin >> t;

	cout << "Enter acceleration : " << endl;
	cin >> a;


	S = v * t + (a * (t * t)) / 2;
	cout << "Distance traveled : " << endl;
	cout << S;
}