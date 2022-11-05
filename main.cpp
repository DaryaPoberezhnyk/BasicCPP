#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

using namespace std;
template <typename T>
T* initializeArray(const uint32_t size)
{
    return new T[size];
}
template <typename T>
void randArray(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 15;
    }
}
template <typename T>
void printArray(T* arr, const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}
template <typename T>
T* deletArray(T* arr, const uint32_t size)
{
    delete[] arr;
    return nullptr;
}
template<typename T>
T* resloveCopy(T* arr, int& size)
{
    int size_copy = 0;
    bool flag = false;
    int k = 0;
    T* arr_copy = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        arr_copy[i] = -1;
    }
    for (size_t i = 0; i < size; i++)
    {
        flag = false;
        for (size_t j = 0; j < size; j++)
        {
            if (arr[i] == arr_copy[j])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            arr_copy[k] = arr[i];
            k++;
        }
    }
    for (size_t i = 0; i < size; i++)
    {
        if (arr_copy[i] != -1)
        {
            size_copy++;
        }
        else
        {
            break;
        }
    }
    T* res = new T[size_copy];
    for (size_t i = 0; i < size_copy; i++)
    {
        res[i] = arr_copy[i];
    }
    delete[]arr_copy;
    size = size_copy;
    return res;
}
template <typename T>
T* initializeArrayC(T* A, T* B, const uint32_t M, const uint32_t N, int& counter)
{
    bool flag = false;
    if (counter == 0)
    {
        for (size_t i = 0; i < M; i++)
        {
            flag = false;
            for (size_t j = 0; j < N; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                counter++;
            }
        }
        return initializeArrayC<T>(A, B, M, N, counter);
    }
    else
    {
        T* arr = new T[counter];
        int k = 0;
        for (size_t i = 0; i < M; i++)
        {
            flag = false;
            for (size_t j = 0; j < N; j++)
            {
                if (A[i] == B[j])
                {
                    flag = true;
                    break;
                }
            }
            if (flag == false)
            {
                arr[k] = A[i];
                k++;
            }
        }
        return arr;
    }
}
int main()
{
    char switch_on;
    do
    {
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        system("cls");
        cout << "\t\t\t\t\t#>----------<MENU>----------<#" << endl;
        cout << "\t\t\t\t\t|         1 - Case 1         |" << endl;
        cout << "\t\t\t\t\t|         2 - Case 2         |" << endl;
        cout << "\t\t\t\t\t|         3 - Case 3         |" << endl;
        cout << "\t\t\t\t\t|         4 - Case 4         |" << endl;
        cout << "\t\t\t\t\t|         5 - Case 5         |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        cout << "\t\t\t\t\t|         0 - Exit           |" << endl;
        cout << "\t\t\t\t\t#>--------------------------<#" << endl;
        switch_on = _getch();
        system("cls");
        switch (switch_on)
        {
        case '1':
        {
            srand(time(0));
            int M, N;
            cout << "Enter M->";
            cin >> M;
            cout << "Enter N->";
            cin >> N;
            int* A = initializeArray<int>(M);
            int* B = initializeArray<int>(N);
            randArray<int>(A, M);
            randArray<int>(B, N);
            cout << "Array A-> ";
            printArray<int>(A, M);
            cout << "Array B-> ";
            printArray<int>(B, N);
            int sizeC = 0;
            int* C = initializeArrayC<int>(A, B, M, N, sizeC);
            cout << "Array C with copy-> ";
            printArray<int>(C, sizeC);
            int* res = resloveCopy<int>(C, sizeC);
            cout << "Array C-> ";
            printArray<int>(res, sizeC);
            //-----------------------------
            A = deletArray<int>(A, M);
            B = deletArray<int>(B, N);
            C = deletArray<int>(C, sizeC);
            system("pause");
        }break;
        }
    } while (true);
    return 0;
}