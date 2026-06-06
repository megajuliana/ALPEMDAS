//Input output variable

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
    cout << "==============================" << endl;
    cout << "Hello World" << endl;
    cout << "Nama saya  : " << nama << endl;
    cout << "Umur saya  : " << umur << " tahun" << endl;
    cout << "IPK saya   : " << ipk << endl;
    cout << "==============================" << endl;

    return 0;
}
