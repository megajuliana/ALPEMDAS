#include <iostream>

using namespace std;

int main() {
    string nama_kasir;
    string nama_barang;
    double harga_barang;
    int jumlah_barang;
    
    double total_harga_semua = 0.0;
    double jumlah_yang_harus_dibayar;
    double potongan;
    double pembayaran;
    double kembalian;

    cout << "=================================================" << endl;
    cout << "      PROGRAM KASIR TOKO KELONTONG SEDERHANA     " << endl;
    cout << "=================================================" << endl;
    cout << "NAMA KASIR  : ";
    cin >> nama_kasir;

    cout << "-------------------------------------------------" << endl;

    cout << "Barang ke-1" << endl;
    
    cout << "  NAMA BARANG : ";
    cin >> nama_barang;
    
    cout << "  HARGA (Rp)  : ";
    cin >> harga_barang;
    
    cout << "  JUMLAH BARANG : ";
    cin >> jumlah_barang;

    total_harga_semua = harga_barang * jumlah_barang;
    cout << "-------------------------------------------------" << endl;

    jumlah_yang_harus_dibayar = total_harga_semua;

    cout.precision(0); 
    cout << "TOTAL BELANJA               : Rp " << fixed << total_harga_semua << endl;
    cout << "JUMLAH YANG HARUS DI BAYAR  : Rp " << fixed << jumlah_yang_harus_dibayar << endl;

    cout << "POTONGAN (Rp)               : ";
    cin >> potongan;
    
    jumlah_yang_harus_dibayar -= potongan;

    cout << "TOTAL SETELAH POTONGAN      : Rp " << fixed << jumlah_yang_harus_dibayar << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "PEMBAYARAN (Rp)             : ";
    cin >> pembayaran;

    kembalian = pembayaran - jumlah_yang_harus_dibayar;

    cout << "KEMBALIAN (Rp)              : Rp " << fixed << kembalian << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "Terima kasih, " << nama_kasir << "! Selamat bertugas." << endl;
    cout << "=================================================" << endl;

    return 0;
}
