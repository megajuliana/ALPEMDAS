#include <iostream>
using namespace std;

int main() {
    double C = 37;
    double Reamur = (C * 4) / 5;
    double Fahrenheit = (C * 9) / 5 + 32;

    cout << "===== Konversi Suhu =====\n";
    cout << "Celcius    : " << C << " C\n";
    cout << "Reamur     : " << Reamur << " R\n";
    cout << "Fahrenheit : " << Fahrenheit << " F\n";

    return 0;
}
