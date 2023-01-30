#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
#include <algorithm>
#include <vector>
#include <complex>
using namespace std;

uint64_t global_id = 0;
struct Complex {

    double x, y;
    void Print() {
        cout << x << " ";
        (y > 0) ? cout << " + " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
    void Print1() {
        cout << x << " ";
        (y > 0) ? cout << " + " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
    void Print2() {
        cout << x << " ";
        (y > 0) ? cout << " * " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
    void Print3() {
        cout << x << " ";
        (y > 0) ? cout << " / " : cout << " - ";
        cout << " " << y << "i" << endl;
    }
};

Complex Add(Complex c1, Complex c2) {
    Complex res;
    res.x = c1.x + c1.x;
    res.y = c1.y + c2.y;
    return res;
}
Complex Subtract(Complex c1, Complex c2) {
    Complex res1;
    res1.x = c1.x - c1.x;
    res1.y = c1.y - c2.y;
    return res1;
}
Complex Multiplication(Complex c1, Complex c2) {
    Complex res;
    res.x = c1.x * c1.x;
    res.y = c1.y * c2.y;
    return res;
}
Complex Division(Complex c1, Complex c2) {
    Complex res;
    res.x = c1.x / c1.x;
    res.y = c1.y / c2.y;
    return res;
}

struct Car1
{
    int q = 0;
    string length;
    void Output()
    {
        cout << " Length - ";
        cout << length;
    }
    void Input()
    {
        length = q; 
    }

};
struct Car2
{
    int w = 0;
    string hight;
    void Output()
    {
        cout << " Hight - ";
        cout << hight;
    }
    void Input()
    {
        hight = w;
    }

};
struct Car3
{
    int e=0;
    string v;
    void Output()
    {      
        cout << " Engine capacity - ";
        cout << v;        
    }
    void Input()
    {
        v = e;
    }
};

    struct Car4
    {
        int r = 0;
        string power;

        void Output()
        {            
            cout << " Power engine - ";
            cout << power;
        }
        void Input()
        {
            power = r;           
        }
    };
struct Car5
{
    int t = 0;
    string diametr;
    string color;
    string type;

    void Output()
    {        
        cout << " Wheel diameter - ";

        cout << diametr;       
    }
    void Input()
    {        
        diametr = t;        
    }

};
struct Car6
{
    int y = 0;   
    string color;
    string type;

    void Output()
    {      
        cout << " Color - ";
        cout << color;       
    }
    void Input()
    {       
        color = y;      
    }
};
struct Car7
{
    int u = 0;
    string type;

    void Output()
    {      
        cout << " Type of gearbox - ";
        cout << type;
    }
    void Input()
    {      
        type = u;
    }
};


int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));
    char switch_on;
    do
    {
        system("cls");
        cout << "\t\t\t\t\t#=====================MENU====================#" << endl;
        cout << "\t\t\t\t\t |                1 - Complex                | " << endl;
        cout << "\t\t\t\t\t |                2 - Car                    | " << endl;
        cout << "\t\t\t\t\t#=============================================#" << endl;
        cout << "\t\t\t\t\t |   0 - Exit                                |" << endl;
        cout << "\t\t\t\t\t#=============================================#" << endl;

        switch_on = _getch();
        system("cls");
        cout << endl;
        switch (switch_on)
        {
        case '1':
        {
            Complex c1;
            Complex c2;
            c1.x = 5;
            c1.y = 4;
            c1.Print();
            c2.x = 6;
            c2.y = 5;
            c2.Print();
            char switch_on1;
            do
            {
                cout << "    #=====================MENU====================#" << endl;
                cout << "     |                  1 - Add                  | " << endl;
                cout << "     |                  2 - Subtract             | " << endl;
                cout << "     |                  3 - Multiplication       | " << endl;
                cout << "     |                  4 - Division             | " << endl;
                cout << "    #=============================================#" << endl;
                cout << "     |   0 - Exit                                |" << endl;
                cout << "    #=============================================#" << endl;
                
                switch_on1 = _getch();
                cout << endl;

                switch (switch_on1)
                {
                case '1':
                {
                    Complex c3 = Add(c1, c2);
                    c3.Print();

                }break;
                case '2': {
                    Complex c4 = Subtract(c1, c2);
                    c4.Print1();
                }break;
                case '3': {
                    Complex c5 = Multiplication(c1, c2);
                    c5.Print2();
                }break;
                case '4': {
                    Complex c6 = Division(c1, c2);
                    c6.Print3();
                }break;
                }
            } while (true);
        }break;
        case '2':
            int q=0,w=0,e=0,r=0,t=0,y=0,u=0, a, s=0;
            cout << endl;
            cout << " Car " << endl << endl;
            Car1* c1 = new Car1;
            c1->Input();
            c1->Output();
            cin >> q;
            Car2* c2 = new Car2;
            c2->Input();
            c2->Output();
            cin >> w;
            Car3* c3 = new Car3;
            c3->Input();
            c3->Output();
            cin >> e;
            Car4* c4 = new Car4;
            c4->Input();
            c4->Output();
            cin >> r;
            Car5* c5 = new Car5;
            c5->Input();
            c5->Output();
            cin >> t;
            Car6* c6 = new Car6;
            c6->Input();
            c6->Output();
            cin >> y;
            Car7* c7 = new Car7;
            c7->Input();
            c7->Output();
            cin >> u;
            cout << endl;
            cout << " Length -------------------------------------------------- " << q << endl;
            cout << " Hight --------------------------------------------------- " << w << endl;
            cout << " Engine capacity ----------------------------------------- " << e << endl;
            cout << " Power engine -------------------------------------------- " << r << endl;
            cout << " Wheel diameter ------------------------------------------ " << t << endl;
            cout << " Color --------------------------------------------------- " << y << endl;
            cout << " Type of gearbox ----------------------------------------- " << u << endl << endl;
            cout << " If you want to search for details, press 1 !";
            cin >> a;
            if (a == 1)
            {
                cout << "    #=====================MENU====================#" << endl;
                cout << "     |                1 - Length                 | " << endl;
                cout << "     |                2 - Hight                  | " << endl;
                cout << "     |                3 - Engine capacity        | " << endl;
                cout << "     |                4 - Power engine           | " << endl;
                cout << "     |                5 - Wheel diameter         | " << endl;
                cout << "     |                6 - Color                  | " << endl;
                cout << "     |                7 - Type of gearbox        | " << endl;
                cout << "    #=============================================#" << endl << endl;
                cout << " To search press the number of the required parameter : ";
                cin >> s;
                if (s == 1)
                {
                    cout << " Length -------------------------------------------------- " << q << endl;
                }
                if (s == 2)
                {
                    cout << " Hight --------------------------------------------------- " << w << endl;
                }
                if (s == 3)
                {
                    cout << " Engine capacity ----------------------------------------- " << e << endl;
                }
                if (s == 4)
                {
                    cout << " Power engine -------------------------------------------- " << r << endl;
                }
                if (s == 5)
                {
                    cout << " Wheel diameter ------------------------------------------ " << t << endl;
                }
                if (s == 6)
                {
                    cout << " Color --------------------------------------------------- " << y << endl;
                }
                if (s == 7)
                {
                    cout << " Type of gearbox ----------------------------------------- " << u << endl << endl;
                }
                else
                {
                    cout << " ";
                }
            }
            system("pause");
        }
    } while (true);
    return 0;
}