#include <iostream>
using namespace std;

int main() {
	
	int total_penjualan = 0;
    int jumlah_harga_1 = 6000;
    int jumlah_harga_2 = 1500;
    int jumlah_harga_3 = 8000;

    total_penjualan = jumlah_harga_1 + jumlah_harga_2 + jumlah_harga_3;

    cout << "Daftar Penjualan Toko" << endl;
    cout << "==============================================================" << endl;
    cout << " No | Kode | Nama Barang | Quantity | Harga |  Jumlah Harga  |" << endl;
    cout << "==============================================================" << endl;
    cout << " 1  | BRG1 |    Sabun    |     2    | 3000  |      6000      |" << endl;
    cout << " 2  | BRG2 |   Pensil    |     1    | 1500  |      1500      |" << endl;
    cout << " 3  | BRG3 |   Indomie   |     4    | 2000  |      8000      |" << endl;
    cout << "==============================================================" << endl;

    cout << "                         Total Penjualan: |   " << total_penjualan << "          |" << endl;
    cout << "==============================================================" << endl;
}
