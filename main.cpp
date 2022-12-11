#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
	int x, y;

};

struct ShowPoint
{
	Point* point = nullptr;
	void show_point(Point* point)
	{

		cout << " x = " << point->x << endl;
		cout << " y = " << point->y << endl;

	}
};

int main()
{
	Point* point1 = new Point();
	point1->x = 6;
	point1->y = 10;
	Point* point2 = new Point();
	point2->x = 7;
	point2->y = 3;
	/*show_point(point);*/
	ShowPoint* showpoint = new ShowPoint;

	return 0;
}