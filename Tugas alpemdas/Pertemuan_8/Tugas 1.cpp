#include <iostream>
using namespace std;

int main() {
    int angka;
    
    cout << "Masukan angka : ";
    cin >> angka;
    cout << "Bilangan Prima: ";
    
    for (int i = 2; i <= angka; i++) {
        bool prima = true;

        if (i <= 1) {
            prima = false;
        }
        else if (i == 2) {
            prima = true;
        }
        else if (i % 2 == 0) {
            prima = false;
        }
        else {
        	
            for (int j = 3; j * j <= i; j += 2) {
                if (i % j == 0) {
                    prima = false;
                    break;
                }
            }
        }

        if (prima) {
            cout << i << "  ";
        }
    }
    
    cout << endl;
}
