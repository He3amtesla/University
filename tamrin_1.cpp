/*میتوانیم از چندین روش این مسئله رو بیابیم، دو روش آن : اولین روش بیایم از 3 حلقه تعریف کنیم. در هر حلقه اولی، از
کاربر عناصر آرایه بگیریم و در دوحلقه دیگر حلقه تودرتو درست کنیم که اعداد غیر تکراری را تشخیص دهد و در این روش اول
دوتا آرایه نیاز داریم، آرایه ای که از ورودی بگیرد، 2 آرایه ای تکراری بودن رو جمع کند از آرایه ورودی و...
(بدون استفاده از بولین)~ */
//+"
#include <iostream>

using namespace std;

int main() {
    const int size = 8;
    int numbers[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    cout << "Non-duplicate elements: ";

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
//"+