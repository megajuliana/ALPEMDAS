#include <iostream>
using namespace std; 

int main() {
    int panjang;
    int lebar;
	int luas;
	
	cout << "Menghitung Luas Menggunakan Inputan" << endl;
	cout << "Masukan Panjang : ";
	cin >> panjang;
	cout << "Masukan Lebar : ";
	cin >> lebar;
	luas = panjang * lebar ;
	cout << "--------------------------------" << endl;
	
	cout << "Maka Hasil Perhitungan nya :" << endl;
	cout << "Panjang yang dimasukan" << panjang << endl;
	cout << "Lebar yang dimasukan" << lebar << endl;
	cout << "MAKA LUAS  = " << panjang << " x " << lebar << " = " << luas << endl;
}
