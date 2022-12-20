
#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

struct display
{
    string screen;
    string resolution;
    string type;
    string surface;
    string screen2;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        cout << " Технічні характеристики Apple MacBook Pro M1 Pro Chip 16'' 16/512GB (Space Gray) " << endl << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Характеристики дисплея " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Розмір екрану ------------------------- ";
        cout << screen << endl << endl;
        cout << " Роздільна здатність екрану ------------ ";
        cout << resolution << endl << endl;
        cout << " Тип дисплея --------------------------- ";
        cout << type << endl << endl;
        cout << " Поверхня дисплея ---------------------- ";
        cout << surface << endl << endl;
        cout << " Сенсорний дисплей --------------------- ";
        cout << screen2 << endl << endl << endl;
    }
    void Input()
    {
        screen = " 16,2 ";
        resolution = " 3456 х 2234 ";
        type = " Liquid Retina XDR ";
        surface = " Глянцевий ";
        screen2 = " Ні ";
    }
};

struct use
{
    string matirial;
    string language;
    string language1;
    string keyboard;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Зручність використання " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Матеріал корпуса ---------------------- ";
        cout << matirial << endl << endl;
        cout << " Мова клавіатури (клавіш) -------------- ";
        cout << language << endl;
        cout << "                                         ";
        cout << language1 << endl << endl;
        cout << " Підсвічування клавіатури -------------- ";
        cout << keyboard << endl << endl << endl;
    }
    
    void Input()
    {
        matirial = " Метал ";
        language = " Англійська ";
        language1 = " Російська ";
        keyboard = " Так ";
    }
};

struct speed
{
    string type;
    string number;
    string size;
    string size1;
    string system;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Швидкодія " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Тип процесора ------------------------- ";
        cout << type << endl << endl;
        cout << " Кількість ядер процесора -------------- ";
        cout << number << endl << endl;
        cout << " Розмір оперативної пам'яті ------------ ";
        cout << size << endl << endl;
        cout << " Розмір пам'яті Intel Optane ----------- ";
        cout << size1 << endl << endl;
        cout << " Операційна система -------------------- ";
        cout << system << endl << endl << endl;
    }

    void Input()
    {
        type = " Apple M1 Pro";
        number = " 10 ";
        size = " 16 Гб ";
        size1 = " Ні ";
        system = " macOS Monterey ";
    }
};

struct devices
{
    string type;
    string volume;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Пристрої зберігання даних " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Тип накопичувача ---------------------- ";
        cout << type << endl << endl;
        cout << " Об'єм накопичувача -------------------- ";
        cout << volume << endl << endl << endl;
    }

    void Input()
    {
        type = " SSD ";
        volume = " 512 Гб ";
    }
};

struct opportunities
{
    string videprocessor;;
    string producer;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Графічні можливості " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Відеопроцесор ------------------------- ";
        cout << videprocessor << endl << endl;
        cout << " Виробник відеопроцесора --------------- ";
        cout << producer << endl << endl << endl;
    }

    void Input()
    {
        videprocessor = " Apple 16 - ядерний ";
        producer = " Apple ";
    }
};

struct interfaces
{
    string usb;
    string usb1;
    string usb2;
    string lan;
    string hdmi;
    string connector;
    string connector1;
    string web;
    string micro;
    string drive;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Iнтерфейси " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " USB 2.0 ------------------------------- ";
        cout << usb << endl << endl;
        cout << " USB 3.0 ------------------------------- ";
        cout << usb1 << endl << endl;
        cout << " USB 3.1 ------------------------------- ";
        cout << usb2 << endl << endl;
        cout << " LAN роз'єм (RJ45) --------------------- ";
        cout << lan << endl << endl;
        cout << " HDMI ---------------------------------- ";
        cout << hdmi << endl << endl;
        cout << " Роз'єм для навушників 3.5 мм ---------- ";
        cout << connector << endl << endl;
        cout << " Роз'єм для карт SD / SDHC / SDXC ------ ";
        cout << connector1 << endl << endl;
        cout << " Вбудована web-камера ------------------ ";
        cout << web << endl << endl;
        cout << " Вбудований мікрофон ------------------- ";
        cout << micro << endl << endl;
        cout << " Оптичний привід ----------------------- ";
        cout << drive << endl << endl << endl;
        
    }

    void Input()
    {
        usb = " Ні ";
        usb1 = " Ні ";
        usb2 = " 3 x Type-C (Thunderbolt 4) ";
        lan = " Ні ";
        hdmi = " 1 шт ";
        connector = " Так ";
        connector1 = " Так ";
        web = " Так ";
        micro = " Так ";
        drive = " Ні ";
    }
};

struct technologies
{
    string bluetooth;
    string wifi;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Бездротові технології " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Bluetooth ------------------------------ ";
        cout << bluetooth << endl << endl;
        cout << " Wi-Fi --------------------------------- ";
        cout << wifi << endl << endl << endl;
    }

    void Intput()
    {
        bluetooth = " Bluetooth 5.0 ";
        wifi = " 802.11ax ";
    }
};

struct battery
{
    string type;
    string capacity;
    string autonomy;
    string autonomy1;
    string autonomy2;
    string autonomy3;
    string autonomy4;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Акумулятор " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Тип акумулятора ------------------------ ";
        cout << type << endl << endl;
        cout << " Ємність акумулятору -------------------- ";
        cout << capacity << endl << endl;
        cout << " Автономність --------------------------- ";
        cout << autonomy << endl;
        cout << "                                          ";
        cout << autonomy1 << endl;
        cout << "                                          ";
        cout << autonomy2 << endl;
        cout << "                                          ";
        cout << autonomy3 << endl;
        cout << "                                          ";
        cout << autonomy4 << endl << endl;
    }

    void Input()
    {
        type = " Li-Pol ";
        capacity = " 100 Втгод ";
        autonomy = " До 21-ї години при відтворенні фільмів з ";
        autonomy1 = " програми Apple TV; До 14 годин роботи в ";
        autonomy2 = " інтернеті по бездротовій мережі; Можливість ";
        autonomy3 = " швидкої зарядки при використанні адаптера ";
        autonomy4 = " живлення USB-C потужністю 140 Вт ";
    }
};

struct color
{
    string length;
    string width;
    string thickness;
    string weight;
    string color;
    string complete;
    string complete1;
    string features;
    string features1;
    string features2;
    string features3;
    string features4;
    string features5;
    string features6;
    string features7;
    string features8;
    string features9;
    string features10;
    string features11;
    string features12;
    string features13;
    string features14;
    string features15;
    string features16;
    string line;
    string series;

    void Output()
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 9));
        cout << " Габарити і колір " << endl << endl;
        SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
        cout << " Довжина -------------------------------- ";
        cout << length << endl << endl;
        cout << " Ширина --------------------------------- ";
        cout << width << endl << endl;
        cout << " Товщина -------------------------------- ";
        cout << thickness << endl << endl;
        cout << " Вага ----------------------------------- ";
        cout << weight << endl << endl;
        cout << " Колір ---------------------------------- ";
        cout << color << endl << endl;
        cout << " Комплектація --------------------------- ";
        cout << complete << endl;
        cout << "                                          ";
        cout << complete1 << endl << endl;
        cout << " Особливості ---------------------------- ";
        cout << features << endl;
        cout << "                                          ";
        cout << features1 << endl;
        cout << "                                          ";
        cout << features2 << endl;
        cout << "                                          ";
        cout << features3 << endl;
        cout << "                                          ";
        cout << features4 << endl;
        cout << "                                          ";
        cout << features5 << endl;
        cout << "                                          ";
        cout << features6 << endl;
        cout << "                                          ";
        cout << features7 << endl;
        cout << "                                          ";
        cout << features8 << endl;
        cout << "                                          ";
        cout << features9 << endl;
        cout << "                                          ";
        cout << features10 << endl;
        cout << "                                          ";
        cout << features11 << endl;
        cout << "                                          ";
        cout << features12 << endl;
        cout << "                                          ";
        cout << features13 << endl;
        cout << "                                          ";
        cout << features14 << endl;
        cout << "                                          ";
        cout << features15 << endl;
        cout << "                                          ";
        cout << features16 << endl<<endl;
        cout << " Лінійка --------------------------------- ";
        cout << line << endl << endl;
        cout << " Серія ----------------------------------- ";
        cout << series << endl << endl << endl;
    }

    void Input()
    {
        length = " 35,57 см ";
        width = " 24,81 см ";
        thickness = " 1,68 см ";
        weight = "2,15 кг ";
        color = " Сірий ";
        complete = " MacBook Pro 16 дюймів; Адаптер USB-C ";
        complete1 = " потужністю 140 Вт; Кабель USB-C / MagSafe 3 (2 м) ";
        features = " Дисплей: Яскравість: до 1000 кд/м² на всьому просторі екрана і 1600 кд/м² ";
        features1 = " в піковому режимі; Контрастність: 1000 000: 1; Колір: 1 мільярд кольорів; ";
        features2 = " Широкий колірний обхват (P3); Технологія True Tone;  ";
        features3 = " Технологія ProMotion з адаптивною частотою оновлення до 120 Гц;";
        features4 = " DisplayPort; Touch ID; Датчик зовнішньої освітленості; ";
        features5 = " Трекпад Force Touch для точного управління курсором і розпізнавання тиску; ";
        features6 = " підтримує натискання із зусиллям, прискорення дій, малювання з урахуванням ";
        features7 = " сили натискання і жести Multi-Touch; Камера FaceTime HD 1080p;  ";
        features8 = " Передовий процесор обробки сигналу зображення з технологіями обчислювального відео;  ";
        features9 = " Система з шести динаміків Hi-Fi, включаючи низькочастотні з подавленням резонансу; ";
        features10 = " Широке стерео; Підтримка просторового аудіо при відтворенні музики і відео ";
        features11 = " в форматі Dolby Atmos через вбудовані динаміки; Просторове аудіо з ";
        features12 = " функцією динамічного відслідковування рухів голови при використанні ";
        features13 = " AirPods (3-го покоління), AirPods Pro або AirPods Max; ";
        features14 = " Система з трьох спрямованих мікрофонів з високим коефіцієнтом ";
        features15 = " сигнал/шум і підтримкою запису аудіо студійної якості; ";
        features16 = " Вихід 3,5 мм для навушників (розширена підтримка навушників з високим опором) ";
        line = " MacBook Pro 2021 ";
        series = " MacBook Pro M1 Pro";
    }
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, WORD(0 << 0 | 7));
    cout << endl << endl;

    display* dis = new display;
    dis->Input();
    dis->Output();

    use* Use = new use;
    Use->Input();
    Use->Output();

    speed* sp = new speed;
    sp->Input();
    sp->Output();

    devices* dev = new devices;
    dev->Input();
    dev->Output();

    opportunities* opp = new opportunities;
    opp->Input();
    opp->Output();

    interfaces* inter = new interfaces;
    inter->Input();
    inter->Output();

    technologies* tech = new technologies;
    tech->Intput();
    tech->Output();

    battery* bat = new battery;
    bat->Input();
    bat->Output();

    color* col = new color;
    col->Input();
    col->Output();
    return 0;
}