#include <iostream>
using namespace std;

int main() {

    string nama;
    short umur;
    long long npm;
    float berat_badan;
    char jenis_kelamin;
    bool status_mahasiswa;
    int jumlah_keluarga;
    double tinggi_badan;


    cout << "========== Input Biodata Diri ==========" << endl;
    cout << "Masukkan Nama Lengkap                  : ";
    getline(cin, nama);
    
    cout << "Masukkan Jumlah Keluarga               : ";
    cin >> jumlah_keluarga;

    cout << "Masukkan Umur                          : ";
    cin >> umur;

    cout << "Masukkan NPM                           : ";
    cin >> npm;

    cout << "Masukkan Berat Badan                   : ";
    cin >> berat_badan;

    cout << "Masukkan Tinggi Badan                  : ";
    cin >> tinggi_badan;

    cout << "Masukkan Jenis Kelamin (L/P)           : ";
    cin >> jenis_kelamin;

    cout << "Apakah Anda Mahasiswa? (1=Ya/0=Tidak)  : ";
    cin >> status_mahasiswa;

    cout << "\n========== BIODATA DIRI ==========" << endl;
    cout << "Nama (string)                          : " << nama << endl;
    cout << "Umur (short)                           : " << umur << " tahun" << endl;
    cout << "Jumlah Keluarga (int)                  : " << jumlah_keluarga << endl;
    cout << "NPM (long)                             : " << npm << endl;
    cout << "Berat Badan (float)                    : " << berat_badan << " kg" << endl;
    cout << "Tinggi Badan (double)                  : " << tinggi_badan << " cm" << endl;
    cout << "Jenis Kelamin (char)                   : " << jenis_kelamin << endl;
    cout << "Status Mahasiswa (bool)                : " << (status_mahasiswa ? "Ya" : "Tidak") << endl;
    cout << "==================================" << endl;

}
