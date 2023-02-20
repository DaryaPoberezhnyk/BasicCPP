#include <iostream>
using namespace std;

struct Student {
    string surname;
    string group;
    int marks[5];
};

int main() {
    Student* students = new Student[10]; 
    delete[] students; 
    for (int i = 0; i < size; i++) {
        int excellent_count = 0;
        for (int j = 0; j < 5; j++) {
            if (students[i].grades[j] >= 90) {
                excellent_count++;
            }
        }
        if (excellent_count * 100 / 5 > 75) {
            cout << students[i].surname << endl;
        }
    }
    return 0;
}