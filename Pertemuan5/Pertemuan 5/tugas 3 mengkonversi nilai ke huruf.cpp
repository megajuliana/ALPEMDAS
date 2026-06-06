#include <iostream>
using namespace std;

int main() {
    int nilai;

    // Input nilai
    cout << "Masukkan nilai : ";
    cin >> nilai;

    // Konversi nilai ke huruf
    if (nilai >= 80 && nilai <= 100) {
        cout << "Nilai : A" << endl;
    }
    else if (nilai >= 65 && nilai <= 79) {
        cout << "Nilai : B" << endl;
    }
    else if (nilai >= 50 && nilai <= 64) {
        cout << "Nilai : C" << endl;
    }
    else if (nilai >= 35 && nilai <= 49) {
        cout << "Nilai : D" << endl;
    }
    else if (nilai >= 0 && nilai <= 34) {
        cout << "Nilai : E" << endl;
    }
    else {
        cout << "Nilai tidak valid (harus 0 - 100)" << endl;
    }

    return 0;
}

