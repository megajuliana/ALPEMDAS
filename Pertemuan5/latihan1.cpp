#include <iostream>
using namespace std;

int main() {
    string lampu;

    cout << "Masukkan warna lampu (kuning / hijau / merah): ";
    getline(cin>>ws, lampu);

    if (lampu == "kuning") {
        cout << "Aksi: Siap-siap" << endl;
    }
    else if (lampu == "hijau") {
        cout << "Aksi: Jalan" << endl;
    }
    else if (lampu == "merah") {
        cout << "Aksi: Berhenti" << endl;
    }
    else {
        cout << "Warna tidak valid" << endl;
    }

    return 0;
}
