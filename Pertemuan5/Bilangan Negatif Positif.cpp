#include <iostream>
using namespace std;

int main() {
    
    int bilangan1, bilangan2, bilangan3;
    
    cout << "Input:" << endl;
    cout << " Masukkan bilangan ke-1: ";
    cin >> bilangan1;
    cout << " Masukkan bilangan ke-2: ";
    cin >> bilangan2;
    cout << " Masukkan bilangan ke-3: ";
    cin >> bilangan3;

    int bilanganTerbesar = bilangan1;
    if (bilangan2 > bilanganTerbesar) {
        bilanganTerbesar = bilangan2;
    }
    if (bilangan3 > bilanganTerbesar) {
        bilanganTerbesar = bilangan3;
    }
    
    int bilanganTerkecil = bilangan1;
    if (bilangan2 < bilanganTerkecil) {
        bilanganTerkecil = bilangan2;
    }
    if (bilangan3 < bilanganTerkecil) {
        bilanganTerkecil = bilangan3;
    }
    string tandaTerbesar;
    if (bilanganTerbesar >= 0) {
        tandaTerbesar = "positif";
    } else {
        tandaTerbesar = "negatif";
    }

    cout << endl;
    cout << "Output:" << endl;
    cout << "Bilangan Terbesar adalah: " << bilanganTerbesar << endl;
    cout << "Bilangan Terkecil adalah: " << bilanganTerkecil << endl;
    cout << "Bilangan terbesar adalah: " << tandaTerbesar << endl;

    return 0;
}
