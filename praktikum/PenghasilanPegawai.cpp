#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, alamat;
    double gajiPokok, tunjangan, pajak, gajiBersih;

    cout << "Masukkan Nama       : "; getline(cin, nama);
    cout << "Masukkan Alamat     : "; getline(cin, alamat);
    cout << "Masukkan Gaji Pokok : "; cin >> gajiPokok;

    tunjangan = 0.15 * gajiPokok;
    pajak = 0.075 * gajiPokok;
    gajiBersih = gajiPokok + tunjangan - pajak;

    cout << "\n===== Hasil Penghasilan Pegawai =====\n";
    cout << "Nama        : " << nama << endl;
    cout << "Alamat      : " << alamat << endl;
    cout << "Gaji Pokok  : Rp " << gajiPokok << endl;
    cout << "Tunjangan   : Rp " << tunjangan << endl;
    cout << "Pajak       : Rp " << pajak << endl;
    cout << "Gaji Bersih : Rp " << gajiBersih << endl;

    return 0;
}
