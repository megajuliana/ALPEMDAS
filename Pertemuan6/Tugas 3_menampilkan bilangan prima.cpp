#include <iostream>
using namespace std;

int main() {
    int batas_angka;
    int angka_saat_ini = 2;
    bool is_prima;

    cout << "Masukkan angka: ";
    cin >> batas_angka;

    cout << "Bilangan Prima: ";

    if (batas_angka >= 2) {
        do {
            is_prima = true;
            for (int i = 2; i < angka_saat_ini; i++) {
                if (angka_saat_ini % i == 0) {
                    is_prima = false;
                    break;
                }
            }

            if (is_prima) {
                cout << angka_saat_ini << " ";
            }
            
            angka_saat_ini++;

        } while (angka_saat_ini <= batas_angka);
    }
    
    cout << endl;
    return 0;
}
