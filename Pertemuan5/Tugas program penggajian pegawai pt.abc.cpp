#include <iostream>
using namespace std;

int main() {
    int nomorPegawai, pilihanJabatan, pilihanStatus;
    char namaPegawai[50];
    int gajiPokok = 0, tunjangan = 0, honorLembur = 0, totalGaji = 0;

    // Input data
    cout << "-- Program Penggajian Pegawai PT. ABC --\n";
    cout << "Nomor Pegawai : ";
    cin >> nomorPegawai;
    cin.ignore(); 
    cout << "Nama Pegawai : ";
    cin.getline(namaPegawai, 50);

    cout << "Jabatan:\n1. Operator\n2. Manajer\n";
    cout << "Pilihan Jabatan : ";
    cin >> pilihanJabatan;

    cout << "Status Pernikahan:\n1. Lajang\n2. Sudah Menikah\n3. Mempunyai Anak\n";
    cout << "Pilih Status : ";
    cin >> pilihanStatus;

    // Output awal
    cout << "\n=== Slip Gaji ===\n";
    cout << "Nomor Pegawai     : " << nomorPegawai << endl;
    cout << "Nama Pegawai      : " << namaPegawai << endl;

    // Proses jabatan
    if (pilihanJabatan == 1) {
        gajiPokok = 2000000;
        cout << "Jabatan           : Operator\n";
    }
    else if (pilihanJabatan == 2) {
        gajiPokok = 4000000;
        cout << "Jabatan           : Manajer\n";
    }
    else {
        cout << "Jabatan           : Tidak Diketahui\n";
    }

    // Proses status
    if (pilihanStatus == 1) {
        tunjangan = 0;
        cout << "Status Pernikahan : Lajang\n";
    }
    else if (pilihanStatus == 2) {
        tunjangan = 100000;
        cout << "Status Pernikahan : Sudah Menikah\n";
    }
    else if (pilihanStatus == 3) {
        tunjangan = 200000;
        cout << "Status Pernikahan : Mempunyai Anak\n";
    }
    else {
        cout << "Status Pernikahan : Tidak Diketahui\n";
    }

    // Honor lembur tetap
    honorLembur = 50000;

    // Hitung total gaji
    totalGaji = gajiPokok + tunjangan + honorLembur;

    // Output gaji
    cout << "Gaji Pokok        : Rp " << gajiPokok << endl;
    cout << "Tunjangan         : Rp " << tunjangan << endl;
    cout << "Honor Lembur      : Rp " << honorLembur << endl;
    cout << "Total Gaji        : Rp " << totalGaji << endl;

    cin.get();
    return 0;
}

