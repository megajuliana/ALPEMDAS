#include <iostream>
using namespace std;

int main() {
    int pilihan;
    cout << "Daftar Harga Sepatu:" << endl;
    cout << "1. Adidas  = Rp100.000" << endl;
    cout << "2. Nike    = Rp75.000" << endl;
    cout << "3. Reebok  = Rp80.000" << endl;

    cout << "\nPilih sepatu (1..3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Sepatu yang anda pilih: Adidas" << endl;
            cout << "Harga sepatu = Rp100.000" << endl;
            break;
        case 2:
            cout << "Sepatu yang anda pilih: Nike" << endl;
            cout << "Harga sepatu = Rp75.000" << endl;
            break;
        case 3:
            cout << "Sepatu yang anda pilih: Reebok" << endl;
            cout << "Harga sepatu = Rp80.000" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
    }

    return 0;
}

