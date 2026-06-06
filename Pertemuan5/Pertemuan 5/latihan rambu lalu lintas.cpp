#include <iostream>
using namespace std;

int main() {
    string lampu;

    cout << "Masukkan warna lampu : ";
    getline(cin>>ws, lampu);

    if (lampu == "kuning") {
        cout << "Siap-siap" << endl;
    }
    else if (lampu == "hijau") {
        cout << "Jalan" << endl;
    }
    else if (lampu == "merah") {
        cout << "Berhenti" << endl;
    }
    else {
        cout << "Warna tidak valid" << endl;
    }

    return 0;
}
