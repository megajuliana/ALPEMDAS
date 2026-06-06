#include <iostream>
using namespace std;

int main() {
    int panjang, lebar, luas;

	cout << "-----------------------------------------" << endl;
    cout << "     MENGHITUNG LUAS PERSEGI PANJANG     " << endl;
    cout << "-----------------------------------------" << endl;
	
    cout << " Masukkan Panjang = ";
    cin >> panjang;
    cout << " Masukan Lebar   = ";
    cin >> lebar;

    luas = panjang * lebar;

    cout << "-----------------------------------------" << endl;
    cout << "JIKA PANJANG = " << panjang << " DAN LEBAR = " << lebar << endl;
    cout << "MAKA LUAS PERSEGI PANJANG = " << luas << endl;
    cout << "-----------------------------------------" << endl;
    cout << "SELAMAT MENGERJAKAN !!!" << endl;

    return 0;
}
