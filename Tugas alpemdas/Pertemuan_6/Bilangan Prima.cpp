#include <iostream>
using namespace std;

int main() {
    int batas_angka;

    cout << "=========================================" << endl;
    cout << "PROGRAM PENCARI BILANGAN PRIMA" << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan angka : ";
    cin >> batas_angka;
    cout << "Bilangan Prima	: ";

    for (int i = 2; i <= batas_angka; ++i) {
        
        bool prima = true;

        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                prima = false;
                break;
            }
        }

        if (prima) {
            cout << i << " ";
        }
    }

    cout << endl;
    

    return 0;
}
