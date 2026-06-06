#include <iostream>
using namespace std;

int main() {
    int nik, gajiPokok, jamLembur;
    string nama;
    float tunjangan, upahLembur, totalGaji;

    cout << ".........................................." << endl;
    cout << "          PROGRAM PENGGAJIAN              " << endl;
    cout << ".........................................." << endl;

    cout << "NIK                : ";
    cin >> nik;
    cin.ignore();
    cout << "NAMA KARYAWAN      : ";
    getline(cin, nama);
    cout << "GAJI POKOK (Rp)    : ";
    cin >> gajiPokok;
    cout << "JUMLAH JAM LEMBUR  : ";
    cin >> jamLembur;

    tunjangan = 0.10 * gajiPokok;
    upahLembur = jamLembur * (0.05 * gajiPokok);
    totalGaji = gajiPokok + tunjangan + upahLembur;

    cout << ".........................................." << endl;
    cout << "NIK                : " << nik << endl;
    cout << "NAMA KARYAWAN      : " << nama << endl;
    cout << "GAJI POKOK (Rp)    : " << gajiPokok << endl;
    cout << "TUNJANGAN KERJA (Rp): " << tunjangan << endl;
    cout << "UPAH LEMBUR (Rp)   : " << upahLembur << endl;
    cout << "TOTAL GAJI (Rp)    : " << totalGaji << endl;
    cout << ".........................................." << endl;

    return 0;
}
