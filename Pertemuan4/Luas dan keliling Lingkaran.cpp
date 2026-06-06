#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14;
    float r, luas, keliling;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    luas = phi * r * r;
    keliling = 2 * phi * r;

    cout << "Luas lingkaran = " << luas << endl;
    cout << "Keliling lingkaran = " << keliling << endl;

    return 0;
}
