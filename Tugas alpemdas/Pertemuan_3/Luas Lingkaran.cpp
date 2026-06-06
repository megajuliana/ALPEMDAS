#include <iostream>
using namespace std;

int main() {
    float jari_jari;
    const float PI = 3.14;
    float luas;
    
    cout << "Menghitung Luas Lingkaran Menggunakan Inputan" << endl;
    cout << "Masukkan Jari-jari (Radius) Lingkaran : ";
    
    cin >> jari_jari;
    
    luas = PI * jari_jari * jari_jari;
    
    cout << "--------------------------------" << endl;
    
    cout << "Maka Hasil Perhitungannya :" << endl;
    cout << "Jari-jari yang dimasukkan: " << jari_jari << endl;
    cout << "Konstanta Pi yang digunakan: " << PI << endl;
    cout << "MAKA LUAS LINGKARAN = " << PI << " x " << jari_jari << " x " << jari_jari << " = " << luas << endl;
}
