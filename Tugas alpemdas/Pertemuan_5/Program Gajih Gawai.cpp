#include <iostream>
using namespace std;

const long long GAJI_OPERATOR = 2000000;
const long long GAJI_MANAJER = 3500000;

int main() {
    int jabatanPilihan;
    int statusNikahPilihan;
    int punyaAnak;
    int jamLembur;
    
    long long gajiPokok = 0;
    double persentaseTunjangan;
    long long tunjangan = 0;
    long long upahLembur = 0;
    long long gajiTotal = 0;
    
    char namaJabatan[10]; 
    cout << "========================================" << endl;
    cout << " PROGRAM PENGHITUNGAN GAJI PEGAWAI      " << endl;
    cout << "========================================" << endl;
    cout << "Pilih Jabatan:" << endl;
    cout << "1. Operator (Rp. 2.000.000)" << endl;
    cout << "2. Manajer (Rp. 3.500.000)" << endl;
    cout << "Pilihan Anda (1/2): ";
    cin >> jabatanPilihan;

    if (jabatanPilihan == 1) {
        gajiPokok = GAJI_OPERATOR;
        namaJabatan[0] = 'O';
        namaJabatan[1] = 'p';
        namaJabatan[2] = 'e';
        namaJabatan[3] = 'r';
        namaJabatan[4] = 'a';
        namaJabatan[5] = 't';
        namaJabatan[6] = 'o';
        namaJabatan[7] = 'r';
        namaJabatan[8] = '\0';
    } else if (jabatanPilihan == 2) {
        gajiPokok = GAJI_MANAJER;
        namaJabatan[0] = 'M';
        namaJabatan[1] = 'a';
        namaJabatan[2] = 'n';
        namaJabatan[3] = 'a';
        namaJabatan[4] = 'j';
        namaJabatan[5] = 'e';
        namaJabatan[6] = 'r';
        namaJabatan[7] = '\0';
    } else {
        cout << "\nPilihan jabatan tidak valid. Program dihentikan." << endl;
        return 1;
    }

    cout << "\nStatus Pernikahan:" << endl;
    cout << "1. Belum Menikah" << endl;
    cout << "2. Sudah Menikah" << endl;
    cout << "Pilihan Anda (1/2): ";
    cin >> statusNikahPilihan;

    punyaAnak = 0;
    if (statusNikahPilihan == 2) {
        cout << "Apakah memiliki anak? (1 = Ya, 0 = Tidak): ";
        cin >> punyaAnak;
    }
    
    cout << "Masukkan Jumlah Jam Lembur Bulanan: ";
    cin >> jamLembur;
    
    if (jamLembur > 20) {
        jamLembur = 20;
        cout << "Peringatan: Jam lembur dibatasi maksimal 20 jam per bulan." << endl;
    }

    if (statusNikahPilihan == 1) {
        persentaseTunjangan = 0.05; 
    } else if (statusNikahPilihan == 2 && punyaAnak == 1) {
        persentaseTunjangan = 0.15; 
    } else if (statusNikahPilihan == 2 && punyaAnak == 0) {
        persentaseTunjangan = 0.10; 
    } else {
        persentaseTunjangan = 0.0; 
    }
    
    tunjangan = (long long)(gajiPokok * persentaseTunjangan);

    double upahPerJamLembur = gajiPokok * 0.025; 
    upahLembur = (long long)(upahPerJamLembur * jamLembur);
    
    gajiTotal = gajiPokok + tunjangan + upahLembur;

    cout << "\n========================================" << endl;
    cout << "           SLIP GAJI PEGAWAI            " << endl;
    cout << "========================================" << endl;
    cout << "Jabatan                 : " << namaJabatan << endl;
    cout << "Gaji Pokok              : Rp. " << gajiPokok << endl;
    cout << "----------------------------------------" << endl;
    cout << "Tunjangan (" << (persentaseTunjangan * 100) << "%)      : Rp. " << tunjangan << endl;
    cout << "Upah Lembur (" << jamLembur << " Jam)  : Rp. " << upahLembur << endl;
    cout << "----------------------------------------" << endl;
    cout << "GAJI TOTAL DITERIMA     : Rp. " << gajiTotal << endl;
    cout << "========================================" << endl;
}
