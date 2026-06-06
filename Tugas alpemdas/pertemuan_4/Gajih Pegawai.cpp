#include <iostream>
using namespace std;

int main() {
    char nik[50];
    char nama_pegawai[50];
    
    double gaji_pokok;
    int jam_lembur;
    
    double tunjangan;
    double upah_per_jam_lembur;
    double total_upah_lembur;
    double total_gaji;

    const double PERSEN_TUNJANGAN = 0.10;
    const double PERSEN_UPAH_LEMBUR_PERJAM = 0.05;

    cout << "=================================================" << endl;
    cout << "           PROGRAM PENGHITUNGAN GAJI PEGAWAI       " << endl;
    cout << "=================================================" << endl;
    
    cout << "Masukkan (Input):" << endl;
    
    cout << "Nomor Pegawai (NIK) : ";
    cin >> nik; 
    
    cout << "Nama Pegawai          : ";
    cin >> nama_pegawai;
    
    cout << "Gaji Pokok (Rp)     : ";
    cin >> gaji_pokok;
    
    cout << "Jumlah Jam Lembur   : ";
    cin >> jam_lembur;

    tunjangan = gaji_pokok * PERSEN_TUNJANGAN;
    upah_per_jam_lembur = gaji_pokok * PERSEN_UPAH_LEMBUR_PERJAM;
    total_upah_lembur = upah_per_jam_lembur * jam_lembur;
    total_gaji = gaji_pokok + tunjangan + total_upah_lembur;

    cout << "\n=================================================" << endl;
    cout << "               STRUK GAJI PEGAWAI                  " << endl;
    cout << "=================================================" << endl;

    cout << "NIK                 : " << nik << endl;
    cout << "NAMA PEGAWAI        : " << nama_pegawai << endl;
    cout << "GAJI POKOK          : Rp " << (int)gaji_pokok << endl;
    cout << "JUMLAH JAM LEMBUR   : " << jam_lembur << " jam" << endl;
    cout << "-------------------------------------------------" << endl;

    cout << "TUNJANGAN           : Rp " << (int)tunjangan << endl;
    cout << "UPAH LEMBUR         : Rp " << (int)total_upah_lembur << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "TOTAL GAJI          : Rp " << (int)total_gaji << endl;
    
    cout << "=================================================" << endl;

    return 0;
}
