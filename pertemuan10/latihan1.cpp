#include <iostream>
using namespace std;

// PROTOTYPE
void tampilNama(string nama);
void tampilPenjumlahan(int a, int b);
int hitungLuasPersegi(int sisi);

int main() {
    string nama;
    int sisi;

    // Memanggil prosedur
    cout << "Masukkan nama: ";
    cin >> nama;
    tampilNama(nama);

    cout << endl;
    tampilPenjumlahan(4, 6);

    // Memanggil fungsi
    cout << endl;
    cout << "Masukkan sisi persegi: ";
    cin >> sisi;

    int luas = hitungLuasPersegi(sisi);
    cout << "Luas persegi: " << luas << endl;

    return 0;
}

// DEFINISI PROSEDUR
void tampilNama(string nama) {
    cout << "Nama kamu: " << nama;
}

void tampilPenjumlahan(int a, int b) {
    cout << "Hasil penjumlahan: " << a + b;
}

// DEFINISI FUNGSI
int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

