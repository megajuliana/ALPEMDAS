#include <iostream>
using namespace std;

int main() {
    short a = 5;
    short temp; //untuk menetapkan nilai variabel supaya tidak terganti nilainya

    temp = a;
    cout << (temp += 1) << "\n"; // 5 + 1 = 6

    temp = a;
    cout << (temp -= 1) << "\n"; // 5 - 1 = 4

    temp = a;
    cout << (temp *= 1) << "\n"; // 5 * 1 = 5

    temp = a;
    cout << (temp /= 1) << "\n"; // 5 / 1 = 5

    temp = a;
    cout << (temp %= 1) << "\n"; // 5 % 1 = 0

    cin.get();
    return 0;
}
