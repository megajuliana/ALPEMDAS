#include <iostream>
using namespace std;

int main() {
    // Membuat array 2 dimensi 4x4
    int tabel[4][4];

    // tampilan kolom
    tabel[0][0] = 0; 
    tabel[0][1] = 1;
    tabel[0][2] = 2;
    tabel[0][3] = 3;

    // tampilan baris
    tabel[1][0] = 1;
    tabel[2][0] = 2;
    tabel[3][0] = 3;

    // Mengisi hasil perkalian
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            tabel[i][j] = tabel[i][0] * tabel[0][j];
        }
    }

    // Menampilkan tabel
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i == 0 && j == 0)
                cout << "*"; 
            else
                cout << tabel[i][j] << "";
        }
        cout << endl;
    }

    return 0;
}
