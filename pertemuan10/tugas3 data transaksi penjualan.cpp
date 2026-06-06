#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
	
/*
	Buatlah array 2 dimensi untuk data transaksi penjualan seperti yang terlihat pada gambar dibawah ini:
	
	DATA TRANSAKSI PENJUALAN:
	===========================================================
	ID Transaksi| Nama Produk  | Harga     | Jumlah | Total Harga
	===========================================================
	T001        | Laptop       | 15000000  | 2      | 30000000
	T002        | Smartphone   | 5000000   | 3      | 15000000
	T003        | Tablet       | 3000000   | 1      | 3000000
	T004        | Headphone    | 1000000   | 5      | 5000000
	T005        | Smartwatch   | 2000000   | 4      | 8000000
	===========================================================
	Total Pendapatan: 61000000

*/

    // Data transaksi: ID, Nama Produk, Harga, Jumlah
    string transaksi[5][4] = {
        {"T001", "Laptop",     "15000000", "2"},
        {"T002", "Smartphone", "5000000",  "3"},
        {"T003", "Tablet",     "3000000",  "1"},
        {"T004", "Headphone",  "1000000",  "5"},
        {"T005", "Smartwatch", "2000000",  "4"}
    };

    cout << "DATA TRANSAKSI PENJUALAN:\n";
    cout << "===========================================================\n";
    cout << setw(12) << left << "ID Transaksi"
         << "| " << setw(13) << left << "Nama Produk"
         << "| " << setw(10) << left << "Harga"
         << "| " << setw(7)  << left << "Jumlah"
         << "| " << setw(12) << left << "Total Harga" << endl;
    cout << "===========================================================\n";

    long harga, jumlah, totalHarga, totalPendapatan = 0;

    for (int i = 0; i < 5; i++) {
        stringstream h(transaksi[i][2]); h >> harga;
        stringstream j(transaksi[i][3]); j >> jumlah;
        totalHarga = harga * jumlah;
        totalPendapatan += totalHarga;

        cout << setw(12) << left << transaksi[i][0]
             << "| " << setw(13) << left << transaksi[i][1]
             << "| " << setw(10) << left << transaksi[i][2]
             << "| " << setw(7)  << left << transaksi[i][3]
             << "| " << setw(12) << left << totalHarga << endl;
    }

    cout << "===========================================================\n";
    cout << "Total Pendapatan: " << totalPendapatan << endl;

    return 0;
}

