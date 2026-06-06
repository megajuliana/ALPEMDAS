#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// PROTOTYPE FUNGSI & PROSEDUR
void input_data(string data[][4], int jumlah);
void tampil_data(string data[][4], int jumlah);
float hitung_ipk(string data[][4], int jumlah);

int main() {
    const int jumlah = 5;
    string mahasiswa[jumlah][4];

    // INPUT DATA MAHASISWA
    input_data(mahasiswa, jumlah);
    
    // TAMPILKAN DATA MAHASISWA
    tampil_data(mahasiswa, jumlah);

    // HITUNG RATA-RATA IPK
    float rataIpk = hitung_ipk(mahasiswa, jumlah);
    cout << "===========================================================\n";
    cout << "Rata-rata IPK: " << fixed << setprecision(1) << rataIpk << endl;

    return 0;
}

// DEFINISI PROSEDUR INPUT
void input_data(string data[][4], int jumlah) {
    string nim[5]     = {"123456", "123457", "123458", "123459", "123460"};
    string nama[5]    = {"Ayu Rahma", "Budi Santoso", "Citra Dewi", "Doni Pratama", "Eka Saputra"};
    string jurusan[5] = {"Teknik Informatika", "Sistem Informasi", "Teknik Elektro", "Manajemen", "Teknik Mesin"};
    string ipk[5]     = {"3.8", "3.6", "3.9", "3.5", "3.5"};

    for (int i = 0; i < jumlah; i++) {
        data[i][0] = nim[i];
        data[i][1] = nama[i];
        data[i][2] = jurusan[i];
        data[i][3] = ipk[i];
    }
}

// DEFINISI PROSEDUR TAMPIL
void tampil_data(string data[][4], int jumlah) {
    cout << "DATA MAHASISWA :\n";
    cout << "===========================================================\n";
    cout << setw(9)  << left << "NIM"
         << " | " << setw(13) << left << "NAMA"
         << " | " << setw(20) << left << "JURUSAN"
         << " | " << setw(4)  << left << "IPK" << endl;
    cout << "===========================================================\n";

    for (int i = 0; i < jumlah; i++) {
        cout << setw(9)  << left << data[i][0]
             << " | " << setw(13) << left << data[i][1]
             << " | " << setw(20) << left << data[i][2]
             << " | " << setw(4)  << left << data[i][3] << endl;
    }
}

// DEFINISI FUNGSI HITUNG IPK
float hitung_ipk(string data[][4], int jumlah) {
    float total = 0;
    for (int i = 0; i < jumlah; i++) {
        stringstream ss(data[i][3]);
        float ipk;
        ss >> ipk;
        total += ipk;
    }
    return total / jumlah;
}

