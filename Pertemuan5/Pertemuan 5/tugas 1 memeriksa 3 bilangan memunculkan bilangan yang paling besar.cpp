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

    int terbesar;

    // Logika untuk mencari bilangan terbesar
    if (bil1 >= bil2 && bil1 >= bil3) {
        terbesar = bil1;
    }
    else if (bil2 >= bil1 && bil2 >= bil3) {
        terbesar = bil2;
    }
    else {
        terbesar = bil3;
    }

    // Output hasil
    cout << "Bilangan Terbesar adalah: " << terbesar << endl;

    return 0;
}

