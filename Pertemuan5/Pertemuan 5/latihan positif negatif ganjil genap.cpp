#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    // Tahap 1: Positif atau Negatif (atau Nol)
    if (bilangan > 0) {
        cout << "Bilangan POSITIF" << endl;

        // Tahap 2: Jika positif, cek Ganjil atau Genap
        if (bilangan % 2 == 0) {
            cout << "Bilangan tersebut GENAP" << endl;
        } else {
            cout << "Bilangan tersebut GANJIL" << endl;
        }

    } else if (bilangan < 0) {
        cout << "Bilangan NEGATIF" << endl;
    } else {
        cout << "Bilangan NOL" << endl;
    }

    return 0;
}

