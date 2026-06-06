#include <iostream>
using namespace std;

int main() {
    float celsius, reamur, fahrenheit;

    cout << "===== Program Konversi Suhu =====" << endl;
    cout << "Masukkan suhu dalam Celcius : ";
    cin >> celsius;

    // Rumus konversi
    reamur = (celsius * 4) / 5;
    fahrenheit = (celsius * 9) / 5 + 32;

    cout << "\n===== Hasil Konversi =====" << endl;
    cout << "Suhu Celcius    : " << celsius << " C" << endl;
    cout << "Suhu Reamur     : " << reamur << " R" << endl;
    cout << "Suhu Fahrenheit : " << fahrenheit << " F" << endl;

    return 0;
}
