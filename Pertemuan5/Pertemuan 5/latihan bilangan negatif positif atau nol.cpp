#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    // Mengecek apakah bilangan negatif, positif, atau nol
    if (bilangan > 0) {
        cout << "Bilangan POSITIF" << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan NEGATIF" << endl;
    } else {
        cout << "Bilangan NOL" << endl;
    }

    return 0;
}

