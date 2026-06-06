#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, jabatan, status;
    int jamLembur;
    double gajiPokok = 0, tunjangan = 0, uangLembur = 0, totalGaji = 0;

    // Input
    cout << "Masukkan Nama Pegawai: ";
    getline(cin, nama);
    cout << "Masukkan Jabatan (Operator/Manajer): ";
    cin >> jabatan;
    cout << "Masukkan Status Pernikahan (Lajang/Menikah_Tanpa_Anak/Menikah_Punya_Anak): ";
    cin >> status;
    cout << "Masukkan Jumlah Jam Lembur (maks 20 jam): ";
    cin >> jamLembur;

    // Validasi jam lembur
    if (jamLembur > 20) {
        cout << "Jam lembur tidak boleh lebih dari 20 jam. Program dihentikan.\n";
        return 1;
    }

    // Gaji Pokok
    if (jabatan == "Operator") {
        gajiPokok = 2000000;
    } else if (jabatan == "Manajer") {
        gajiPokok = 3500000;
    } else {
        cout << "Jabatan tidak dikenali. Program dihentikan.\n";
        return 1;
    }

    // Tunjangan
    if (status == "Lajang") {
        tunjangan = 0.05 * gajiPokok;
    } else if (status == "Menikah_Tanpa_Anak") {
        tunjangan = 0.10 * gajiPokok;
    } else if (status == "Menikah_Punya_Anak") {
        tunjangan = 0.15 * gajiPokok;
    } else {
        cout << "Status pernikahan tidak dikenali. Program dihentikan.\n";
        return 1;
    }

    // Upah lembur
    uangLembur = jamLembur * 0.025 * gajiPokok;

    // Total gaji
    totalGaji = gajiPokok + tunjangan + uangLembur;

    // Output
    cout << "\n=== Slip Gaji Pegawai ===\n";
    cout << "Nama               : " << nama << endl;
    cout << "Jabatan            : " << jabatan << endl;
    cout << "Status Pernikahan  : " << status << endl;
    cout << "Gaji Pokok         : Rp " << gajiPokok << endl;
    cout << "Tunjangan          : Rp " << tunjangan << endl;
    cout << "Uang Lembur        : Rp " << uangLembur << endl;
    cout << "Total Gaji         : Rp " << totalGaji << endl;

	cin.get();
    return 0;
}

