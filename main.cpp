#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;
int main()
{
    char switch_on;
    do 
    {
        system("cls");
        cout << "#>----------<MENU>----------<#" << endl;
        cout << "|         1 - Case 1         |" << endl;
        cout << "|         2 - Case 2         |" << endl;
        cout << "|         3 - Case 3         |" << endl;
        cout << "#>--------------------------<#" << endl;
        cout << "|         0 - Exit           |" << endl;
        cout << "#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            int col, row, sign;
            cout << endl;
            cout << "Enter the height of the rectangle : ";
            cin >> col;
            cout << "Enter the length of the rectangle : ";
            cin >> row;
            cout << "Enter the sign : ";
            cin >> sign;
            cout << endl;

            for (size_t i = 0; i <= col; i++)
            {
                for (size_t j = 0; j <= row; j++)
                {
                    cout << sign;
                }
                cout << endl;
            }
            system("pause");
        }break;
        case '2':
        {
            int col, row, sign;
            int j;
            int color;
            cout << endl;
            cout << "Enter the height of the rectangle : ";
            cin >> col;
            cout << "Enter the length of the rectangle : ";
            cin >> row;
            cout << "Enter the sign : ";
            cin >> sign;
            cout << "Enter the colour : ";
            cin >> color;
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(handle, WORD(0 << 4 | color));
            cout << endl;

            for (size_t i = 0; i < col; i++)
            {
                if (i == 0 || i == col - 1)
                {
                    for (size_t j = 0; j < row; j++)
                    {
                        if (i == 0)
                        {
                            if (j == 0)
                                cout << sign;
                            else if (j == row - 1)
                                cout << sign;
                            else

                                cout << sign << sign;
                        }
                        if (i == col - 1)
                        {
                            if (j == 0)
                                cout << sign;
                            else if (j == row - 1)
                                cout << sign;
                            else
                                cout << sign << sign;
                        }
                    }
                }
                else {
                    for (size_t j = 0; j < row; j++)
                    {
                        if (j == 0 || j == row - 1)
                        {
                            cout << sign;
                        }
                        else {
                            cout << "  ";
                        }
                    }
                }
                cout << endl;
            }
            
            system("pause");
            system("color 0F");
        }break;
        case '3':
        {
            int one, two, three, four, five, six, r;
            cout << endl;

            cout << "  Enter the firm`s profit for the first month : ";
            cin >> one;
            cout << "  Enter the firm`s profit for the second month : ";
            cin >> two;
            cout << "  Enter the firm`s profit for the third month : ";
            cin >> three;
            cout << "  Enter the firm`s profit for the fourth month : ";
            cin >> four;
            cout << "  Enter the firm`s profit for the fifth month : ";
            cin >> five;
            cout << "  Enter the firm`s profit for the sixth month : ";
            cin >> six;
            cout << endl;
            cout << "  The company`s profit for 6 months is : ";
            cout << (one + two + three + four + five + six) ? cout << " GRN " << endl : cout << endl;
            system("pause");
        }break;
        case '4':
        {
            const int size = 10;
            int arr[size] = { 8,5,3,4,5,6,9,7,2,1 };
            for (size_t i = 0; i < size; i++)
            {
                arr[i] = 10;
                arr[0] = 1;
                arr[1] = 2;
                arr[2] = 7;
                arr[3] = 9;
                arr[4] = 6;
                arr[5] = 5;
                arr[6] = 4;
                arr[7] = 3;
                arr[8] = 5;
                arr[9] = 8;
            }
            cout << endl;
            cout << "  " << arr[9] << ", " << arr[8] << ", " << arr[7] << ", " << arr[6] << ", " << arr[5] << ", " << arr[4] << ", " << arr[3] << ", " << arr[2] << ", " << arr[1] << ", " << arr[0] << endl << endl;
            HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            cout << "  " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << ", " << arr[5] << ", " << arr[6] << ", " << arr[7] << ", " << arr[8] << ", " << arr[9] << endl << endl;
            system("pause");
            
        }break;
        case '5':
        {
            const int size = 5;
            int arr[size];
            int one, two, three, four, five;
            cout << "  Enter the first length : ";
            cin >> one;
            cout << "  Enter the second length : ";
            cin >> two;
            cout << "  Enter the third length : ";
            cin >> three;
            cout << "  Enter the fourth length : ";
            cin >> four;
            cout << "  Enter the fifth length : ";
            cin >> five;
            cout << endl;
            for (size_t i = 0; i < size; i++)
            {
                arr[i] = 5;
                arr[0] = one;
                arr[1] = two;
                arr[2] = three;
                arr[3] = four;
                arr[4] = five;
            }
            cout << "  " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << "." << endl << endl;
            cout << "  Perimeter : " << one + two + three + four + five << endl;
            system("pause");
        }break;
        case '6' :
        {
            int min, max, one, two, three, four, five,six, seven, eight, nine, ten, eleven, twelve;
            const int size = 12;
            int arr[size];
            min = max = arr[0];  
            cout << "Enter the profit for 12 months : January - ";
            cin >> one;
            cout << "                                 February - ";
            cin >> two;
            cout << "                                 March - ";
            cin >> three;
            cout << "                                 April - ";
            cin >> four;
            cout << "                                 May - ";
            cin >> five;
            cout << "                                 June - ";
            cin >> six;
            cout << "                                 July - ";
            cin >> seven;
            cout << "                                 Augest - ";
            cin >> eight;
            cout << "                                 Semtember - ";
            cin >> nine;
            cout << "                                 October - ";
            cin >> ten;
            cout << "                                 November - ";
            cin >> eleven;
            cout << "                                 December - ";
            cin >> twelve;
            cout << endl;
            for (size_t i = 0; i < size; i++)  
            {       
               
               for (size_t j = 0; j < size; j++)      
               {            
                   if (min > arr[i])   
                     {    
                       min = arr[i];      
                     }    
                   if (max < arr[i])        
                     {            
                       max = arr[i];        
                     }       
               }      
               cout << endl << endl;  
            }
            system("pause");
        }break;
    }
    } while (true);
}