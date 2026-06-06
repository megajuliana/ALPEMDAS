#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    int npm;

    cout << "Masukan Nama : ";
    getline(cin, nama);

    cout << "Masukan NPM  : ";
    cin >> npm;

    cout << endl;
    cout << "Nama saya " << nama << " dan NPM saya " << npm << endl;

    return 0;
}
