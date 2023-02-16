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
        facultet = " Вибір факультета: ";
        line = "-----------------------";
        one = " 1. Грифіндор ";
        two = " 2. Рейвенклов ";
        three = " 3. Гафелпаф ";
        four = " 4. Слизерин  ";
        line2 = "-----------------------";
        vibir = " * Для вибору факультета натисніть його номер : ";
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
        person = " Грифіндор Персонажі: ";
        line = "-----------------------";
        one = " 1. Кэти Белл ";
        two = " 2. Гарри Поттер ";
        three = " 3. Гермиона Грейнджер ";
        line2 = "-----------------------";
        vibir = " * Для вибору персонажа натисніть його номер : ";
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
        keti = " Кети Белл - Характеристики: ";
        line = "------------------------------";
        one = " 1. Хоробра ";
        two = " 2. Чесна ";
        three = " 3. Сильна ";
        four = " 4. Урон 2хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        gary = " Гари Потер - Характеристики: ";
        line = "------------------------------";
        one = " 1. Хоробрий ";
        two = " 2. Сміливий ";
        three = " 3. Надсильнй ";
        four = " 4. Урон 4хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        germiona = " Гермиона Грейнджер - Характеристики: ";
        line = "------------------------------";
        one = " 1. Хоробрa ";
        two = " 2. Сміливa ";
        three = " 3. Cbkmyf ";
        four = " 4. Урон 3хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        person = " Рейвенклов Персонажі: ";
        line = "-----------------------";
        one = " 1. Чо Чанґ ";
        two = " 2. Майкл Корнер";
        three = " 3. Маркус Белбі ";
        line2 = "-----------------------";
        vibir = " * Для вибору персонажа натисніть його номер : ";
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
        cho = " Чо Чанґ - Характеристики: ";
        line = "------------------------------";
        one = " 1. Розумна ";
        two = " 2. Дотепна ";
        three = " 3. Хитра ";
        four = " 4. Урон 3хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        maikl = " Майкл Корнер - Характеристики: ";
        line = "------------------------------";
        one = " 1. Розумний ";
        two = " 2. Дотепний ";
        three = " 3. Хитрий ";
        four = " 4. Урон 2хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        marcus = " Маркус Белбі - Характеристики: ";
        line = "------------------------------";
        one = " 1. Розумний ";
        two = " 2. Дотепний ";
        three = " 3. Хитрий ";
        four = " 4. Урон 3хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        person = " Гафелпаф Персонажі: ";
        line = "-----------------------";
        one = " 1. Німфадора Тонкс ";
        two = " 2. Помона Спраут";
        three = " 3. Седрік Діґорі ";
        line2 = "-----------------------";
        vibir = " * Для вибору персонажа натисніть його номер : ";
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
        nimfadora = " Німфадора Тонкс - Характеристики: ";
        line = "------------------------------";
        one = " 1. Добра ";
        two = " 2. Щира ";
        three = " 3. Працьовита ";
        four = " 4. Урон 4хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        pomona = " Помона Спраут - Характеристики: ";
        line = "------------------------------";
        one = " 1. Добра ";
        two = " 2. Щира ";
        three = " 3. Працьовита ";
        four = " 4. Урон 2хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        sedric = " Седрік Діґорі - Характеристики: ";
        line = "------------------------------";
        one = " 1. Добрий ";
        two = " 2. Щирий ";
        three = " 3. Працьовитий ";
        four = " 4. Урон 3хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        person = " Слизерин Персонажі: ";
        line = "-----------------------";
        one = " 1. Драко Малфой ";
        two = " 2. Милисента Булстроуд";
        three = " 3. Трейси Дэвис!!";
        line2 = "-----------------------";
        vibir = " * Для вибору персонажа натисніть його номер : ";
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
        draco = " Драко Малфой - Характеристики: ";
        line = "------------------------------";
        one = " 1. Амбіційний ";
        two = " 2. Хитрий ";
        three = " 3. Знахідливий ";
        four = " 4. Урон 4хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        milifisenta = " Милисента Булстроуд - Характеристики: ";
        line = "------------------------------";
        one = " 1. Амбіційнa ";
        two = " 2. Хитрa ";
        three = " 3. Знахідливa ";
        four = " 4. Урон 3хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        treysi = " Трейси Дэвис - Характеристики: ";
        line = "------------------------------";
        one = " 1. Амбіційнa ";
        two = " 2. Хитрa ";
        three = " 3. Знахідливa ";
        four = " 4. Урон 2хп ";
        five = " 5. Є можливість отримати зілля ";
        line2 = "-----------------------------";
        vibir = " * Для підтвердження персонажа натисніть 1 : ";
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
        z1="Зілля 1 : захищає від урону в першому раунді,";
        z2="та знищує хп ворага на 2хп від початку гри,";
        z3="захищає від зілля ворога!";
        z4="Зілля 2 : захищає від урону в першому раунді,";
        z5="та знищує хп ворага на 3хп від початку гри";
        z6="не захищає від зілля ворога!";
        z7="Зілля 3 : не захищає від урону в першому раунді,";
        z8="та знищує хп ворага на 4хп від початку гри";
        z9="не захищає від зілля ворога!";
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
        hp = " ХП1 **********";
        hp1= "                                        ХП2 **********";
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
        cout << "\t\t\t\t\t\t| *для початку натисніть 1 |" << endl;
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
            cout << " Ви гравець номер 1, напишіть свій нік : ";
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Кети Белл" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гарі Потера" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output(); 
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Гермиону Грейнджер" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                            hp* h = new hp;
                                            h->Input();
                                            h->Output();
                                            cout << endl;
                                            zillia* z = new zillia;
                                            z->Input();
                                            z->Output();
                                            cout << endl;
                                            cout << "* Для вибору зілля для Гравця 1 - " << y1 << ", введіть номер зілля : ";
                                            cin >> x;
                                            if (x == 1)
                                            {
                                                system("cls");
                                                zillia* z = new zillia;
                                                z->Input();
                                                z->Output();
                                                cout << endl;
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 1  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 2  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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
                                                cout << "* Для вибору зілля для Гравця 2 - " << y2 << ", введіть номер зілля : ";
                                                cin >> x;
                                                if (x == 1)
                                                {
                                                    system("cls");
                                                    cout << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 1  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 2  " << endl;
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
                                                    cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
                                                    cout << " Гравець 1: " << y1 << " обрав зілля 3  " << "\t\t\t Гравець 2: " << y2 << " обрав зілля 3  " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Чо Чанґ!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Майкл Корнер!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " ообрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Маркус Белбі!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Німфадора Тонкс!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y2;
                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Помона Спраут!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y2;
                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
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
                        cout << " Гравець " << y1;
                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Драко Малфой!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y2;
                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Милисента Булстроуд!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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
                        cout << " Гравець " << y2;
                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                        cout << " Для вибору персонажа для другого гравця натисніть 1 : ";
                        cin >> x;
                        if (x == 1)
                        {
                            system("cls");
                            cout << " Ви гравець номер 2, напишіть свій нік : ";
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Кети Белл!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Кети Белл" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гарі Потера!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гарі Потера" << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Гермиону Грейнджер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Гермиону Грейнджер!! " << endl;
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

                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Чо Чанґ!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Чо Чанґ!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Майкл Корнер!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Майкл Корнер!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Маркус Белбі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Маркус Белбі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Німфадора Тонкс!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Німфадора Тонкс!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Помона Спраут!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Помона Спраут!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Седрік Діґорі!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Седрік Діґорі!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Драко Малфой!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Драко Малфой!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Милисента Булстроуд!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Милисента Булстроуд!! " << endl;
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
                                        cout << " Гравець " << y2;
                                        cout << ". Ви обрали персонажа Трейси Дэвис!! " << endl;
                                        cout << " Для початку бою натисніть 1 :";
                                        cin >> x;
                                        if (x == 1)
                                        {
                                            system("cls");
                                            cout << endl;
                                            cout << " Гравець 1: " << y1 << " обрав Трейси Дэвис!!" << "\t\t\t Гравець 2: " << y2 << " обрав Трейси Дэвис!! " << endl;
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