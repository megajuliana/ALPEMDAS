#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// PROTOTYPE FUNGSI & PROSEDUR
void inputAnggota(string data[][3], int jumlah);
void tampilDataAnggota(string data[][3], int jumlah);
int hitungDenda(string lamaStr);

int main() {
    const int jumlah = 4;
    string anggota[jumlah][3]; // kolom: No, Nama, Lama Hari

    // INPUT DATA ANGGOTA
    inputAnggota(anggota, jumlah);

    // TAMPILKAN DATA ANGGOTA
    tampilDataAnggota(anggota, jumlah);

    return 0;
}

// DEFINISI PROSEDUR INPUT
void inputAnggota(string data[][3], int jumlah) {
    for (int i = 0; i < jumlah; i++) {
        cout << "NO: ";
        getline(cin, data[i][0]);
        cout << "Nama Anggota: ";
        getline(cin, data[i][1]);
        cout << "Lama Peminjaman : ";
        getline(cin, data[i][2]);
        cout << endl;
    }
}

// DEFINISI PROSEDUR TAMPIL
void tampilDataAnggota(string data[][3], int jumlah) {
    cout << "DATA PEMINJAMAN BUKU\n";
    cout << "-------------------------------------------------------------\n";
    cout << "| " << setw(2)  << left << "No"
         << " | " << setw(15) << left << "Nama Anggota"
         << " | " << setw(21) << left << "Lama Hari Peminjaman"
         << " | " << setw(11) << left << "Denda (Rp.)" << "|\n";
    cout << "-------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        int denda = hitungDenda(data[i][2]);

        cout << "| " << setw(2)  << left << data[i][0]
             << " | " << setw(15) << left << data[i][1]
             << " | " << setw(21) << left << data[i][2]
             << " | " << setw(11) << left << denda << "|\n";
    }

    cout << "-------------------------------------------------------------\n";
}

// DEFINISI FUNGSI HITUNG DENDA
int hitungDenda(string lamaStr) {
    int lama;
    stringstream ss(lamaStr);
    ss >> lama;

    if (lama > 7) {
        int minggu = (lama - 7) / 7 + 1;
        return minggu * 5000;
    } else {
        return 0;
    }
}

