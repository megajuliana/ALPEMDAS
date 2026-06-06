#include <iostream>
using namespace std;

int main() {
	
    int bilangan;
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    if (bilangan > 0) {
        cout << "Bilangan tersebut adalah POSITIF" << endl;
    } else if (bilangan < 0) {
        cout << "Bilangan tersebut adalah NEGATIF" << endl;
    } else {
        cout << "Bilangan tersebut adalah NOL" << endl;
    }

    return 0;
}

