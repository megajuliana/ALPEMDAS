#include <iostream>
using namespace std;

int main() {
   
    cout << "=== BIODATA MAHASISWA ===" << endl;

    // Deklarasi dan inisialisasi variabel langsung
    string nama = "Mega Juliana";
	string tempatLahir = "Cianjur";
	string tanggalLahir = "08 Juli";
	int tahunLahir = 2007;
	char jenisKelamin = 'P';
	short umur = 18;
	double beratBadan = 43.7;
	float tinggiBadan = 156.0;
	char golonganDarah = 'O';
	long uangSaku = 50000;
	bool mahasiswaAktif = true;

    // Output
 	cout << "Nama            : " << nama << endl;                 
    cout << "Tempat Lahir    : " << tempatLahir << endl;         
    cout << "Tanggal Lahir   : " << tanggalLahir << " " << tahunLahir << endl; 
  	cout << "Jenis Kelamin   : " << jenisKelamin << endl;
    cout << "Umur            : " << umur << " tahun" << endl;
    cout << "Berat Badan     : " << beratBadan << " kg" << endl;
    cout << "Tinggi Badan    : " << tinggiBadan << " cm" << endl;
    cout << "Golongan Darah  : " << golonganDarah << endl;
    cout << "Uang Saku       : Rp " << uangSaku << endl;
    cout << "Status Mahasiswa: " << (mahasiswaAktif ? "Ya" : "Tidak") << endl;
    
    return 0;
}

