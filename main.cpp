
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <time.h>
using namespace std;

void voin (int x)
{
    cout << "   Ви обрали класс Воїна ! " << endl;
    cout << "    - ХП - 10 сердець " << endl;
    cout << "    - МП - (заблоковане на першому рівні) " << endl;
    cout << "    - Сила атаки - 1 сердце " << endl;
    cout << "    - Кріт шанс - 1%  " << endl;
    cout << "    - Кріт урон - 4 сердець " << endl;
    cout << "    - Зброя - меч " << endl;
    cout << "    - Захист - (заблоковано на першому рівні) " << endl;
    cout << "    - Предмети які підвищують характеристики - (заблоковано на першому рівні) " << endl;
    cout << "    - Обладунки - (заблоковано на першому рівні) " << endl << endl;
}
void mag(int x)
{
    cout << "   Ви обрали класс Мага ! " << endl;
    cout << "    - ХП - 10 сердець " << endl;
    cout << "    - МП - є можливість використати зілля підвищенна хп чи блоку монстра на 2 ходи один раз за гру " << endl;
    cout << "    - Сила атаки - 1 сердце " << endl;
    cout << "    - Кріт шанс - 2%  " << endl;
    cout << "    - Кріт урон - 5 сердець " << endl;
    cout << "    - Зброя - магічний посох " << endl;
    cout << "    - Захист - (заблоковано на першому рівні) " << endl;
    cout << "    - Предмети які підвищують характеристики - (заблоковано на першому рівні) " << endl;
    cout << "    - Обладунки - (заблоковано на першому рівні) " << endl << endl;
}

void streloc(int x)
{
    cout << "   Ви обрали класс Стрілка ! " << endl;
    cout << "    - ХП - 10 сердець " << endl;
    cout << "    - МП - (заблоковане на першому рівні) " << endl;
    cout << "    - Сила атаки - 1 сердце " << endl;
    cout << "    - Кріт шанс - 3%  " << endl;
    cout << "    - Кріт урон - 4 сердець " << endl;
    cout << "    - Зброя - лук " << endl;
    cout << "    - Захист - (заблоковано на першому рівні) " << endl;
    cout << "    - Предмети які підвищують характеристики - (заблоковано на першому рівні) " << endl;
    cout << "    - Обладунки - (заблоковано на першому рівні) " << endl << endl;
}
bool deadend(int x, int y, int** maze, int height, int width) {
    int a = 0;
    const int wall = 0, pass = 1;
    if (x != 1) {
        if (maze[y][x - 2] == pass)
            a += 1;
    }
    else a += 1;

    if (y != 1) {
        if (maze[y - 2][x] == pass)
            a += 1;
    }
    else a += 1;

    if (x != width - 2) {
        if (maze[y][x + 2] == pass)
            a += 1;
    }
    else a += 1;

    if (y != height - 2) {
        if (maze[y + 2][x] == pass)
            a += 1;
    }
    else a += 1;

    if (a == 4)
        return 1;
    else
        return 0;
}
void visual(int** maze, int height, int width)
{
    const int wall = 0, pass = 1;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++)
            switch (maze[i][j]) {
            case wall: cout << "0 "; break;
            case pass: cout << "  "; break;
            }
        cout << endl;
    }
    cout << endl;
}
void mazemake(int** maze, int height, int width) {
    int x, y, c, a;
    bool b;
    const int wall = 0, pass = 1;

    for (int i = 0; i < height; i++) 
        for (int j = 0; j < width; j++)
            maze[i][j] = wall;

    x = 3; y = 3; a = 0; 
    while (a < 10000) { 
        maze[y][x] = pass; a++;
        while (1) { 
           c = rand() % 4; 
            switch (c) { 
            case 0: if (y != 1)
                if (maze[y - 2][x] == wall) { 
                    maze[y - 1][x] = pass;
                    maze[y - 2][x] = pass;
                    y -= 2;
                }
            case 1: if (y != height - 2)
                if (maze[y + 2][x] == wall) { 
                    maze[y + 1][x] = pass;
                    maze[y + 2][x] = pass;
                    y += 2;
                }
            case 2: if (x != 1)
                if (maze[y][x - 2] == wall) { 
                    maze[y][x - 1] = pass;
                    maze[y][x - 2] = pass;
                    x -= 2;
                }
            case 3: if (x != width - 2)
                if (maze[y][x + 2] == wall) { 
                    maze[y][x + 1] = pass;
                    maze[y][x + 2] = pass;
                    x += 2;
                }
            }
            if (deadend(x, y, maze, height, width))
                break;
        }

        if (deadend(x, y, maze, height, width))
            do {
                x = 2 * (rand() % ((width - 1) / 2)) + 1;
                y = 2 * (rand() % ((height - 1) / 2)) + 1;
            } while (maze[y][x] != pass);
    } 
}

int main()
{
    char switch_on;
    do
    {
        system("cls");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        cout << endl;
        cout << "\t\t\t\t\t\t   BATLE MAGIC " << endl;
        cout << "\t\t\t\t\t\t  ------------- " << endl << endl << endl;
        cout << "\t\t\t\t\t\t ---------------- " << endl;
        cout << "\t\t\t\t\t\t|   Start Game   | " << endl;
        cout << "\t\t\t\t\t\t ---------------- " << endl;

      
        cout << " * press spacebar to start the game!" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case ' ':
        {
            SetConsoleCP(1251);
            SetConsoleOutputCP(1251);
            cout << endl;
            char x, y;
            cout << "   --------------------------------------------------------------------------------------------------------------------------- " << endl << endl;
            cout <<  "   Привіт друже, я автор! Ти потрапив у магічний світ гри Batle Magic. " << endl << endl;
             cout << "   В цьому світі відбувається щось неймовірне, на нього напали чудовиська, та засіли у дуже важливій для міста вежі. " << endl<< endl;
             cout << "   Тебе обрали як самого відважного та повісили та тебе мету відбити місто!   " << endl << endl;
             cout << "   Тобі потрібно буде боротися з лютими чудовиськами різного рівня, випробувати свою міць та міць свого героя.  " << endl << endl;
             cout << "   Потрапити у замкнуту вежу та знайти вихід з неї! Вежа складатиметься з 10 рівнів складності,  " << endl << endl;
             cout << "   на кожному рівні тебе чекатимуть нові пригоди та сильні чудовиська. Твоя мета не покладаючи рук отримати перемогу. " << endl << endl;
             cout << "   Після кожного переможного раунду ти зможеш змінювати клас воїна, та з кожним рівнем його вміння будуть прокачуватись!   " << endl << endl;
             cout << "   На кожного бійця виділена певний рівень зброї, обладунків та предметів які підвищують його характеристики! Бажаю удачі..  " << endl << endl;
             cout << "   --------------------------------------------------------------------------------------------------------------------------- " << endl << endl << endl << endl;
             cout << "   ----------------------------------------------------| Вибір Класу |-------------------------------------------------------- " << endl << endl;
             cout << "   1. Воїн " << endl;
             cout << "   2. Маг " << endl;
             cout << "   3. Стрілок " << endl;
             cout << "   Обери номер свого бійця :  ";
             cin >> x; 
             cout << endl;

             if (x == '1')
             {
                 voin(x);
             }
             if (x == '2')
             {
                 mag(x);

             }
             if (x == '3')
             {
                 streloc(x);
                  
             }
             cout << endl;
             cout << " Для початку гри натисніть 1 !";
             cin >> y;
             cout << endl;
             if (y == '1')
             {
                 system("cls");
             }
             cout << "   ----------------------------------------------------| 1 рівень |-------------------------------------------------------- " << endl;
             srand((unsigned)time(NULL));

             int height = 21, width = 21;

             int** maze = new int* [height];
             for (int i = 0; i < height; i++)
                 maze[i] = new int[width];

             mazemake(maze, height, width);

             visual(maze, height, width);

             for (int i = 0; i < height; i++)
                 delete[] maze[i];
             delete[] maze;
             system("pause");
        }break;
        }
    } while (true);
	return 0;
}