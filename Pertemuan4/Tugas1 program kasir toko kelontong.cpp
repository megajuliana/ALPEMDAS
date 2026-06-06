#include <iostream>

using namespace std;

int main() {
    // Deklarasi variabel
    // Menggunakan string untuk nama/nomor dan double untuk nilai mata uang
    char nama_kasir[50];
    char no_barang[20];
    char nama_barang[50];
    double harga;
    int jumlah_barang;
    
    double total_bayar;
    double potongan;
    double total_setelah_potongan;
    double pembayaran;
    double kembalian;

    cout << "===== PROGRAM KASIR TOKO KELONTONG =====" << endl;

    // --- INPUT DATA (DIINPUT) ---
    cout << "\n--- INPUT DATA BARANG ---" << endl;
    
    // NAMA KASIR
    cout << "NAMA KASIR           : ";
    cin.get(nama_kasir, 50);

    cin.ignore(); 

    // NO BARANG
    cout << "NO BARANG            : ";
    cin >> no_barang;

    cin.ignore(); 

    // NAMA BARANG
    cout << "NAMA BARANG          : ";
    cin.get(nama_barang, 50);

    // HARGA
    cout << "HARGA (per unit)     : Rp ";
    cin >> harga;

    // JUMLAH BARANG
    cout << "JUMLAH BARANG        : ";
    cin >> jumlah_barang;

    // --- PERHITUNGAN TOTAL ---
    total_bayar = harga * jumlah_barang;

    cout << "\n----------------------------------------" << endl;
    cout << "JUMLAH YANG HARUS DIBAYAR: Rp " << total_bayar << endl;
    
    // POTONGAN
    cout << "POTONGAN (nilai nominal) : Rp ";
    cin >> potongan;
    
    total_setelah_potongan = total_bayar - potongan;
    
    cout << "Total Bersih             : Rp " << total_setelah_potongan << endl;

    // PEMBAYARAN
    cout << "PEMBAYARAN               : Rp ";
    cin >> pembayaran;

    // --- PERHITUNGAN KEMBALIAN ---
    kembalian = pembayaran - total_setelah_potongan;

    // --- OUTPUT STRUK ---
    cout << "\n========================================" << endl;
    cout << "              STRUK BELANJA             " << endl;
    cout << "========================================" << endl;
    cout << "Kasir              : " << nama_kasir << endl;
    cout << "Nama Barang        : " << nama_barang << endl;
    cout << "Harga x Jumlah     : Rp " << harga << " x " << jumlah_barang << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Awal         : Rp " << total_bayar << endl;
    cout << "Potongan           : Rp " << potongan << endl;
    cout << "TOTAL BERSIH       : Rp " << total_setelah_potongan << endl;
    cout << "----------------------------------------" << endl;
    cout << "Bayar              : Rp " << pembayaran << endl;
    cout << "KEMBALIAN          : Rp " << kembalian << endl;
    cout << "========================================" << endl;

    cin.get();
    return 0;
}
