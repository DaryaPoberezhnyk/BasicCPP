#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <time.h>
using namespace std;

struct facultet
{
    string facultet;
    string line;
    string one;
    string two;
    string three;
    string four;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << facultet << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        facultet = " ���� ����������: ";
        line = "-----------------------";
        one = " 1. ��������� ";
        two = " 2. ���������� ";
        three = " 3. �������� ";
        four = " 4. ��������  ";
        line2 = "-----------------------";
        vibir = " * ��� ������ ���������� �������� ���� ����� : ";
    }
};
struct grifindor
{
    string person;
    string line;
    string one;
    string two;
    string three;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << person << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        person = " ��������� ��������: ";
        line = "-----------------------";
        one = " 1. ���� ���� ";
        two = " 2. ����� ������ ";
        three = " 3. �������� ��������� ";
        line2 = "-----------------------";
        vibir = " * ��� ������ ��������� �������� ���� ����� : ";
    }
};
struct gp1
{
    string keti;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << keti << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        keti = " ���� ���� - ��������������: ";
        line = "------------------------------";
        one = " 1. ������� ";
        two = " 2. ����� ";
        three = " 3. ������ ";
        four = " 4. ���� 2�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct gp2
{
    string gary;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << gary << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        gary = " ���� ����� - ��������������: ";
        line = "------------------------------";
        one = " 1. �������� ";
        two = " 2. ������� ";
        three = " 3. ��������� ";
        four = " 4. ���� 4�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct gp3
{
    string germiona;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << germiona << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        germiona = " �������� ��������� - ��������������: ";
        line = "------------------------------";
        one = " 1. ������a ";
        two = " 2. �����a ";
        three = " 3. Cbkmyf ";
        four = " 4. ���� 3�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct reivenclov
{
    string person;
    string line;
    string one;
    string two;
    string three;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << person << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        person = " ���������� ��������: ";
        line = "-----------------------";
        one = " 1. �� ��� ";
        two = " 2. ����� ������";
        three = " 3. ������ ���� ";
        line2 = "-----------------------";
        vibir = " * ��� ������ ��������� �������� ���� ����� : ";
    }
};
struct rp1
{
    string cho;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << cho << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
       cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        cho = " �� ��� - ��������������: ";
        line = "------------------------------";
        one = " 1. ������� ";
        two = " 2. ������� ";
        three = " 3. ����� ";
        four = " 4. ���� 3�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct rp2
{
    string maikl;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << maikl << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        maikl = " ����� ������ - ��������������: ";
        line = "------------------------------";
        one = " 1. �������� ";
        two = " 2. �������� ";
        three = " 3. ������ ";
        four = " 4. ���� 2�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct rp3
{
    string marcus;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << marcus << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        marcus = " ������ ���� - ��������������: ";
        line = "------------------------------";
        one = " 1. �������� ";
        two = " 2. �������� ";
        three = " 3. ������ ";
        four = " 4. ���� 3�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct gafelpaf
{
    string person;
    string line;
    string one;
    string two;
    string three;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << person << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        person = " �������� ��������: ";
        line = "-----------------------";
        one = " 1. ͳ������� ����� ";
        two = " 2. ������ ������";
        three = " 3. ����� ĳ��� ";
        line2 = "-----------------------";
        vibir = " * ��� ������ ��������� �������� ���� ����� : ";
    }
};
struct gap1
{
    string nimfadora;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << nimfadora << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        nimfadora = " ͳ������� ����� - ��������������: ";
        line = "------------------------------";
        one = " 1. ����� ";
        two = " 2. ���� ";
        three = " 3. ���������� ";
        four = " 4. ���� 4�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct gap2
{
    string pomona;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << pomona << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << six << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        pomona = " ������ ������ - ��������������: ";
        line = "------------------------------";
        one = " 1. ����� ";
        two = " 2. ���� ";
        three = " 3. ���������� ";
        four = " 4. ���� 2�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct gap3
{
    string sedric;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << sedric << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        sedric = " ����� ĳ��� - ��������������: ";
        line = "------------------------------";
        one = " 1. ������ ";
        two = " 2. ����� ";
        three = " 3. ����������� ";
        four = " 4. ���� 3�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct slizerin
{
    string person;
    string line;
    string one;
    string two;
    string three;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << person << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        person = " �������� ��������: ";
        line = "-----------------------";
        one = " 1. ����� ������ ";
        two = " 2. ��������� ���������";
        three = " 3. ������ �����!!";
        line2 = "-----------------------";
        vibir = " * ��� ������ ��������� �������� ���� ����� : ";
    }
};
struct sp1
{
    string draco;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << draco << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << six << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        draco = " ����� ������ - ��������������: ";
        line = "------------------------------";
        one = " 1. ��������� ";
        two = " 2. ������ ";
        three = " 3. ����������� ";
        four = " 4. ���� 4�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct sp2
{
    string milifisenta;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << milifisenta << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << six << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        milifisenta = " ��������� ��������� - ��������������: ";
        line = "------------------------------";
        one = " 1. �������a ";
        two = " 2. ����a ";
        three = " 3. ���������a ";
        four = " 4. ���� 3�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct sp3
{
    string treysi;
    string line;
    string one;
    string two;
    string three;
    string four;
    string five;
    string six;
    string line2;
    string vibir;
    void Output()
    {
        cout << endl;
        cout << treysi << endl;
        cout << line << endl;
        cout << one << endl;
        cout << two << endl;
        cout << three << endl;
        cout << four << endl;
        cout << five << endl;
        cout << six << endl;
        cout << line2 << endl;
        cout << vibir;

    }
    void Input()
    {
        treysi = " ������ ����� - ��������������: ";
        line = "------------------------------";
        one = " 1. �������a ";
        two = " 2. ����a ";
        three = " 3. ���������a ";
        four = " 4. ���� 2�� ";
        five = " 5. � ��������� �������� ���� ";
        line2 = "-----------------------------";
        vibir = " * ��� ������������ ��������� �������� 1 : ";
    }
};
struct zillia
{
    string z1;
    string z2;
    string z3;
    string z4;
    string z5;
    string z6;
    string z7;
    string z8;
    string z9;

    void Output()
    {
        cout << " #------------------------------------------------------#" << endl;
        cout << " |                                                      |" << endl;
        cout << " |   " << z1 << "      |" << endl;
        cout << " |   " << z2 << "        |" << endl;
        cout << " |   " << z3  << "                          |" << endl;
        cout << " |                                                      |" << endl;
        cout << " #------------------------------------------------------#" << endl;
        cout << " |                                                      |" << endl;
        cout << " |   " << z4 << "      |" << endl;
        cout << " |   " << z5 << "         |" << endl;
        cout << " |   " << z6 << "                       |" << endl;
        cout << " |                                                      |" << endl;
        cout << " #------------------------------------------------------#" << endl;
        cout << " |                                                      |" << endl;
        cout << " |   " << z7 << "   |" << endl;
        cout << " |   " << z8 << "         |" << endl;
        cout << " |   " << z9 << "                       |" << endl;
        cout << " |                                                      |" << endl;
        cout << " #------------------------------------------------------#" << endl;
    }
    void Input()
    {
        z1="ǳ��� 1 : ������ �� ����� � ������� �����,";
        z2="�� ����� �� ������ �� 2�� �� ������� ���,";
        z3="������ �� ���� ������!";
        z4="ǳ��� 2 : ������ �� ����� � ������� �����,";
        z5="�� ����� �� ������ �� 3�� �� ������� ���";
        z6="�� ������ �� ���� ������!";
        z7="ǳ��� 3 : �� ������ �� ����� � ������� �����,";
        z8="�� ����� �� ������ �� 4�� �� ������� ���";
        z9="�� ������ �� ���� ������!";
    }
};
struct hp
{
    string hp;
    string hp1;
    void Output()
    {
        cout << hp;
        cout << hp1 << endl;
    }
    void Input()
    {
        hp = " ��1 **********";
        hp1= "                                        ��2 **********";
    }
};

int main()
{
    char switch_on;
    do
    {
        system("cls");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        cout << endl;
        cout << "\t\t\t\t\t\t#--------------------------#" << endl;
        cout << "\t\t\t\t\t\t|                          |" << endl;
        cout << "\t\t\t\t\t\t|  Hogwarts. Student Wars. |" << endl;
        cout << "\t\t\t\t\t\t| *��� ������� �������� 1 |" << endl;
        cout << "\t\t\t\t\t\t|                          |" << endl;
        cout << "\t\t\t\t\t\t#--------------------------#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int x;
            string y1;
            string y2;
            cout << endl;
            cout << " �� ������� ����� 1, �������� ��� �� : ";
            cin >> y1;
            facultet* f = new facultet;
            f->Input();
            f->Output();
            cin >> x;
            if (x == 1)
            {
                system("cls");
                int x;
                grifindor* g = new grifindor;
                g->Input();
                g->Output();
                cin >> x;
                if (x == 1)
                {
                    system("cls");
                    gp1* g1 = new gp1;
                    g1->Input();
                    g1->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }

                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                         system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� ����" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 2)
                {
                    system("cls");
                    gp2* g2 = new gp2;
                    g2->Input();
                    g2->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();

                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ��� ������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                   
                }
                if (x == 3)
                {
                    system("cls");
                    gp3*g3 = new gp3;
                    g3->Input();
                    g3->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �������� ���������" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }

                }
            }
            if (x == 2)
            {
                system("cls");
                int x;
                reivenclov* r = new reivenclov;
                r->Input();
                r->Output();
                cin >> x;
                if (x == 1)
                {
                    system("cls");
                    rp1* r1 = new rp1;
                    r1->Input();
                    r1->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� �� ���!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* ��� ������ ���� ��� ������ 1 - " << y1 << ", ������ ����� ���� : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 1  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 2)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 2  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                            if (x == 3)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* ��� ������ ���� ��� ������ 2 - " << y2 << ", ������ ����� ���� : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 1  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 2)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 2  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                                if (x == 3)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                                    cout << " ������� 1: " << y1 << " ����� ���� 3  " << "\t\t\t ������� 2: " << y2 << " ����� ���� 3  " << endl;
                                                    hp* h = new hp;
                                                    h->Input();
                                                    h->Output();
                                                    cout << endl;
                                                    system("pause");
                                                }
                                            }
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();   
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� �� ���!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 2)
                {
                    system("cls");
                    rp2* r2 = new rp2;
                    r2->Input();
                    r2->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();       
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 3)
                {
                    system("cls");
                    rp3* r3 = new rp3;
                    r3->Input();
                    r3->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();                                 
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ������ ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (x == 3)
            {
                system("cls");
                int x;
                gafelpaf* g = new gafelpaf;
                g->Input();
                g->Output();
                cin >> x;
                if (x == 1)
                {
                    system("cls");
                    gap1* g1 = new gap1;
                    g1->Input();
                    g1->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ͳ������� �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 2)
                {
                    system("cls");
                    gap2* g2 = new gap2;
                    g2->Input();
                    g2->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y2;
                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 3)
                {
                    system("cls");
                    gap3* g3 = new gap3;
                    g3->Input();
                    g3->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y2;
                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {

                        }
                    }
                }
            }
            if (x == 4)
            {
                system("cls");
                int x;
                slizerin* s = new slizerin;
                s->Input();
                s->Output();
                cin >> x;
                if (x == 1)
                {
                    system("cls");
                    sp1* s1 = new sp1;
                    s1->Input();
                    s1->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y1;
                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ����� ������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 2)
                {
                    system("cls");
                    sp2* s2 = new sp2;
                    s2->Input();
                    s2->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y2;
                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ��������� ���������!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (x == 3)
                {
                    system("cls");
                    sp3* s3 = new sp3;
                    s3->Input();
                    s3->Output();
                    cin >> x;
                    if (x == 1)
                    {
                        system("cls");
                        cout << endl;
                        cout << " ������� " << y2;
                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                        cout << " ��� ������ ��������� ��� ������� ������ �������� 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " �� ������� ����� 2, �������� ��� �� : ";
                            cin >> y2;
                            system("cls");
                            facultet* f = new facultet;
                            f->Input();
                            f->Output();
                            cin >> x;
                            if (x == 1)
                            {
                                system("cls");
                                int x;
                                grifindor* g = new grifindor;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gp1* g1 = new gp1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ���� ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ���� ����" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gp2* g2 = new gp2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ��� ������" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gp3* g3 = new gp3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� �������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                        }
                                    }

                                }
                            }
                            if (x == 2)
                            {
                                system("cls");
                                int x;
                                reivenclov* r = new reivenclov;
                                r->Input();
                                r->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    rp1* r1 = new rp1;
                                    r1->Input();
                                    r1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;

                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� �� ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� �� ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    rp2* r2 = new rp2;
                                    r2->Input();
                                    r2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    rp3* r3 = new rp3;
                                    r3->Input();
                                    r3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 3)
                            {
                                system("cls");
                                int x;
                                gafelpaf* g = new gafelpaf;
                                g->Input();
                                g->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    gap1* g1 = new gap1;
                                    g1->Input();
                                    g1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ͳ������� �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ͳ������� �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    gap2* g2 = new gap2;
                                    g2->Input();
                                    g2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    gap3* g3 = new gap3;
                                    g3->Input();
                                    g3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ĳ���!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ĳ���!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                            if (x == 4)
                            {
                                system("cls");
                                int x;
                                slizerin* s = new slizerin;
                                s->Input();
                                s->Output();
                                cin >> x;
                                if (x == 1)
                                {
                                    system("cls");
                                    sp1* s1 = new sp1;
                                    s1->Input();
                                    s1->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ����� ������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ����� ������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 2)
                                {
                                    system("cls");
                                    sp2* s2 = new sp2;
                                    s2->Input();
                                    s2->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ��������� ���������!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ��������� ���������!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                                if (x == 3)
                                {
                                    system("cls");
                                    sp3* s3 = new sp3;
                                    s3->Input();
                                    s3->Output();
                                    cin >> x;
                                    if (x == 1)
                                    {
                                        system("cls");
                                        cout << endl;
                                        cout << " ������� " << y2;
                                        cout << ". �� ������ ��������� ������ �����!! " << endl;
                                        cout << " ��� ������� ��� �������� 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " ������� 1: " << y1 << " ����� ������ �����!!" << "\t\t\t ������� 2: " << y2 << " ����� ������ �����!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            system("pause");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            system("pause");
        }break;
        }
    } while (true);
    return 0;
}