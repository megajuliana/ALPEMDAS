#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaDepan, namaLengkap;

    cout << "Masukan Nama Depan (pakai cin) : ";
    cin >> namaDepan;

    cin.ignore(); // supaya input sebelumnya tidak bentrok dengan getline
    cout << "Masukan Nama Lengkap (pakai getline) : ";
    getline(cin, namaLengkap);

    cout << endl;
    cout << "Nama Depan   : " << namaDepan << endl;
    cout << "Nama Lengkap : " << namaLengkap << endl;

    return 0;
} 
