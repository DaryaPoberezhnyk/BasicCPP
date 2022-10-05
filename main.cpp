#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{
	cout << "\t\t\t#>---------<MENU>---------<#" << endl;
	cout << "\t\t\t|       1 - Case 1         |" << endl;
	cout << "\t\t\t|       2 - Case 2         |" << endl;
	cout << "\t\t\t|       3 - Case 3         |" << endl;
	cout << "\t\t\t|       4 - Case 4         |" << endl;
	cout << "\t\t\t|       5 - Case 5         |" << endl;
	cout << "\t\t\t#>------------------------<#" << endl;
	cout << "\t\t\t|         Exit - 0         |" << endl;
	cout << "\t\t\t#>------------------------<#" << endl;
	cout << "\t\t\tEnter task =>";
	int number;
	cin >> number;
	system("cls");

	switch (number)
	{
	case 1: // Користувач вводить з клавіатури відстань
		// до аеропорту і час, за який потрібно доїхати.
		// Обчислити швидкість, з якою йому потрібно їхати.
	{
		int v;
		int t;
		int S;
		cout << "Enter distante (km) : ";
		cin >> v;
		cout << "Enter the time (h) : ";
		cin >> t;
		cout << "The result of the desired speed : ";
		(S = v * t) ? cout << S << endl : cout << endl;
	}break;
	case 2: // Користувач вводить з клавіатури час початку
		// і час завершення використання скутера(години, хвилини
		// та секунди).Порахувати вартість подорожі, якщо вартість хвилини — 2 гривні.
	{
		int h1;
		int s1;
		int hv1;
		int h2;
		int s2;
		int hv2;
		int t;

		cout << "Enter the start time of the journey (h) : ";
		cin >> h1;
		cout << "Enter the start time of the journey (hv) : ";
		cin >> hv1;
		cout << "Enter the start time of the journey (s) : ";
		cin >> s1;
		cout << "Enter the finish time of the journey (h) : ";
		cin >> h2;
		cout << "Enter the finish time of the journey (hv) : ";
		cin >> hv2;
		cout << "Enter the finish time of the journey (s) : ";
		cin >> s2;
		int time = (h2 - h1) * 3600 + (hv2 - hv1) * 60 + (s2 - s1);
		if ((h2 - h1) * 3600 + (hv2 - hv1) * 60 + (s2 - s1))
		{
			cout << "The trip will cost : ";
			std::cout << (((h2 - h1) * 3600 + (hv2 - hv1) * 60 + (s2 - s1)) / 60) * 2;
			cout << " grn!";
		}break;
	}
	case 3:   // Користувач вводить з клавіатури відстань,
		/*витрату бензину на 100 км і вартість трьох видів бензину.
		Вивести на екран порівняльну таблицю з вартістю подорожі на різних видах палива.*/

	{
		int v;
		int vutrata;
		int cost1;
		int cost2;
		int cost3;
		int trip1;
		int trip2;
		int trip3;
		cout << endl;
		cout << endl;
		cout << "  Enter the distant (km) : ";
		cin >> v;
		cout << "  Enter gasoline consumption (100 km) : ";
		cin >> vutrata;
		cout << "  Enter first cost gasoline : ";
		cin >> cost1;
		cout << "  Enter second cost gasoline : ";
		cin >> cost2;
		cout << "  Enter third cost gasoline : ";
		cin >> cost3;
		trip1 = v * vutrata * cost1;
		trip2 = v * vutrata * cost2;
		trip3 = v * vutrata * cost3;
		cout << endl;
		cout << endl;
		cout << "\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
			<< char(205) << char(205) << char(205) << char(187) << endl;
		cout << "\t\t" << char(186) << "            " << char(186) << endl;
		cout << "\t\t" << char(186) << "   " << "First" << "    " << char(186) << endl;
		cout << "\t\t" << char(186) << "            " << char(186) << endl;
		cout << "\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
			<< char(205) << char(205) << char(205) << char(188) << endl;
		cout << "\t\t" << "    " << trip1 << " GRN!" << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
			<< char(205) << char(205) << char(205) << char(187) << endl;
		cout << "\t\t" << char(186) << "            " << char(186) << endl;
		cout << "\t\t" << char(186) << "   " << "Second" << "   " << char(186) << endl;
		cout << "\t\t" << char(186) << "            " << char(186) << endl;
		cout << "\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
			<< char(205) << char(205) << char(205) << char(188) << endl;
		cout << "\t\t" << "    " << trip2 << " GRN!" << endl;
		cout << endl;
		cout << endl;
		cout << "\t\t" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
			<< char(205) << char(205) << char(205) << char(187) << endl;
		cout << "\t\t" << char(186) << "            " << char(186) << endl;
		cout << "\t\t" << char(186) << "   " << "Third" << "    " << char(186) << endl;
		cout << "\t\t" << char(186) << "            " << char(186) << endl;
		cout << "\t\t" << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205)
			<< char(205) << char(205) << char(205) << char(188) << endl;
		cout << "\t\t" << "    " << trip3 << " GRN!" << endl;
		cout << endl;
		cout << endl;
	}break;
	case 4: /*Користувач вводить з клавіатури час у секундах, що минув з початку дня.Вивести на екран поточний
			 час у годинах, хвилинах і секундах.Порахувати, скільки годин, хвилин і секунд залишилося до півночі.*/
	{
		int s;
		int s1;
		int t1;
		int hv1;
		int t2;
		int hv2;
		cout << "Enter the elapsed time since the start of the day (s) -> ";
		cin >> s;
		cout << "Current time : ";
		t1 = s / 3600;
		cout << t1 << " h ";
		hv1 = s / 60 / 12;
		cout << hv1 << " hv ";
		cout << s % 60 << " s ";
		cout << endl;
		cout << "The time left until midnight : ";
		t2 = 12 - t1;
		cout << t2 << " h ";
		hv2 = 60 - hv1;
		cout << hv2 << " hv ";
		s1 = 60 - s % 60;
		cout << s1 << " s ";
	}break;
	case 5: /*Користувач вводить з клавіатури час у секундах, що минув з початку робочого дня. Порахувати,
			 скільки цілих годин йому залишилося сидіти на роботі,
			 якщо робочий день — 8 годин.*/
	{
		int s;
		int t;
		cout << "Enter the elapsed time since the start of the work day (s) -> ";
		cin >> s;
		cout << "Time until the end of the working day : ";
		t = 8 - s / 3600;
		cout << t << " h ";
	}break;
	}
	return 0;
}