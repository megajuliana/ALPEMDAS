#include <iostream>
using namespace std;

int main() {
    int angka;
    int terbesar;
    int terkecil; 
    int hitungan = 1; 
    cout << "Masukkan 5 angka:" << endl;

    while (hitungan <= 5) {
        cout << "Angka ke-" << hitungan << ": ";
        cin >> angka;
  
        if (hitungan == 1) {
            terbesar = angka;
            terkecil = angka;
        } else {
            if (angka > terbesar) {
                terbesar = angka;
            }
            if (angka < terkecil) {
                terkecil = angka;
            }
        }
        hitungan++;
    }

    cout << endl;
    cout << "Angka terbesar = " << terbesar << endl;
    cout << "Angka terkecil = " << terkecil << endl;

    return 0;
}
