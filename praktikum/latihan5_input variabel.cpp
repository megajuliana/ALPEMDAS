#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int umur;
    float ipk;

    cout << "Masukan Nama : ";
    getline(cin, nama);

    cout << "Masukan Umur : ";
    cin >> umur;

    cout << "Masukan IPK  : ";
    cin >> ipk;

    cout << endl;
    cout << "===============================" << endl;
    cout << "Halo, nama saya " << nama << endl;
    cout << "Umur saya " << umur << " tahun" << endl;
    cout << "IPK saya " << ipk << endl;
    cout << "===============================" << endl;

    return 0;
}
