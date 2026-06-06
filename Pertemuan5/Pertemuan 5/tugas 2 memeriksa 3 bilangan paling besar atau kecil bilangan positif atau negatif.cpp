#include <iostream>
using namespace std;

int main() {
    int bil1, bil2, bil3;

    // Input 3 bilangan
    cout << "Masukkan bilangan ke-1: ";
    cin >> bil1;
    cout << "Masukkan bilangan ke-2: ";
    cin >> bil2;
    cout << "Masukkan bilangan ke-3: ";
    cin >> bil3;

	// Alasan pakai IF berulang, bukan IF-ELSE,
    // karena setiap bilangan harus tetap dibandingkan satu per satu.
    // Kalau pakai IF-ELSE, begitu satu kondisi benar kondisi berikutnya tidak akan diperiksa.
    // Akibatnya, bisa saja ada bilangan lain yang lebih besar/kecil
    // tapi tidak sempat dibandingkan.
    // Dengan IF berulang, semua kondisi tetap dicek sehingga hasil pasti benar.
    // Cari bilangan terbesar
    
    int terbesar = bil1;
    if (bil2 > terbesar) {
        terbesar = bil2;
    }
    if (bil3 > terbesar) {
        terbesar = bil3;
    }

    // Cari bilangan terkecil
    int terkecil = bil1;
    if (bil2 < terkecil) {
        terkecil = bil2;
    }
    if (bil3 < terkecil) {
        terkecil = bil3;
    }

    // Output hasil
    cout << "Bilangan Terbesar adalah: " << terbesar << endl;
    cout << "Bilangan Terkecil adalah: " << terkecil << endl;

    // Cek positif/negatif untuk bilangan terbesar
    if (terbesar > 0) {
        cout << "Bilangan terbesar adalah POSITIF" << endl;
    } else if (terbesar < 0) {
        cout << "Bilangan terbesar adalah NEGATIF" << endl;
    } else {
        cout << "Bilangan terbesar adalah NOL" << endl;
    }

    return 0;
}

