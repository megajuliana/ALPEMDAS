#include <iostream>
using namespace std;

int main() {
    int nilaiAngka;
    char nilaiHuruf;
    cout << "========================================" << endl;
    cout << " Program Konversi Nilai Angka ke Huruf  " << endl;
    cout << "========================================" << endl;
    cout << "Masukkan Nilai Angka (0-100): ";
    
	    if (!(cin >> nilaiAngka)) {
        cout << "\nInput tidak valid. Harap masukkan angka." << endl;
        return 1;
    }

    if (nilaiAngka < 0 || nilaiAngka > 100) {
        cout << "\nNilai yang dimasukkan tidak valid (harus antara 0-100)." << endl;
        return 0; 
    }
    
    if (nilaiAngka >= 80) {
        nilaiHuruf = 'A';
    }
    else if (nilaiAngka >= 65) {
        nilaiHuruf = 'B'; 
    }
    else if (nilaiAngka >= 50) {
        nilaiHuruf = 'C'; 
    }
    else if (nilaiAngka >= 35) {
        nilaiHuruf = 'D';
    }
    else {
        nilaiHuruf = 'E';
    }

    cout << "\nNilai Angka Anda: " << nilaiAngka << endl;
    cout << "Nilai Huruf Anda: " << nilaiHuruf << endl;
    cout << "========================================" << endl;

    return 0;
}
