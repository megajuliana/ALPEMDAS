#include <iostream>
using namespace std;

int main() {
    int jabatan;

    cout << "Daftar Jabatan Pegawai:" << endl;
    cout << "1. Operator" << endl;
    cout << "2. Staff" << endl;
    cout << "3. Manager" << endl;

    cout << "\nMasukkan pilihan jabatan : ";
    cin >> jabatan;

    if (jabatan == 1) {
        cout << "Gaji pokok = Rp. 3.000.000" << endl;
    }
    else if (jabatan == 2) {
        cout << "Gaji pokok = Rp. 4.000.000" << endl;
    }
    else if (jabatan == 3) {
        cout << "Gaji pokok = Rp. 5.000.000" << endl;
    }
    else {
        cout << "Pilihan jabatan tidak valid" << endl;
    }

    return 0;
}

