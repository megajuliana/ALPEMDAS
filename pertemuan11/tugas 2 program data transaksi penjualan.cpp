#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

// PROTOTYPE FUNGSI & PROSEDUR
void inputBarang(string data[][4], int jumlah);
void tampilDataBarang(string data[][4], int jumlah);
long hitungTotalHarga(string hargaStr, string jumlahStr);
long TotalPendapatan(string data[][4], int jumlah);

int main() {
    const int jumlah = 5;
    string transaksi[jumlah][4];

    // INPUT DATA TRANSAKSI
    inputBarang(transaksi, jumlah);

    // TAMPILKAN DATA TRANSAKSI
    tampilDataBarang(transaksi, jumlah);

    // HITUNG TOTAL PENDAPATAN
    long total = TotalPendapatan(transaksi, jumlah);
    cout << "===========================================================\n";
    cout << "Total Pendapatan: " << total << endl;

    return 0;
}

// DEFINISI PROSEDUR INPUT
void inputBarang(string data[][4], int jumlah) {
    string id[5]     = {"T001", "T002", "T003", "T004", "T005"};
    string produk[5] = {"Laptop", "Smartphone", "Tablet", "Headphone", "Smartwatch"};
    string harga[5]  = {"15000000", "5000000", "3000000", "1000000", "2000000"};
    string jumlahB[5]= {"2", "3", "1", "5", "4"};

    for (int i = 0; i < jumlah; i++) {
        data[i][0] = id[i];
        data[i][1] = produk[i];
        data[i][2] = harga[i];
        data[i][3] = jumlahB[i];
    }
}

// DEFINISI PROSEDUR TAMPIL
void tampilDataBarang(string data[][4], int jumlah) {
    cout << "DATA TRANSAKSI PENJUALAN:\n";
    cout << "===========================================================\n";
    cout << setw(12) << left << "ID Transaksi"
         << "| " << setw(13) << left << "Nama Produk"
         << "| " << setw(10) << left << "Harga"
         << "| " << setw(7)  << left << "Jumlah"
         << "| " << setw(12) << left << "Total Harga" << endl;
    cout << "===========================================================\n";

    for (int i = 0; i < jumlah; i++) {
        long totalHarga = hitungTotalHarga(data[i][2], data[i][3]);

        cout << setw(12) << left << data[i][0]
             << "| " << setw(13) << left << data[i][1]
             << "| " << setw(10) << left << data[i][2]
             << "| " << setw(7)  << left << data[i][3]
             << "| " << setw(12) << left << totalHarga << endl;
    }
}

// DEFINISI FUNGSI TOTAL HARGA PER BARIS
long hitungTotalHarga(string hargaStr, string jumlahStr) {
    long harga, jumlah;
    stringstream h(hargaStr); h >> harga;
    stringstream j(jumlahStr); j >> jumlah;
    return harga * jumlah;
}

// DEFINISI FUNGSI TOTAL PENDAPATAN
long TotalPendapatan(string data[][4], int jumlah) {
    long total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += hitungTotalHarga(data[i][2], data[i][3]);
    }
    return total;
}

