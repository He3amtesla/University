#include <iostream>
#include <iomanip>

using namespace std; // اضافه شده

int main() {
    // الف) متغیر ثابت
    const int arraySize = 10;

    // ب) آرایه از نوع float
    float fractions[arraySize] = {0.0f};

    // ج) نام چهارمین عنصر آرایه
    cout << "Fourth element: " << fractions[3] << endl;

    // ه) مقدار 1/667 را به عنصر 9 آرایه نسبت دهید.
    fractions[8] = 1.0f / 667;

    // و) مقدار 3/333 را به هفتمین عنصر آرایه نسبت دهید.
    fractions[6] = 3.0f / 333;

    // ز) عناصر 6 و 9 آرایه را با دو رقم اعشار چاپ کنید.
    cout << fixed << setprecision(2);
    cout << "Sixth element: " << fractions[5] << endl;
    cout << "Ninth element: " << fractions[8] << endl;

    // ح) چاپ همه عناصر آرایه با استفاده از ساختار تکرار for
    for (int x = 0; x < arraySize; ++x) {
        cout << "Element " << x << ": " << fractions[x] << endl;
    }

    return 0;
}
