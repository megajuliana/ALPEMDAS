#include <iostream>
using namespace std;

// FUNGSI (NON-VOID FUNCTION)
// Menghitung luas lingkaran dengan return nilai
float luasLingkaran(float phi, int r) {
    float hasil = phi * r * r;
    return hasil; // mengembalikan nilai
}

int main() {
    float phi;
    int r;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    cout << "Masukkan nilai phi : ";
    cin >> phi;

    float hasil = luasLingkaran(phi, r);
    cout << "Luas lingkaran (function) : " << hasil << endl;

    return 0;
}

