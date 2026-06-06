#include <iostream>
using namespace std;

int main() {
    int nomorPegawai, jamLembur;
    string nama, jabatan, status;
    int gajiPokok = 0;
    double tunjangan = 0, lembur = 0, totalGaji = 0;

    // Input data pegawai
    cout << "Masukkan Nomor Pegawai: ";
    cin >> nomorPegawai;
    cout << "Masukkan Nama Pegawai: ";
    cin >> ws; getline(cin, nama);
    cout << "Masukkan Jabatan (Operator/Manajer): ";
    cin >> jabatan;
    cout << "Masukkan Jumlah Jam Lembur: ";
    cin >> jamLembur;
    cout << "Masukkan Status Pernikahan (Lajang/Menikah/TidakPunyaAnak/PunyaAnak): ";
    cin >> status;

    // Menentukan gaji pokok berdasarkan jabatan
    if (jabatan == "Operator" || jabatan == "operator") {
        gajiPokok = 2000000;
    } else if (jabatan == "Manajer" || jabatan == "manajer") {
        gajiPokok = 3500000;
    } else {
        cout << "Jabatan tidak valid!" << endl;
        return 0;
    }

    // Menentukan tunjangan berdasarkan status pernikahan
    if (status == "Lajang" || status == "lajang") {
        tunjangan = 0.05 * gajiPokok;
    } else if (status == "Menikah" || status == "menikah") {
        tunjangan = 0.10 * gajiPokok;
    } else if (status == "PunyaAnak" || status == "punyaanak") {
        tunjangan = 0.15 * gajiPokok;
    } else {
        cout << "Status tidak valid!" << endl;
        return 0;
    }

    // Hitung upah lembur (maksimal 20 jam)
    if (jamLembur > 20) {
        cout << "Jam lembur tidak boleh lebih dari 20!" << endl;
        jamLembur = 20; // otomatis dibatasi
    }
    lembur = jamLembur * (0.025 * gajiPokok);

    // Hitung total gaji
    totalGaji = gajiPokok + tunjangan + lembur;

    // Output 
    cout << "\n=== Data Gaji Pegawai ===" << endl;
    cout << "Nama Pegawai       : " << nama << endl;
    cout << "Jabatan            : " << jabatan << endl;
    cout << "Status Pernikahan  : " << status << endl;
    cout << "Gaji Pokok         : Rp. " << gajiPokok << endl;
    cout << "Tunjangan          : Rp. " << tunjangan << endl;
    cout << "Upah Lembur        : Rp. " << lembur << endl;
    cout << "Total Gaji Pegawai : Rp. " << totalGaji << endl;

    return 0;
}

