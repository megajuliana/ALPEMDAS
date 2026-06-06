#include <iostream>
using namespace std;

int main() {
    cout << "=== INPUT DATA BIODATA MAHASISWA ===" << endl;

    // Deklarasi variabel
    string nama, tempatLahir, tanggalLahir;
    int tahunLahir;
    char jenisKelamin;
    short umur;
    double beratBadan;
    float tinggiBadan;
    char golonganDarah;
    long uangSaku;
    bool mahasiswa;

    // Input dari user
    cout << "Masukkan Nama            : ";
    getline(cin, nama); 

    cout << "Masukkan Tempat Lahir    : ";
    getline(cin, tempatLahir);

    cout << "Masukkan Tanggal Lahir   : ";
    getline(cin, tanggalLahir);

    cout << "Masukkan Tahun Lahir     : ";
    cin >> tahunLahir;

    cout << "Masukkan Jenis Kelamin (L/P): ";
    cin >> jenisKelamin;

    cout << "Masukkan Umur            : ";
    cin >> umur;

    cout << "Masukkan Berat Badan (kg): ";
    cin >> beratBadan;

    cout << "Masukkan Tinggi Badan (cm): ";
    cin >> tinggiBadan;

    cout << "Masukkan Golongan Darah  : ";
    cin >> golonganDarah;

    cout << "Masukkan Uang Saku       : ";
    cin >> uangSaku;

    cout << "Apakah Kamu Mahasiswa Aktif? (1=Ya, 0=Tidak): ";
    cin >> mahasiswa;

    // Output hasil input
    cout << "\n=== DATA BIODATA MAHASISWA ===" << endl;
    cout << "Nama            : " << nama << endl;
    cout << "Tempat Lahir    : " << tempatLahir << endl;
    cout << "Tanggal Lahir   : " << tanggalLahir << " " << tahunLahir << endl;
    cout << "Jenis Kelamin   : " << jenisKelamin << endl;
    cout << "Umur            : " << umur << " tahun" << endl;
    cout << "Berat Badan     : " << beratBadan << " kg" << endl;
    cout << "Tinggi Badan    : " << tinggiBadan << " cm" << endl;
    cout << "Golongan Darah  : " << golonganDarah << endl;
    cout << "Uang Saku       : Rp " << uangSaku << endl;
    cout << "Status Mahasiswa: " << (mahasiswa ? "Ya" : "Tidak") << endl;

	cin.get();
    return 0;
}

