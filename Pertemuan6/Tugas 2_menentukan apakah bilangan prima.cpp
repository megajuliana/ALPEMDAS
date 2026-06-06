#include <iostream>
using namespace std;

int main() {
    int bilangan;
    int hitungan_pembagi = 0;
    cout << "Masukkan Bilangan: ";
    cin >> bilangan;
    cout << endl;

    if (bilangan <= 1) {
        cout << bilangan << " bukan bilangan prima" << endl;
        return 0;  
    }

    for (int i = 1; i <= bilangan; i++) {
        if (bilangan % i == 0) {
            hitungan_pembagi++;
        }
    }
    
    if (hitungan_pembagi == 2) {
        cout << bilangan << " adalah bilangan prima" << endl;
    } else {
        cout << bilangan << " bukan bilangan prima" << endl;
    }

    return 0;
}
