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

    cout << endl;
    cout << "Output:" << endl;
    cout << "Bilangan Terbesar adalah: " << bilanganTerbesar << endl;
}
