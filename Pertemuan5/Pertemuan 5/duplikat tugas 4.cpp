#include <iostream>
using namespace std;

int main() {
    int nomorPegawai, jamLembur;
    string nama, jabatan, status;
    long long gajiPokok = 0, tunjangan = 0, upahLembur = 0, totalGaji = 0;

    // Input data
    cout << "Nomor Pegawai\t\t: ";
    cin >> nomorPegawai;
    cout << "Nama Pegawai\t\t: ";
    cin >> ws; getline(cin, nama);

    cout << "Masukkan Jabatan (Operator/Manajer): ";
    cin >> jabatan;

    cout << "Masukkan Status Pernikahan (Lajang/Menikah/PunyaAnak): ";
    cin >> status;

    cout << "Jumlah Jam Lembur\t: ";
    cin >> jamLembur;

    // Validasi jam lembur
    if (jamLembur > 20) jamLembur = 20;

    // Tentukan gaji pokok berdasarkan jabatan
    if (jabatan == "Operator" || jabatan == "operator") {
        gajiPokok = 2000000;
    } else if (jabatan == "Manajer" || jabatan == "manajer") {
        gajiPokok = 3500000;
    } else {
        cout << "Jabatan tidak valid!\n";
        return 0;
    }

    // Tentukan tunjangan berdasarkan status
    if (status == "Lajang" || status == "lajang") {
        tunjangan = gajiPokok * 5 / 100;
    } else if (status == "Menikah" || status == "menikah") {
        tunjangan = gajiPokok * 10 / 100;
    } else if (status == "PunyaAnak" || status == "punyaanak") {
        tunjangan = gajiPokok * 15 / 100;
    } else {
        cout << "Status tidak valid!\n";
        return 0;
    }

    // Hitung upah lembur (2.5% per jam)
    upahLembur = jamLembur * (gajiPokok * 25 / 1000);

    // Hitung total gaji
    totalGaji = gajiPokok + tunjangan + upahLembur;

	cout << endl;
	
    // Output hasil
    cout << "Nama Pegawai\t\t: " << nama << endl;
    cout << "Jabatan\t\t\t: " << jabatan << endl;
    cout << "Status Pernikahan\t: " << status << endl;
    cout << "Gaji Pokok\t\t: Rp. " << gajiPokok << endl;
    cout << "Tunjangan\t\t: Rp. " << tunjangan << endl;
    cout << "Upah Lembur\t\t: Rp. " << upahLembur << endl;
    cout << "Total Gaji\t\t: Rp. " << totalGaji << endl;

    return 0;
}

