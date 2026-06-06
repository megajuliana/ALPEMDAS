#include <iostream>
using namespace std;

// PROSEDUR (VOID FUNCTION)
// Menghitung luas lingkaran langsung
void luasLingkaran(float phi, int r) {
    float hasil = phi * r * r;
    cout << "Luas lingkaran (void) : " << hasil << endl;
}

void tampilPerkalian(float a, int b) {
    cout << "a : " << a << " x b : " << b << endl;
    cout << "Hasil perkalian : " << a * b << endl;
}

int main() {
    float phi;
    int r;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    cout << "Masukkan nilai phi : ";
    cin >> phi;

    tampilPerkalian(phi, r);
    luasLingkaran(phi, r);

    return 0;
}

