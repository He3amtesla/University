#include <iostream>

using namespace std; // اضافه شده

int main() {
    // الف) اعلان آرایه با ابعاد 3x3
    const int arraysize = 3;
    int table[arraysize][arraysize];

    // ب) تعداد عناصر در آرایه
    int numberOfElements = arraysize * arraysize;

    // ج) مقداردهی اولیه با استفاده از دو حلقه for
    for (int x = 0; x < arraysize; x++) {
        for (int y = 0; y < arraysize; y++) {
            table[x][y] = x + y;
        }
    }

    // د) چاپ مقادیر آرایه به شکل جدولی
    for (int x = 0; x < arraysize; x++) {
        for (int y = 0; y < arraysize; y++) {
            cout << table[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
