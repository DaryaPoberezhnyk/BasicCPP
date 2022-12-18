
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

struct Washing_machine
{
    string company;
    string color;
    double width;
    double length;
    double height;
    string power;
    string spin_speed;
    string heating_temperature;
    void Output() {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " FIRM ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << company << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " COLOR ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << color << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " WIDTH ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << width << " cm" << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " LENGTH ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << length << " cm" << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " HEIGHT ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << height << " cm" << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " POWER ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << power << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " SPIN SPEED ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << spin_speed << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " HEATING TEMPERATURE ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << heating_temperature << endl;

    }
    void Input() {
        company = " SUMSUNG ";
        color = " GREY ";
        width = 60.6;
        length = 54;
        height = 79.5;
        power = "209 KVT / YEAR ";
        spin_speed = "2387 REV / MIN";
        heating_temperature = "90°C";
    }

};
struct Iron
{
    string firm;
    string model;
    string color;
    string minimal;
    string maximum;
    string steam;
    string power;

    void Output() {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " FIRM ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << firm << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " MODEL ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << model << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " COLOR ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << color << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " MIN TEMPERATURE ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << minimal << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " MAX TEMPERATURE ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << maximum << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " STEAM DELIVERY YES / NO ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << steam << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " POWER ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << power << endl;

    }
    void Input() {
        firm = " AZUR ";
        model = " Azur 8000 Series ";
        color = " DARK BLUE ";
        minimal = " 27°C ";
        maximum = " 120°C ";
        steam = " YES ";
        power = " 3000 W ";
    }

};
struct Boiler
{
    string firm;
    string color;
    string power;
    string amount;
    string heating_temperature;
    void Output() {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " FIRM ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << firm << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " COLOR ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << color << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " POWER ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << power << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " AMOUNT ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << amount << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " HEATING TEMPERATURE ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << heating_temperature << endl;

    }
    void Input() {
        firm = " RODA ";
        color = " WHITE ";
        power = " 2400 W (2 х 1200 W) ";
        amount = " 200 L";
        heating_temperature = " 65 С° ";
    }
};
struct dog
{
    string animal;
    string clas;
    string name;
    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " ANIMAL ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << animal << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " CLASS ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << clas << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
        cout << " NAME ";
        cout << " - ";
        SetConsoleTextAttribute(handle, WORD(0 << 4 | 11));
        cout << name << endl;
    }
    void Input()
    {
        animal = " DOG ";
        clas = " DOMESTIC ";
        name = " MIKE ";
    }
};
void dog1(int g, int y, int n)
{
    if (g = y)
    {
        cout << " GAF GAF...";
    }
    if (g = n)
    {

    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    char switch_on;
    do
    {
        system("cls");
        cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
        cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
        cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
        cout << "\t\t\t\t\t|         3 - Case 3         |" << endl;
        cout << "\t\t\t\t\t|         4 - Case 4         |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 4 | 7));
            cout << " Washing Machine " << endl << endl;
            Washing_machine* W = new Washing_machine;
            W->Input();
            W->Output();
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        }break;
        case '2':
        {
            cout << endl;
            cout << " Iron " << endl << endl;
            Iron* I = new Iron;
            I->Input();
            I->Output();
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        }break;
        case '3':
        {
            cout << endl;
            cout << " Boiler " << endl << endl;
            Boiler* B = new Boiler;
            B->Input();
            B->Output();
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            system("pause");
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        }break;
        case '4' :
        {
            
            char x[50];
            char y[50];
            char a[50];
            char b[50];
            char c[50];
            char g;
            cout << endl;
            cout << " Dog " << endl << endl;
            cout << " Breed : ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            cin >> x;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << " Age : ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            cin >> y;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << " Sex : ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            cin >> a;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << " Сity of residence : ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            cin >> b;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << " Owner's name : ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            cin >> c;
            cout << endl;
            dog* d = new dog;
            d->Input();
            d->Output();
            cout << endl;
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << " Do you want to use the voice command? YES/NO (if yes press 1, if no prees 2 ) : ";
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 11));
            cin >> g;
            if (g == '1')
            {
                cout << " GAF GAF ...." << endl;
            }
            if (g == '2')
            {
                cout << endl;
            }
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
            cout << endl;
            system("pause");
            SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        }break;
        }

    } while (true);

    return 0;
}