#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TARIF_PULSA = 100;
    const int BIAYA_LANGGANAN = 10000;

    string nomor, nama, alamat;
    int pulsa;

    cout << "Masukkan Nomor Langganan : "; getline(cin, nomor);
    cout << "Masukkan Nama Langganan  : "; getline(cin, nama);
    cout << "Masukkan Alamat          : "; getline(cin, alamat);
    cout << "Masukkan Jumlah Pulsa    : "; cin >> pulsa;

    int biayaPulsa = pulsa * TARIF_PULSA;
    int total = biayaPulsa + BIAYA_LANGGANAN;

    cout << "\n===== Rincian Tagihan =====\n";
    cout << "Nomor Langganan : " << nomor << endl;
    cout << "Nama Langganan  : " << nama << endl;
    cout << "Alamat          : " << alamat << endl;
    cout << "Biaya Langganan : Rp " << BIAYA_LANGGANAN << endl;
    cout << "Biaya Pulsa     : Rp " << biayaPulsa 
         << " (" << pulsa << " x Rp 100)" << endl;
    cout << "Total Tagihan   : Rp " << total << endl;

    return 0;
}
