#include <iostream>
#include <iomanip>

using namespace std; // اضافه شده

const int SIZE = 10;

int main() {
    // الف) اعلان آرایه با ابعاد 3x3
    float numbers[SIZE] = { 0.0, 1.1, 2.2, 9.9 };

    // ب) اشاره گر به داده از نوع float
    float* nptr;

    // ج) چاپ عناصر آرایه با استفاده از نشانه گذاری اندیس آرایه
    for (int i = 0; i < SIZE; i++) {
        cout << fixed << setprecision(1) << numbers[i] << " ";
    }
    cout << endl;

    // ز) چاپ عناصر آرایه با اندیس دهی به اشاره گر nptr
    nptr = numbers;
    for (int i = 0; i < SIZE; i++) {
        cout << fixed << setprecision(1) << *nptr++ << " ";
    }
    cout << endl;

    // ح) چاپ عناصر آرایه با استفاده از نشانه گذاری اندیس و اشاره گر nptr
    for (int i = 0; i < SIZE; i++) {
        cout << fixed << setprecision(1) << *(nptr + i) << " ";
    }
    cout << endl;

    // ط) مراجعه به آدرس با 8 + nptr
    cout << "8 + nptr -> " << (8 + nptr) << endl;

    // ی) مراجعه به آدرس با 4 -- nPtr
    nptr = &numbers[5];
    cout << "4 -- nPtr -> " << (nptr - 4) << endl;

    // د) نشانه گذاری اشاره گر nptr به شروع آرایه numbers
    nptr = numbers;

    // ه) چاپ عناصر آرایه با استفاده از نشانه گذاری اشاره گر / انحراف
    for (int i = 0; i < SIZE; i++) {
        cout << fixed << setprecision(1) << *++nptr << " ";
    }
    cout << endl;

    // و) چاپ عناصر آرایه با استفاده از نشانه گذاری اشاره گر / انحراف با نام آرایه
    for (int i = 0; i < SIZE; i++) {
        cout << fixed << setprecision(1) << *(numbers + i) << " ";
    }
    cout << endl;

    return 0;
}
