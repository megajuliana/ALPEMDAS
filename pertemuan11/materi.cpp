#include <iostream>
using namespace std;

// PROTOTYPE PROSEDUR (VOID)
void tampilAngka(int a);
void perkalianDuaAngka(int a, int b);


// PROTOTYPE FUNGSI (NON-VOID)
int perkalianAngka(int a, int b);

int main() {

    // BAGIAN PROSEDUR (VOID)
    int angka;
    cout << "Masukkan sebuah angka : ";
    cin >> angka;

    tampilAngka(angka); // memanggil prosedur tampilAngka
    cout << endl;

    perkalianDuaAngka(3, 5); // memanggil prosedur perkalianDuaAngka
    cout << endl;

    // BAGIAN FUNGSI (NON-VOID)
    int hasilPerkalian;
    hasilPerkalian = perkalianAngka(6, 7); // memanggil fungsi perkalianAngka
    cout << "Hasil perkalian fungsi: " << hasilPerkalian << endl;

    return 0;
}


// DEFINISI PROSEDUR (VOID)
void tampilAngka(int a) {
    cout << "Angka yang dimasukkan: " << a;
}

void perkalianDuaAngka(int a, int b) {
    int hasil = a * b;
    cout << "Hasil perkalian prosedur: " << a << " x " << b << " = " << hasil;
}


// DEFINISI FUNGSI (NON-VOID)
int perkalianAngka(int a, int b) {
    int hasil = a * b;
    return hasil; // mengembalikan nilai
}

